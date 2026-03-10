import argparse
import subprocess
import sys


def run_bert(query, topk, bert_index_dir):
    cmd = [
        sys.executable,
        "bert_search.py",
        "--query", query,
        "--index_dir", bert_index_dir,
        "--topk", str(topk)
    ]
    subprocess.run(cmd, check=True)


def run_lucene(query, topk, lucene_index_dir):
    try:
        from pyserini.search.lucene import LuceneSearcher
    except ImportError:
        print("Error: pyserini is not installed.")
        print("Install it using: pip install pyserini")
        sys.exit(1)

    searcher = LuceneSearcher(lucene_index_dir)
    hits = searcher.search(query, topk)

    print("=" * 80)
    print(f"Query: {query}")
    print(f"Top {topk} Lucene results")
    print("=" * 80)

    for i, hit in enumerate(hits, 1):
        print(f"\nResult {i}")
        print(f"DocID: {hit.docid}")
        print(f"Score: {hit.score:.4f}")

        try:
            raw = searcher.doc(hit.docid).raw()
            print(f"Raw: {raw[:400]}...")
        except Exception:
            print("Raw document text unavailable.")


def main():
    parser = argparse.ArgumentParser(description="Unified query interface for Lucene or BERT index")
    parser.add_argument("--query", type=str, required=True, help="User query")
    parser.add_argument("--index", type=str, required=True, choices=["bert", "lucene"],
                        help="Which index to search")
    parser.add_argument("--topk", type=int, default=5, help="Number of results")
    parser.add_argument("--bert_index_dir", type=str, default="data/bert_index",
                        help="Path to BERT FAISS index directory")
    parser.add_argument("--lucene_index_dir", type=str, default="indexes/gutenberg",
                        help="Path to Lucene index directory")
    args = parser.parse_args()

    if args.index == "bert":
        run_bert(args.query, args.topk, args.bert_index_dir)
    else:
        run_lucene(args.query, args.topk, args.lucene_index_dir)


if __name__ == "__main__":
    main()