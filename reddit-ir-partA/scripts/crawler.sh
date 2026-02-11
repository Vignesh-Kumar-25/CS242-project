#!/usr/bin/env bash
set -euo pipefail

if [[ $# -lt 6 ]]; then
  echo "Usage: ./crawler.sh <subreddits_file> <target_mb> <output_dir> <client_id> <client_secret> <user_agent> [per_subreddit_limit] [comment_limit] [sort_mode] [processes]"
  exit 1
fi

SUBREDDITS_FILE="$1"
TARGET_MB="$2"
OUTPUT_DIR="$3"
CLIENT_ID="$4"
CLIENT_SECRET="$5"
USER_AGENT="$6"

PER_SUBREDDIT_LIMIT="${7:-5000}"
COMMENT_LIMIT="${8:-2000}"
SORT_MODE="${9:-new}"
PROCESSES="${10:-6}"

python3 -m crawler.crawl_reddit \
  --subreddits_file "$SUBREDDITS_FILE" \
  --output_dir "$OUTPUT_DIR" \
  --target_mb "$TARGET_MB" \
  --per_subreddit_limit "$PER_SUBREDDIT_LIMIT" \
  --comment_limit "$COMMENT_LIMIT" \
  --sort_mode "$SORT_MODE" \
  --processes "$PROCESSES" \
  --client_id "$CLIENT_ID" \
  --client_secret "$CLIENT_SECRET" \
  --user_agent "$USER_AGENT"
