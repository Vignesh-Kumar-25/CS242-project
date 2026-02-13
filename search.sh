#!/bin/bash
# search.sh <query>

QUERY=$1
PROJECT_ROOT="/home/leelap/CS242-project"
LUCENE_LIB="$PROJECT_ROOT/reddit-ir-partA/pylucene-9.6.0/build/lib.linux-x86_64-cpython-312"
JAVA_HOME="/usr/lib/jvm/java-11-openjdk-amd64"

# Set paths
export PYTHONPATH="$LUCENE_LIB:$PYTHONPATH"
export LD_LIBRARY_PATH="$JAVA_HOME/lib/server:$LUCENE_LIB:$LD_LIBRARY_PATH"

# Run search within your conda environment
conda run -n cs242 python search.py "$QUERY"
