#!/usr/bin/env bash
set -euo pipefail

PROJECT_NAME="reddit-ir-partA"

echo "Creating project structure..."

mkdir -p $PROJECT_NAME/{crawler,indexer,scripts,data,index}
cd $PROJECT_NAME

# ---------- Create subreddits file ----------
cat > subreddits.txt <<EOF
technology
programming
learnprogramming
datascience
MachineLearning
science
AskReddit
todayilearned
explainlikeimfive
college
EOF

# ---------- Create requirements.txt ----------
cat > requirements.txt <<EOF
praw==7.7.1
prawcore==2.4.0
tqdm==4.66.1
EOF

# ---------- Create placeholder crawler files ----------
cat > crawler/dedup_store.py <<EOF
# DedupStore implementation goes here
EOF

cat > crawler/crawl_reddit.py <<EOF
# Reddit crawler implementation goes here
EOF

# ---------- Create placeholder indexer ----------
cat > indexer/build_index.py <<EOF
# PyLucene index builder implementation goes here
EOF

# ---------- Create crawler.sh ----------
cat > scripts/crawler.sh <<'EOF'
#!/usr/bin/env bash
set -euo pipefail

echo "Crawler script placeholder"
EOF

# ---------- Create indexbuilder.sh ----------
cat > scripts/indexbuilder.sh <<'EOF'
#!/usr/bin/env bash
set -euo pipefail

echo "Index builder script placeholder"
EOF

# Make scripts executable
chmod +x scripts/crawler.sh
chmod +x scripts/indexbuilder.sh

# ---------- Create README ----------
cat > README.md <<EOF
# Reddit IR Part A

## Structure
- crawler/        Reddit PRAW crawler
- indexer/        PyLucene index builder
- scripts/        Shell execution scripts
- data/           Crawled dataset
- index/          Lucene index

## Setup
python3 -m venv .venv
source .venv/bin/activate
pip install -r requirements.txt
EOF

# ---------- Create Python venv ----------
echo "Creating Python virtual environment..."
python3 -m venv .venv

echo "Project setup complete!"
echo ""
echo "Next steps:"
echo "1. source .venv/bin/activate"
echo "2. pip install -r requirements.txt"
echo "3. Paste the crawler + indexer code into their respective files"
