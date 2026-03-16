import json
import time
from pathlib import Path

import numpy as np
import streamlit as st

# -----------------------------
# Optional imports (loaded lazily)
# -----------------------------
# BERT search deps
try:
    import faiss
    import torch
    from transformers import AutoTokenizer, AutoModel
    BERT_DEPS_OK = True
except Exception:
    BERT_DEPS_OK = False

# Lucene/Pyserini deps
try:
    from pyserini.search.lucene import LuceneSearcher
    LUCENE_DEPS_OK = True
except Exception:
    LUCENE_DEPS_OK = False


# -----------------------------
# Config
# -----------------------------
DEFAULT_BERT_INDEX_DIR = "data/bert_index"
DEFAULT_LUCENE_INDEX_DIR = "indexes/gutenberg"


# -----------------------------
# BERT Searcher
# -----------------------------
class BERTSearcher:
    def __init__(self, index_dir: str):
        self.index_dir = Path(index_dir)

        with open(self.index_dir / "config.json", "r", encoding="utf-8") as f:
            self.config = json.load(f)

        self.model_name = self.config["model_name"]
        self.max_length = self.config["max_length"]

        self.tokenizer = AutoTokenizer.from_pretrained(self.model_name)
        self.model = AutoModel.from_pretrained(self.model_name)

        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
        self.model.to(self.device)
        self.model.eval()

        self.index = faiss.read_index(str(self.index_dir / "faiss_index.bin"))

        with open(self.index_dir / "passages.json", "r", encoding="utf-8") as f:
            self.passages = json.load(f)

        with open(self.index_dir / "metadata.json", "r", encoding="utf-8") as f:
            self.metadata = json.load(f)

    def encode_query(self, query: str) -> np.ndarray:
        inputs = self.tokenizer(
            query,
            padding=True,
            truncation=True,
            max_length=self.max_length,
            return_tensors="pt",
        )
        inputs = {k: v.to(self.device) for k, v in inputs.items()}

        with torch.no_grad():
            outputs = self.model(**inputs)
            embeddings = outputs.last_hidden_state.mean(dim=1)

        query_embedding = embeddings.cpu().numpy().astype("float32")
        faiss.normalize_L2(query_embedding)
        return query_embedding

    def search(self, query: str, topk: int = 5):
        query_embedding = self.encode_query(query)
        scores, indices = self.index.search(query_embedding, topk)

        results = []
        for score, idx in zip(scores[0], indices[0]):
            if idx == -1:
                continue
            results.append(
                {
                    "score": float(score),
                    "passage": self.passages[idx],
                    "metadata": self.metadata[idx],
                }
            )
        return results


# -----------------------------
# Cached loaders
# -----------------------------
@st.cache_resource(show_spinner=False)
def load_bert_searcher(index_dir: str):
    return BERTSearcher(index_dir)


@st.cache_resource(show_spinner=False)
def load_lucene_searcher(index_dir: str):
    return LuceneSearcher(index_dir)


# -----------------------------
# Search helpers
# -----------------------------
def run_bert_search(query: str, topk: int, index_dir: str):
    searcher = load_bert_searcher(index_dir)
    return searcher.search(query, topk)



def run_lucene_search(query: str, topk: int, index_dir: str):
    searcher = load_lucene_searcher(index_dir)
    hits = searcher.search(query, topk)

    results = []
    for hit in hits:
        raw_text = ""
        doc_title = ""

        try:
            doc = searcher.doc(hit.docid)
            raw_text = doc.raw() if doc else ""
        except Exception:
            raw_text = ""

        if raw_text:
            try:
                raw_json = json.loads(raw_text)
                doc_title = raw_json.get("title", "")
                snippet = raw_json.get("contents", "")[:500]
            except Exception:
                snippet = raw_text[:500]
        else:
            snippet = "Raw document text unavailable."

        results.append(
            {
                "docid": hit.docid,
                "score": float(hit.score),
                "title": doc_title,
                "snippet": snippet,
            }
        )
    return results


# -----------------------------
# UI
# -----------------------------
st.set_page_config(page_title="BERT vs Lucene Search", layout="wide")

st.title("BERT vs Lucene Search Interface")
st.write(
    "Search the Gutenberg collection using either Lucene keyword search or BERT semantic search."
)

with st.sidebar:
    st.header("Search Settings")
    search_type = st.selectbox("Choose index", ["bert", "lucene"])
    topk = st.slider("Top-k results", min_value=1, max_value=20, value=5)

    bert_index_dir = st.text_input("BERT index directory", DEFAULT_BERT_INDEX_DIR)
    lucene_index_dir = st.text_input("Lucene index directory", DEFAULT_LUCENE_INDEX_DIR)

query = st.text_input("Enter your query", placeholder="Example: love and war")
search_clicked = st.button("Search")

if search_clicked:
    if not query.strip():
        st.warning("Please enter a query.")
        st.stop()

    if search_type == "bert":
        if not BERT_DEPS_OK:
            st.error("BERT dependencies are missing. Install: torch, transformers, faiss-cpu")
            st.stop()

        if not Path(bert_index_dir).exists():
            st.error(f"BERT index directory not found: {bert_index_dir}")
            st.stop()

        with st.spinner("Running BERT semantic search..."):
            try:
                start_time = time.perf_counter()
                results = run_bert_search(query, topk, bert_index_dir)
                elapsed_time = time.perf_counter() - start_time
            except Exception as e:
                st.error(f"BERT search failed: {e}")
                st.stop()

        st.subheader(f"Top {len(results)} BERT Results")
        st.info(f"Search completed in {elapsed_time:.4f} seconds")
        for i, result in enumerate(results, 1):
            meta = result["metadata"]
            with st.container(border=True):
                st.markdown(f"**Result {i}**")
                st.write(f"**Score:** {result['score']:.4f}")
                st.write(f"**Book ID:** {meta.get('book_id', 'N/A')}")
                st.write(f"**Title:** {meta.get('title', 'N/A')}")
                st.write(f"**Passage #:** {meta.get('passage_idx', 'N/A')}")
                st.write(f"**Path:** {meta.get('book_path', 'N/A')}")
                st.write("**Snippet:**")
                st.write(result["passage"][:600] + ("..." if len(result["passage"]) > 600 else ""))

    else:
        if not LUCENE_DEPS_OK:
            st.error("Lucene dependencies are missing. Install: pyserini")
            st.stop()

        if not Path(lucene_index_dir).exists():
            st.error(f"Lucene index directory not found: {lucene_index_dir}")
            st.stop()

        with st.spinner("Running Lucene keyword search..."):
            try:
                start_time = time.perf_counter()
                results = run_lucene_search(query, topk, lucene_index_dir)
                elapsed_time = time.perf_counter() - start_time
            except Exception as e:
                st.error(f"Lucene search failed: {e}")
                st.stop()

        st.subheader(f"Top {len(results)} Lucene Results")
        st.info(f"Search completed in {elapsed_time:.4f} seconds")
        for i, result in enumerate(results, 1):
            with st.container(border=True):
                st.markdown(f"**Result {i}**")
                st.write(f"**Score:** {result['score']:.4f}")
                st.write(f"**Doc ID:** {result['docid']}")
                if result["title"]:
                    st.write(f"**Title:** {result['title']}")
                st.write("**Snippet:**")
                st.write(result["snippet"] + ("..." if len(result["snippet"]) >= 500 else ""))

st.markdown("---")
st.caption("Tip: Build the BERT index first for semantic search, and build the Lucene index from Part A before using Lucene mode.")
