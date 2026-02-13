#!/bin/bash

# 1. Configuration & Paths
INPUT_DIR=$1
INDEX_DIR=${2:-"index"}
PROJECT_ROOT="/home/leelap/CS242-project"
# Path to the 3.12 binary we found in your build folder
LUCENE_LIB="$PROJECT_ROOT/reddit-ir-partA/pylucene-9.6.0/build/lib.linux-x86_64-cpython-312"
JAVA_HOME="/usr/lib/jvm/java-11-openjdk-amd64"

# 2. Validation
if [ -z "$INPUT_DIR" ]; then
  echo "Error: Missing input directory."
  echo "Usage: ./indexbuilder.sh <input_data_dir> [output_index_dir]"
  exit 1
fi

# 3. Pre-flight Setup
echo "--- Initializing Index Build (Using env: cs242) ---"

# Ensure the data directory exists for the SQLite database (Fixes the OperationalError)
mkdir -p "$PROJECT_ROOT/data"

# Setup the PyLucene/Java Bridge
export PYTHONPATH="$LUCENE_LIB:$PYTHONPATH"
export LD_LIBRARY_PATH="$JAVA_HOME/lib/server:$LUCENE_LIB:$LD_LIBRARY_PATH"
export JAVA_HOME="$JAVA_HOME"

# Clean up previous index attempts to ensure a fresh build
if [ -d "$INDEX_DIR" ]; then
  echo "Clearing existing index at $INDEX_DIR..."
  rm -rf "$INDEX_DIR"
fi

# 4. Execution
echo "Source: $INPUT_DIR"
echo "Target: $INDEX_DIR"

# Run the indexer using the python interpreter inside the cs242 environment
conda run -n cs242 python "$PROJECT_ROOT/indexer.py" --data_dir "$INPUT_DIR" --index_dir "$INDEX_DIR"

# 5. Result Check
if [ $? -eq 0 ]; then
  echo "--- Success: Index built in $INDEX_DIR ---"
else
  echo "--- Error: Indexing failed. ---"
  echo "Check if: "
  echo "  1. The 'cs242' conda environment has python 3.12"
  echo "  2. Scrapy is installed: 'conda activate cs242 && pip install scrapy'"
  exit 1
fi
