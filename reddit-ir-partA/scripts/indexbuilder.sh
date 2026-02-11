#!/usr/bin/env bash
set -euo pipefail

if [[ $# -lt 3 ]]; then
  echo "Usage: ./indexbuilder.sh <input_dir> <index_dir> <analyzer: english|standard> [max_docs] [runtime_log]"
  exit 1
fi

INPUT_DIR="$1"
INDEX_DIR="$2"
ANALYZER="$3"
MAX_DOCS="${4:-0}"
RUNTIME_LOG="${5:-runtime_log.csv}"

python3 -m indexer.build_index \
  --input_dir "$INPUT_DIR" \
  --index_dir "$INDEX_DIR" \
  --analyzer "$ANALYZER" \
  --max_docs "$MAX_DOCS" \
  --runtime_log "$RUNTIME_LOG"
