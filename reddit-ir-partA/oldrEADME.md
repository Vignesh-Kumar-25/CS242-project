# Reddit IR Pipeline – CS242

This project implements a Reddit data collection and Lucene indexing pipeline using:

- Python 3.12
- PyLucene 9.6.0
- PRAW (Reddit API)
- SQLite (persistent deduplication)
- OpenJDK 11

The system:
1. Crawls Reddit posts and comments
2. Stores them as compressed JSONL shards
3. Deduplicates across runs using SQLite
4. Builds a persistent Lucene index

---

# Project Structure

```
reddit-ir-partA/
│
├── crawler/
│   ├── crawl_reddit.py
│   ├── dedup_store.py
│   └── test.py
│
├── indexer/
│   └── build_index.py
│
├── pylucene-9.6.0/
│
├── subreddits.txt
├── requirements.txt
├── setup_project.sh
└── README.md
```

---

# Setup Instructions (Fresh Ubuntu Machine)

## Install System Dependencies

```bash
sudo apt update
sudo apt install -y \
    openjdk-11-jdk \
    python3.12 \
    python3.12-venv \
    python3.12-dev \
    gcc \
    g++ \
    make
```

Verify installation:

```bash
java -version
python3.12 --version
```

---

## Create Virtual Environment

From the project root:

```bash
python3.12 -m venv .venv
source .venv/bin/activate
```

Upgrade packaging tools:

```bash
pip install -U pip wheel setuptools
```

---

## Install Python Dependencies

```bash
pip install -r requirements.txt
```

---

## Build and Install PyLucene

⚠️ This step compiles native code and may take several minutes.

```bash
cd pylucene-9.6.0
make clean || true
make
make install
cd ..
```

---

## Verify PyLucene Installation

```bash
source .venv/bin/activate
python -c "import lucene; lucene.initVM(); print('PyLucene working')"
```

Expected output:

```
PyLucene working
```

---

# One-Command Setup (If setup_project.sh Exists)

```bash
chmod +x setup_project.sh
./setup_project.sh
```

---

#  Environment Test

```bash
source .venv/bin/activate
python crawler/test.py
```

Expected:

```
Index created successfully
```

---

# Reddit API Setup

1. Go to:
   https://old.reddit.com/prefs/apps
2. Click **create another app**
3. Select:
   ```
   script
   ```
4. Fill in:
   - Name: cs242-reddit-crawl
   - Description: anything
   - Redirect URI: http://localhost:8080
5. Click **Create app**

After creation, copy:

- client_id
- client_secret

---

#  Running the Crawler

```bash
source .venv/bin/activate

python crawler/crawl_reddit.py \
  --subreddits_file subreddits.txt \
  --output_dir data \
  --target_mb 500 \
  --per_subreddit_limit 10000 \
  --comment_limit 150 \
  --sort_mode new \
  --processes 2 \
  --client_id YOUR_CLIENT_ID \
  --client_secret YOUR_CLIENT_SECRET \
  --user_agent "cs242-reddit-crawl by u/YOUR_USERNAME"
```

---

# Output Format

Crawled data is stored as:

```
data/<subreddit>/part-000.jsonl.gz
```

Deduplication database:

```
data/_dedup/seen.sqlite
```

---

# Building the Lucene Index

After crawling:

```bash
python indexer/build_index.py
```

Lucene index will be stored in:

```
index/
```

---

# Security Notes

Do NOT commit:

- .venv/
- data/
- index/
- *.sqlite
- API credentials

---

# Recommended .gitignore

```
.venv/
__pycache__/
*.pyc
data/
index/
*.sqlite
.env
```

---

# Common Issues

### No module named praw
```bash
pip install -r requirements.txt
```

### PyLucene import fails
Rebuild:
```bash
cd pylucene-9.6.0
make clean
make
make install
```

### 401 HTTP response
Your Reddit `client_id` or `client_secret` is incorrect.

---

# Setup Summary

```bash
git clone <repo>
cd reddit-ir-partA
./setup_project.sh
```

Then verify:

```bash
python crawler/test.py
```

If it runs successfully, the environment is correctly configured.
