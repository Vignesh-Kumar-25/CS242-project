import argparse
import gzip
import json
import os
import signal
import sys
import time
from dataclasses import dataclass
from multiprocessing import Process
from pathlib import Path
from typing import Dict, Any, List

import praw
import prawcore
from tqdm import tqdm

from dedup_store import DedupStore


@dataclass
class CrawlConfig:
    client_id: str
    client_secret: str
    user_agent: str
    output_dir: str
    target_mb: int
    per_subreddit_limit: int
    comment_limit: int
    sort_mode: str


STOP_REQUESTED = False


def _handle_sig(sig, frame):
    global STOP_REQUESTED
    STOP_REQUESTED = True


signal.signal(signal.SIGINT, _handle_sig)
signal.signal(signal.SIGTERM, _handle_sig)


def bytes_in_dir(path: str) -> int:
    total = 0
    for root, _, files in os.walk(path):
        for f in files:
            fp = os.path.join(root, f)
            try:
                total += os.path.getsize(fp)
            except OSError:
                pass
    return total


def mb_in_dir(path: str) -> float:
    return bytes_in_dir(path) / (1024 * 1024)


def make_reddit(cfg: CrawlConfig) -> praw.Reddit:
    return praw.Reddit(
        client_id=cfg.client_id,
        client_secret=cfg.client_secret,
        user_agent=cfg.user_agent,
        check_for_async=False,
    )


def safe_sleep_on_rate_limit(e: Exception):
    sleep_s = getattr(e, "sleep_time", None)
    if sleep_s is None:
        sleep_s = 30
    sleep_s = max(5, int(sleep_s) + 2)
    time.sleep(sleep_s)


def extract_comments(submission, comment_limit: int) -> List[Dict[str, Any]]:
    """
    Flatten comments and return up to comment_limit comment dicts.
    """
    out: List[Dict[str, Any]] = []
    try:
        submission.comments.replace_more(limit=0)
    except Exception:
        pass

    try:
        flat = submission.comments.list()
    except Exception:
        return out

    for c in flat[:comment_limit]:
        try:
            out.append(
                {
                    "id": getattr(c, "id", None),
                    "author": str(getattr(c, "author", "")) if getattr(c, "author", None) else None,
                    "created_utc": getattr(c, "created_utc", None),
                    "score": getattr(c, "score", None),
                    "body": getattr(c, "body", None),
                    "permalink": getattr(c, "permalink", None),
                }
            )
        except Exception:
            continue
    return out


def submission_to_doc(submission, comments: List[Dict[str, Any]]) -> Dict[str, Any]:
    title = submission.title or ""
    selftext = submission.selftext or ""
    comments_text = "\n".join([c.get("body") or "" for c in comments if c.get("body")])

    return {
        "doc_id": submission.id,
        "subreddit": str(submission.subreddit),
        "author": str(submission.author) if submission.author else None,
        "created_utc": submission.created_utc,
        "score": submission.score,
        "upvote_ratio": getattr(submission, "upvote_ratio", None),
        "num_comments": submission.num_comments,
        "title": title,
        "selftext": selftext,
        "comments_text": comments_text,
        "permalink": submission.permalink,
        "url": submission.url,
        "is_self": submission.is_self,
    }


def iter_submissions(reddit: praw.Reddit, subreddit_name: str, sort_mode: str, limit: int):
    sr = reddit.subreddit(subreddit_name)
    if sort_mode == "new":
        return sr.new(limit=limit)
    if sort_mode == "hot":
        return sr.hot(limit=limit)
    if sort_mode == "top":
        return sr.top(time_filter="month", limit=limit)
    return sr.new(limit=limit)


def crawl_one_subreddit(subreddit_name: str, cfg: CrawlConfig):
    """
    One process per subreddit. Writes shard files:
      output_dir/<subreddit>/part-000.jsonl.gz, part-001.jsonl.gz, ...
    Dedup DB is shared at output_dir/_dedup/seen.sqlite (multi-process safe).
    """
    out_base = Path(cfg.output_dir)
    sr_dir = out_base / subreddit_name
    sr_dir.mkdir(parents=True, exist_ok=True)

    dedup = DedupStore(str(out_base / "_dedup" / "seen.sqlite"))
    reddit = make_reddit(cfg)

    shard_idx = 0
    lines_in_shard = 0
    shard_path = sr_dir / f"part-{shard_idx:03d}.jsonl.gz"
    shard_fh = gzip.open(shard_path, "at", encoding="utf-8")

    pbar = tqdm(total=cfg.per_subreddit_limit, desc=f"r/{subreddit_name}", unit="post")
    processed = 0

    try:
        for sub in iter_submissions(reddit, subreddit_name, cfg.sort_mode, cfg.per_subreddit_limit):
            if STOP_REQUESTED:
                break

            # Stop if dataset size reached
            if mb_in_dir(cfg.output_dir) >= cfg.target_mb:
                break

            processed += 1
            doc_id = getattr(sub, "id", None)
            if not doc_id:
                pbar.update(1)
                continue

            # ✅ atomic dedup across processes
            if not dedup.try_add(doc_id):
                pbar.update(1)
                continue

            try:
                comments = extract_comments(sub, cfg.comment_limit)
                doc = submission_to_doc(sub, comments)

                shard_fh.write(json.dumps(doc, ensure_ascii=False) + "\n")
                shard_fh.flush()
                lines_in_shard += 1
                pbar.update(1)

                # Rotate shard every 500 docs
                if lines_in_shard >= 500:
                    shard_fh.close()
                    shard_idx += 1
                    lines_in_shard = 0
                    shard_path = sr_dir / f"part-{shard_idx:03d}.jsonl.gz"
                    shard_fh = gzip.open(shard_path, "at", encoding="utf-8")

            except prawcore.exceptions.RateLimitExceeded as e:
                safe_sleep_on_rate_limit(e)
            except prawcore.exceptions.RequestException:
                time.sleep(5)
            except Exception:
                # If something fails AFTER try_add, we may "lose" this id (marked seen but not written).
                # This is acceptable for most crawling runs; avoids duplicates and keeps it simple.
                time.sleep(0.1)
                continue

    finally:
        try:
            shard_fh.close()
        except Exception:
            pass
        pbar.close()


def load_subreddits(path: str) -> List[str]:
    subs: List[str] = []
    with open(path, "r", encoding="utf-8") as f:
        for line in f:
            s = line.strip()
            if not s or s.startswith("#"):
                continue
            subs.append(s)
    return subs


def parse_args():
    ap = argparse.ArgumentParser(description="Reddit crawler (PRAW) -> JSONL.GZ shards")
    ap.add_argument("--subreddits_file", required=True, help="Path to subreddits.txt (one per line)")
    ap.add_argument("--output_dir", required=True, help="Output directory")
    ap.add_argument("--target_mb", type=int, default=600, help="Stop when output_dir reaches this many MB")
    ap.add_argument("--per_subreddit_limit", type=int, default=5000, help="Max submissions per subreddit per run")
    ap.add_argument("--comment_limit", type=int, default=500, help="Max comments to store per submission")
    ap.add_argument("--sort_mode", choices=["new", "hot", "top"], default="new", help="Subreddit listing type")
    ap.add_argument("--processes", type=int, default=6, help="Max concurrent subreddit processes")
    ap.add_argument("--client_id", required=True)
    ap.add_argument("--client_secret", required=True)
    ap.add_argument("--user_agent", required=True)
    return ap.parse_args()


def main():
    args = parse_args()
    cfg = CrawlConfig(
        client_id=args.client_id,
        client_secret=args.client_secret,
        user_agent=args.user_agent,
        output_dir=args.output_dir,
        target_mb=args.target_mb,
        per_subreddit_limit=args.per_subreddit_limit,
        comment_limit=args.comment_limit,
        sort_mode=args.sort_mode,
    )

    os.makedirs(cfg.output_dir, exist_ok=True)
    os.makedirs(os.path.join(cfg.output_dir, "_dedup"), exist_ok=True)

    subs = load_subreddits(args.subreddits_file)
    if not subs:
        print("No subreddits provided.", file=sys.stderr)
        sys.exit(1)

    print(f"Starting crawl: target={cfg.target_mb}MB, processes={args.processes}, subs={len(subs)}")

    active: List[Process] = []
    i = 0

    while i < len(subs) and not STOP_REQUESTED:
        if mb_in_dir(cfg.output_dir) >= cfg.target_mb:
            break

        # Remove finished processes
        active = [p for p in active if p.is_alive()]

        # Launch new processes
        while len(active) < args.processes and i < len(subs) and not STOP_REQUESTED:
            sr = subs[i]
            i += 1
            p = Process(target=crawl_one_subreddit, args=(sr, cfg))
            p.start()
            active.append(p)

        time.sleep(1)

    # Wait for remaining
    for p in active:
        try:
            p.join()
        except KeyboardInterrupt:
            break

    final_mb = mb_in_dir(cfg.output_dir)
    print(f"Done. Collected ~{final_mb:.2f} MB in {cfg.output_dir}")


if __name__ == "__main__":
    main()
