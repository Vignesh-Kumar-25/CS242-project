# CS242 – Hybrid Search System: Crawling, Lucene & BERT Indexing

A complete Information Retrieval pipeline comparing keyword-based (Lucene) and semantic-based (BERT) search.

---

## Quick Start (TL;DR)

### Part A: Data Collection & Lucene Index
```bash
# Crawl 500MB of books
./crawler.sh 500 data/gutenberg_raw

# Build Lucene index
./indexbuilder.sh data/gutenberg_raw
```

### Part B: BERT Index & Search Interface
```bash
# Activate environment
source venv310/bin/activate

# Build BERT index (test with 10 books first)
python bert_indexer.py --data_dir data/gutenberg_raw --index_dir data/bert_index --max_books 10

# Launch web interface
streamlit run part_b_search_app.py
```

**Access web app:** http://localhost:8501

---

## System Overview

This project implements a dual-index search system:

1. **Lucene Index (Sparse/Keyword)**: Traditional inverted index for exact keyword matching
2. **BERT Index (Dense/Semantic)**: Neural embeddings for semantic similarity search

**Pipeline:**
```
Web Crawling → Text Extraction → Preprocessing → Dual Indexing → Query Interface
```

---

## Part A: Web Crawling & Lucene Indexing

### A1: Web Crawler

**Quick Run:**
```bash
./crawler.sh 500 data/gutenberg_raw
```

**Features:**
- Asynchronous Scrapy-based crawler
- Two-stage language filtering (metadata + content validation)
- Configurable target size (default: 500MB)
- Politeness: 1s delay, robots.txt compliance
- Deduplication via SQLite tracking

**Parameters:**
```bash
./crawler.sh <size_mb> <output_directory>

# Examples:
./crawler.sh 100 test_data          # 100MB to test_data/
./crawler.sh 500 data/gutenberg_raw # 500MB to data/gutenberg_raw/
```

**Output:**
- Plain text UTF-8 book files
- `metadata.json` with book information
- SQLite deduplication database

---

### A2: Lucene Indexer

**Quick Run:**
```bash
./indexbuilder.sh data/gutenberg_raw
```

**What it does:**
- Splits books into searchable documents
- Creates inverted index with fields: book_id, title, author, content
- Uses StandardAnalyzer (tokenization, lowercasing, stopword removal)
- SQLite-based deduplication

**Output:**
- Lucene index in `index/` directory
- Indexing statistics

**Runtime:** ~5-10 seconds for 500MB

---

## Part B: BERT Indexing & Query Interface

### Prerequisites

```bash
# Create/activate virtual environment
python3 -m venv venv310
source venv310/bin/activate

# Install dependencies
pip install torch transformers faiss-cpu tqdm numpy streamlit

# For WSL/Linux: PyLucene requires environment setup
export PYTHONPATH="$(pwd)/reddit-ir-partA/pylucene-9.6.0/build/lib.linux-x86_64-cpython-312:$PYTHONPATH"
export JAVA_HOME=/usr/lib/jvm/java-11-openjdk-amd64
export LD_LIBRARY_PATH=/usr/lib/jvm/java-11-openjdk-amd64/lib/server:$LD_LIBRARY_PATH
```

---

### B1: BERT Dense Index

**Build Index (Test First):**
```bash
# Test with 10 books (~3-5 minutes)
python bert_indexer.py --data_dir data/gutenberg_raw --index_dir data/bert_index --max_books 10
```

**Full Dataset:**
```bash
# Full 500MB dataset (30-60 min GPU / 3-6 hours CPU)
python bert_indexer.py --data_dir data/gutenberg_raw --index_dir data/bert_index
```

**How it works:**
1. Splits books into 450-token passages (BERT's 512 limit)
2. Generates 384-dimensional embeddings using `sentence-transformers/all-MiniLM-L6-v2`
3. Stores vectors in FAISS index for fast similarity search
4. Normalizes embeddings for cosine similarity

**Output Files:**
```
data/bert_index/
├── faiss_index.bin          # FAISS vector index
├── passages.json            # Passage texts
├── metadata.json            # Book IDs, titles, passage numbers
├── config.json              # Model configuration
└── indexing_stats.json      # Runtime statistics
```

**Custom Model:**
```bash
python bert_indexer.py --data_dir data/gutenberg_raw --index_dir data/bert_index \
  --model sentence-transformers/all-mpnet-base-v2
```

---

### B2: Query Interface

#### Option 1: Web Application (Recommended)
First, please ensure you have Java 11 installed.
**Run:**
```bash
# Make sure environment variables are set (WSL/Linux only for Lucene)
export PYTHONPATH="$(pwd)/reddit-ir-partA/pylucene-9.6.0/build/lib.linux-x86_64-cpython-312:$PYTHONPATH"
export JAVA_HOME=/usr/lib/jvm/java-11-openjdk-amd64
export LD_LIBRARY_PATH=/usr/lib/jvm/java-11-openjdk-amd64/lib/server:$LD_LIBRARY_PATH

streamlit run part_b_search_app.py
```

**Or use helper script:**
```bash
chmod +x run_search_app.sh
./run_search_app.sh
```

**Access:** http://localhost:8501

**Features:**
- Radio buttons to choose BERT or Lucene
- Adjustable top-k results (1-20)
- Real-time search timing
- Passage snippets with metadata

---

#### Option 2: Command Line Interface

**BERT Search:**
```bash
python query_interface.py --query "love and war" --index bert --topk 5 \
  --bert_index_dir data/bert_index
```

**Lucene Search:**
```bash
python query_interface.py --query "love and war" --index lucene --topk 5 \
  --lucene_index_dir index
```

**Output Example:**
```
Query: love and war

Result 1
Score: 0.8123
Book ID: 1342
Title: Pride and Prejudice
Passage #: 42
Snippet: ...love and war themes discussed...

Result 2
Score: 0.7981
Book ID: 98
Title: A Tale of Two Cities
Passage #: 156
Snippet: ...passage text...
```

---

## Performance Comparison

### Indexing Runtime (10 books)

| Index Type | Time      | Ratio  |
|------------|-----------|--------|
| Lucene     | ~1 second | 1x     |
| BERT       | ~3 minutes| 180x   |

### Search Runtime (typical query)

| Index Type | Time       | Ratio  |
|------------|------------|--------|
| Lucene     | ~0.01s     | 1x     |
| BERT       | ~0.5s      | 50x    |

**Trade-off:** BERT's slowness enables semantic understanding vs pure keyword matching.

---

## Sample Queries

### Where BERT Excels (Semantic Understanding)

```
"stories about revenge"      → Finds Moby Dick, Count of Monte Cristo
"lonely wanderer"            → Understands concept of solitude
"forbidden love"             → Semantic relationships
"sea adventures"             → Conceptual similarity
```

### Where Lucene Excels (Exact Keywords)

```
"Captain Ahab"               → Specific character names
"whale hunting"              → Precise terminology
"Pride and Prejudice"        → Exact titles
Author names                 → Direct matches
```

---



## System Requirements

### Minimum
- 2 CPU cores
- 4GB RAM
- 5GB disk space
- Linux/WSL (for PyLucene)

### Recommended
- 4+ CPU cores
- 8GB+ RAM
- 10GB disk space
- GPU (for faster BERT indexing)

---

## Platform Notes

### Windows
✅ **Crawler:** Works natively  
✅ **BERT Indexer:** Works natively  
❌ **Lucene Indexer:** Requires WSL  
❌ **Web App (full):** Requires WSL for Lucene search  

### Linux/WSL
✅ **Everything works**

**Recommendation:** Use WSL for full functionality

---

## Troubleshooting

### "Lucene dependencies missing"

**Cause:** PyLucene environment not set (WSL/Linux only)

**Solution:**
```bash
export PYTHONPATH="$(pwd)/reddit-ir-partA/pylucene-9.6.0/build/lib.linux-x86_64-cpython-312:$PYTHONPATH"
export JAVA_HOME=/usr/lib/jvm/java-11-openjdk-amd64
export LD_LIBRARY_PATH=/usr/lib/jvm/java-11-openjdk-amd64/lib/server:$LD_LIBRARY_PATH
```

### "libjvm.so: cannot open shared object file"

**Solution:**
```bash
sudo apt-get install openjdk-11-jdk
export LD_LIBRARY_PATH=/usr/lib/jvm/java-11-openjdk-amd64/lib/server:$LD_LIBRARY_PATH
```

### "streamlit: command not found"

**Solution:**
```bash
python3 -m streamlit run part_b_search_app.py
```

### "BERT indexing is very slow"

**Expected:** This is normal. BERT is ~100-200x slower than Lucene. Use `--max_books 10` for testing.

### "Index directory not found"

**Solution:** Build indexes first:
```bash
# Lucene
./indexbuilder.sh data/gutenberg_raw

# BERT
python bert_indexer.py --data_dir data/gutenberg_raw --index_dir data/bert_index --max_books 10
```

---

## Technical Details

### Crawler Architecture
- **Framework:** Scrapy (asynchronous)
- **Seed URLs:** Top books, recent additions, English listings, paginated search
- **Filtering:** Two-stage language validation
- **Output:** UTF-8 plain text with metadata

### Lucene Index
- **Analyzer:** StandardAnalyzer (tokenization, lowercasing, stopwords)
- **Fields:** book_id (StringField), title, author, content (TextField)
- **Query Parser:** MultiFieldQueryParser (searches title, author, content)

### BERT Index
- **Model:** sentence-transformers/all-MiniLM-L6-v2
- **Embedding Dimension:** 384
- **Passage Length:** ~450 tokens (max 512)
- **Similarity:** Cosine similarity via L2 normalization
- **Storage:** FAISS IndexFlatIP


## References

- Project Gutenberg: https://www.gutenberg.org
- Scrapy: https://scrapy.org
- PyLucene: https://lucene.apache.org/pylucene
- Sentence Transformers: https://www.sbert.net
- FAISS: https://github.com/facebookresearch/faiss

---

## License

Educational project for CS242 - Information Retrieval, UC Riverside
