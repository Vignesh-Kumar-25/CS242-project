# CS242 – Crawling and Lucene Indexing System

## Quick Run (Only Two Commands Needed)

```bash
./crawler.sh 500 /sample_data
./indexbuilder.sh /sample_data
```
Overview

This project implements a complete Information Retrieval pipeline:

1. Crawl documents from the web (Project Gutenberg)
2. Extract metadata and store raw text
3. Preprocess text
4. Build a Lucene inverted index
5. Prepare dataset for search
6. The system is fully reproducible through shell scripts and requires no manual configuration after setup.


## Part B Execution

<details>
<summary><strong>B1: Build BERT Dense Index</strong></summary>

### Activate Environment

```bash
source venv310/bin/activate
```

Install dependencies if needed:

```bash
pip install torch transformers faiss-cpu tqdm numpy
```

### Build the BERT Index

```bash
python bert_indexer.py --data_dir data --index_dir data/bert_index
```

For quick testing with fewer books:

```bash
python bert_indexer.py --data_dir data --index_dir data/bert_index --max_books 5
```

### Output Files

After indexing completes, the following files will be created:

```
data/bert_index/
    faiss_index.bin
    passages.json
    metadata.json
    config.json
    indexing_stats.json
```

These files contain the FAISS dense index, passage texts, metadata, and indexing statistics.

</details>

---

<details>
<summary><strong>B2: Query Interface</strong></summary>

### Run BERT Search

```bash
python query_interface.py --query "love and war" --index bert --topk 5 --bert_index_dir data/bert_index
```

This searches the **dense BERT index** and returns the top-k most similar passages.

---

### Run Lucene Search

```bash
python query_interface.py --query "love and war" --index lucene --topk 5 --lucene_index_dir indexes/gutenberg
```

This searches the **Lucene sparse index** built in Part A.

---

### Example Output

```
Query: love and war

Result 1
Score: 0.8123
Book ID: 1342
Title: Pride and Prejudice
Snippet: ...love and war themes discussed...

Result 2
Score: 0.7981
Book ID: 98
Title: A Tale of Two Cities
Snippet: ...passage text...
```

</details>

---

<details>
<summary><strong>Full Part B Workflow</strong></summary>

```bash
source venv310/bin/activate

# Build BERT index
python bert_indexer.py --data_dir data --index_dir data/bert_index

# Query BERT index
python query_interface.py --query "love and war" --index bert --topk 5 --bert_index_dir data/bert_index

# Query Lucene index
python query_interface.py --query "love and war" --index lucene --topk 5 --lucene_index_dir indexes/gutenberg
```

</details>