#!/bin/bash
# crawler.sh - Generic Version

# 1. Dynamic Path Discovery
# This finds the folder where the script is actually sitting
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" &>/dev/null && pwd)"

# 2. Configuration with Defaults
# $1: Number of books (or MB, depending on your python logic)
# $2: Output directory
TARGET_VAL=${1:-500}
OUTPUT_DIR=${2:-"data/gutenberg_raw"}

echo "--- Starting Crawler ---"
echo "Target: $TARGET_VAL | Output: $OUTPUT_DIR"

# 3. Ensure the output directory exists
mkdir -p "$OUTPUT_DIR"

# 4. Generic Execution
# We use the system's python3 or the active environment's python.
# If your code uses --num_books now, update the flag below.
python3 "$PROJECT_ROOT/gutenberg_configurable.py" \
  --size "$TARGET_VAL" \
  --output "$OUTPUT_DIR"

# 5. Result Check
if [ $? -eq 0 ]; then
  echo "--- Success: Crawl completed to $OUTPUT_DIR ---"
else
  echo "--- Error: Crawler failed. ---"
  exit 1
fi
