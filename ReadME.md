# CS242 – Crawling and Lucene Indexing System

## Quick Run (Only Two Commands Needed)

Activate Python environment

```bash
source venv310/bin/activate
```
Set Java + PyLucene runtime paths

```bash
export JAVA_HOME=/usr/lib/jvm/java-17-openjdk-amd64
export JCC_JDK=$JAVA_HOME
export PATH="$JAVA_HOME/bin:$PATH"
export LD_LIBRARY_PATH=$JAVA_HOME/lib/server:$JAVA_HOME/lib:$LD_LIBRARY_PATH

```
```bash
./crawler.sh 500 data
./indexbuilder.sh data
```
Overview

This project implements a complete Information Retrieval pipeline:

1. Crawl documents from the web (Project Gutenberg)
2. Extract metadata and store raw text
3. Preprocess text
4. Build a Lucene inverted index
5. Prepare dataset for search
6. The system is fully reproducible through shell scripts and requires no manual configuration after setup.