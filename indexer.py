import argparse
import os
import sqlite3
from pathlib import Path
import lucene

# Initialize Lucene VM
lucene.initVM()

from java.nio.file import Paths
from org.apache.lucene.store import FSDirectory
from org.apache.lucene.analysis.standard import StandardAnalyzer
from org.apache.lucene.index import IndexWriter, IndexWriterConfig
from org.apache.lucene.document import Document, StringField, TextField

def build_doc(book_id, title, content) -> Document:
    doc = Document()
    
    # StringField: Indexed but NOT tokenized (Used for the unique ID)
    doc.add(StringField("book_id", str(book_id), StringField.Store.YES))
    
    # TextField: Tokenized and searchable (The main content)
    doc.add(TextField("title", title, TextField.Store.YES))
    doc.add(TextField("content", content, TextField.Store.YES))
    
    return doc

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--data_dir", default="sample_data/sample_books", help="Folder with .txt books")
    ap.add_argument("--index_dir", default="data/lucene_index", help="Lucene index directory")
    args = ap.parse_args()

    data_dir = Path(args.data_dir)
    index_dir = Path(args.index_dir)
    index_dir.mkdir(parents=True, exist_ok=True)

    # 1. Setup SQLite for Efficiency Check
    db_path = "data/dedup.db"
    conn = sqlite3.connect(db_path)
    cursor = conn.cursor()
    cursor.execute('CREATE TABLE IF NOT EXISTS indexed_books (id TEXT PRIMARY KEY)')
    conn.commit()

    # 2. Setup Lucene IndexWriter
    directory = FSDirectory.open(Paths.get(str(index_dir)))
    analyzer = StandardAnalyzer()
    config = IndexWriterConfig(analyzer)
    
    # Use CREATE_OR_APPEND to allow adding new books without wiping the index
    config.setOpenMode(IndexWriterConfig.OpenMode.CREATE_OR_APPEND)
    writer = IndexWriter(directory, config)

    total_indexed = 0
    skipped = 0

    print(f"Indexing files from: {data_dir}")

    try:
        # Loop through the .txt files using the format {id}_{title}.txt
        for txt_path in data_dir.glob("*.txt"):
            book_id = txt_path.name.split('_')[0]

            # EFFICIENCY: Consult SQLite before opening the file
            cursor.execute('SELECT 1 FROM indexed_books WHERE id=?', (book_id,))
            if cursor.fetchone():
                skipped += 1
                continue

            # Open and index only if new
            with open(txt_path, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
                doc = build_doc(book_id, txt_path.name, content)
                writer.addDocument(doc)
                
                # Update SQLite to mark this book as processed
                cursor.execute('INSERT INTO indexed_books (id) VALUES (?)', (book_id,))
                total_indexed += 1

            if total_indexed % 100 == 0:
                print(f"Indexed {total_indexed} books...")

    finally:
        # Commit both DB and Lucene changes
        conn.commit()
        writer.commit()
        writer.close()
        conn.close()

    print(f"Status: Indexed {total_indexed} | Skipped {skipped} | Index: {index_dir}")

if __name__ == "__main__":
    main()
