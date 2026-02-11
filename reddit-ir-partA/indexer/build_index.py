import argparse
import gzip
import json
import os
from pathlib import Path

import lucene
lucene.initVM()

from java.nio.file import Paths
from org.apache.lucene.store import FSDirectory
from org.apache.lucene.analysis.standard import StandardAnalyzer
from org.apache.lucene.index import IndexWriter, IndexWriterConfig
from org.apache.lucene.document import Document, StringField, TextField, StoredField
from org.apache.lucene.util import Version


def iter_jsonl_gz_files(data_dir: Path):
    for p in data_dir.rglob("*.jsonl.gz"):
        yield p


def safe_get(d, key, default=""):
    v = d.get(key, default)
    return v if v is not None else default


def build_doc(d: dict) -> Document:
    doc = Document()

    doc_id = safe_get(d, "doc_id", "")
    subreddit = safe_get(d, "subreddit", "")
    title = safe_get(d, "title", "")
    selftext = safe_get(d, "selftext", "")
    comments_text = safe_get(d, "comments_text", "")
    permalink = safe_get(d, "permalink", "")
    url = safe_get(d, "url", "")

    # For searching (indexed)
    combined = f"{title}\n\n{selftext}\n\n{comments_text}".strip()

    # Stable ID + filters (indexed but not tokenized)
    doc.add(StringField("doc_id", doc_id, StringField.Store.YES))
    doc.add(StringField("subreddit", subreddit, StringField.Store.YES))

    # Searchable text fields
    doc.add(TextField("title", title, TextField.Store.YES))
    doc.add(TextField("selftext", selftext, TextField.Store.NO))
    doc.add(TextField("comments_text", comments_text, TextField.Store.NO))
    doc.add(TextField("content", combined, TextField.Store.NO))

    # Stored metadata
    doc.add(StoredField("permalink", permalink))
    doc.add(StoredField("url", url))
    doc.add(StoredField("score", int(d.get("score", 0) or 0)))
    doc.add(StoredField("created_utc", int(d.get("created_utc", 0) or 0)))
    doc.add(StoredField("num_comments", int(d.get("num_comments", 0) or 0)))

    return doc


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--data_dir", default="data", help="Folder containing subreddit shards (*.jsonl.gz)")
    ap.add_argument("--index_dir", default="index", help="Lucene index directory")
    ap.add_argument("--max_docs", type=int, default=0, help="Stop after N docs (0 = no limit)")
    args = ap.parse_args()

    data_dir = Path(args.data_dir)
    index_dir = Path(args.index_dir)
    index_dir.mkdir(parents=True, exist_ok=True)

    directory = FSDirectory.open(Paths.get(str(index_dir)))
    analyzer = StandardAnalyzer()
    config = IndexWriterConfig(analyzer)

    # Overwrite index each run (for development). Change to CREATE_OR_APPEND if needed.
    config.setOpenMode(IndexWriterConfig.OpenMode.CREATE)

    writer = IndexWriter(directory, config)

    total = 0
    files = list(iter_jsonl_gz_files(data_dir))
    if not files:
        print(f"No .jsonl.gz found under {data_dir}")
        return

    print(f"Found {len(files)} shard files. Indexing into: {index_dir}")

    try:
        for gz_path in files:
            with gzip.open(gz_path, "rt", encoding="utf-8") as f:
                for line in f:
                    if not line.strip():
                        continue
                    d = json.loads(line)
                    doc = build_doc(d)
                    writer.addDocument(doc)

                    total += 1
                    if total % 1000 == 0:
                        print(f"Indexed {total} docs...")

                    if args.max_docs and total >= args.max_docs:
                        break

            if args.max_docs and total >= args.max_docs:
                break
    finally:
        writer.commit()
        writer.close()

    print(f"✅ Done. Indexed {total} docs into {index_dir}")


if __name__ == "__main__":
    main()
