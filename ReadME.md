# CS242 – Crawling and Lucene Indexing System

## Quick Run (Only Two Commands Needed)

```bash
./crawler.sh 500 /data
./indexbuilder.sh /data
```
Overview

This project implements a complete Information Retrieval pipeline:

1. Crawl documents from the web (Project Gutenberg)
2. Extract metadata and store raw text
3. Preprocess text
4. Build a Lucene inverted index
5. Prepare dataset for search
6. The system is fully reproducible through shell scripts and requires no manual configuration after setup.