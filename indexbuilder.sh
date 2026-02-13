#!/bin/bash
# Usage: ./indexbuilder.sh <input_data_dir> [output_index_dir]

# 1. Dynamic Pathing
# This gets the absolute path of the directory where THIS script is saved
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" &>/dev/null && pwd)"

INPUT_DIR=$1
INDEX_DIR=${2:-"index"}

LUCENE_LIB="$PROJECT_ROOT/reddit-ir-partA/pylucene-9.6.0/build/lib.linux-x86_64-cpython-312"

# 3. Handle Java Home (This is the only one that stays somewhat hard-coded)
# But we can add a check to help the TA
if [ -z "$JAVA_HOME" ]; then
  export JAVA_HOME="/usr/lib/jvm/java-11-openjdk-amd64"
fi

# ... (rest of your exports and execution) ...
export PYTHONPATH="$LUCENE_LIB:$PYTHONPATH"
python3 "$PROJECT_ROOT/indexer.py" --data_dir "$INPUT_DIR" --index_dir "$INDEX_DIR"
