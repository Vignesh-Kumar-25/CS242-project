#!/bin/bash
# Helper script to run the search web app with correct environment variables

echo "============================================================"
echo "CS242 Part B - Hybrid Search Application"
echo "============================================================"
echo ""

# Set PyLucene paths
export PYTHONPATH="$(pwd)/reddit-ir-partA/pylucene-9.6.0/build/lib.linux-x86_64-cpython-312:$PYTHONPATH"
export JAVA_HOME=/usr/lib/jvm/java-11-openjdk-amd64
export LD_LIBRARY_PATH=/usr/lib/jvm/java-11-openjdk-amd64/lib/server:$LD_LIBRARY_PATH

echo "Environment variables set:"
echo "  PYTHONPATH: PyLucene build directory"
echo "  JAVA_HOME: $JAVA_HOME"
echo "  LD_LIBRARY_PATH: Java libraries"
echo ""

# Check if Java is installed
if ! command -v java &> /dev/null; then
    echo "ERROR: Java not found!"
    echo "Install with: sudo apt-get install openjdk-11-jdk"
    exit 1
fi

echo "Java version:"
java -version
echo ""

# Check if streamlit is installed
if ! python3 -c "import streamlit" &> /dev/null; then
    echo "ERROR: Streamlit not installed!"
    echo "Install with: pip3 install streamlit --break-system-packages"
    exit 1
fi

# Check if indexes exist
if [ ! -d "index" ] && [ ! -d "data/lucene_index" ]; then
    echo "WARNING: Lucene index not found!"
    echo "Build with: python3 indexer.py --data_dir gutenberg_books --index_dir index"
    echo ""
fi

if [ ! -d "data/bert_index" ]; then
    echo "WARNING: BERT index not found!"
    echo "Build with: python3 bert_indexer.py --data_dir gutenberg_books --index_dir data/bert_index"
    echo ""
fi

echo "Starting Streamlit application..."
echo "Access at: http://localhost:8501"
echo ""
echo "Press Ctrl+C to stop the server"
echo "============================================================"
echo ""

# Run the app
python3 -m streamlit run part_b_search_app.py