#!/bin/bash
# crawler.sh

TARGET_MB=${1:-500}
OUTPUT_DIR=${2:-"data/gutenberg_raw"}
PROJECT_ROOT="/home/leelap/CS242-project"

echo "--- Starting Crawler ---"
echo "Target: $TARGET_MB MB | Output: $OUTPUT_DIR"

# Run without the -s flag
conda run -n cs242 python "$PROJECT_ROOT/gutenberg_configurable.py" \
  --size "$TARGET_MB" \
  --output "$OUTPUT_DIR"
