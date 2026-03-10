import argparse
import json
from pathlib import Path

import numpy as np
import torch
import faiss
from transformers import AutoTokenizer, AutoModel


class BERTSearcher:
    def __init__(self, index_dir):
        self.index_dir = Path(index_dir)

        # Load config
        with open(self.index_dir / "config.json", "r") as f:
            self.config = json.load(f)

        self.model_name = self.config["model_name"]
        self.max_length = self.config["max_length"]

        print(f"Loading model: {self.model_name}")
        self.tokenizer = AutoTokenizer.from_pretrained(self.model_name)
        self.model = AutoModel.from_pretrained(self.model_name)

        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
        self.model.to(self.device)
        self.model.eval()

        # Load FAISS index
        self.index = faiss.read_index(str(self.index_dir / "faiss_index.bin"))

        # Load passages
        with open(self.index_dir / "passages.json", "r", encoding="utf-8") as f:
            self.passages = json.load(f)

        # Load metadata
        with open(self.index_dir / "metadata.json", "r", encoding="utf-8") as f:
            self.metadata = json.load(f)

    def encode_query(self, query):
        inputs = self.tokenizer(
            query,
            padding=True,
            truncation=True,
            max_length=self.max_length,
            return_tensors="pt"
        )

        inputs = {k: v.to(self.device) for k, v in inputs.items()}

        with torch.no_grad():
            outputs = self.model(**inputs)
            embeddings = outputs.last_hidden_state.mean(dim=1)

        embedding = embeddings.cpu().numpy().astype("float32")
        faiss.normalize_L2(embedding)
        return embedding

    def search(self, query, topk=5):
        query_embedding = self.encode_query(query)
        scores, indices = self.index.search(query_embedding, topk)

        results = []
        for score, idx in zip(scores[0], indices[0]):
            if idx == -1:
                continue

            results.append({
                "score": float(score),
                "passage": self.passages[idx],
                "metadata": self.metadata[idx]
            })

        return results


def main():
    parser = argparse.ArgumentParser(description="Search BERT FAISS index")
    parser.add_argument("--query", type=str, required=True, help="Search query")
    parser.add_argument("--index_dir", type=str, default="data/bert_index", help="BERT index directory")
    parser.add_argument("--topk", type=int, default=5, help="Number of results")
    args = parser.parse_args()

    searcher = BERTSearcher(args.index_dir)
    results = searcher.search(args.query, args.topk)

    print("=" * 80)
    print(f"Query: {args.query}")
    print(f"Top {args.topk} BERT results")
    print("=" * 80)

    for i, result in enumerate(results, 1):
        meta = result["metadata"]
        snippet = result["passage"][:300].replace("\n", " ")

        print(f"\nResult {i}")
        print(f"Score: {result['score']:.4f}")
        print(f"Book ID: {meta['book_id']}")
        print(f"Title: {meta['title']}")
        print(f"Passage #: {meta['passage_idx']}")
        print(f"Path: {meta['book_path']}")
        print(f"Snippet: {snippet}...")


if __name__ == "__main__":
    main()