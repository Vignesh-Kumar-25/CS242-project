import sys
import lucene
from java.nio.file import Paths
from org.apache.lucene.analysis.standard import StandardAnalyzer
from org.apache.lucene.index import DirectoryReader
from org.apache.lucene.queryparser.classic import QueryParser
from org.apache.lucene.search import IndexSearcher
from org.apache.lucene.store import FSDirectory

def run_search(index_path, query_str):
    # Initialize Lucene VM (Crucial for PyLucene)
    lucene.initVM()
    
    # Open the index directory
    directory = FSDirectory.open(Paths.get(index_path))
    reader = DirectoryReader.open(directory)
    searcher = IndexSearcher(reader)
    
    # Use StandardAnalyzer to match the indexer's tokenization
    analyzer = StandardAnalyzer()
    
    # Search the 'content' field
    parser = QueryParser("content", analyzer)
    query = parser.parse(query_str)
    
    # Retrieve top 5 results based on BM25 score
    hits = searcher.search(query, 5).scoreDocs
    
    print(f"\nFound {len(hits)} results for query: '{query_str}'")
    print("-" * 60)
    
    for hit in hits:
        doc = searcher.doc(hit.doc)
        # Assuming your indexer stored 'book_id' and 'title' fields
        print(f"Score: {hit.score:.4f} | ID: {doc.get('book_id')} | Title: {doc.get('title')}")

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python search.py '<query>'")
    else:
        # Defaulting to the 'index' folder created by your shell script
        run_search("index", sys.argv[1])
