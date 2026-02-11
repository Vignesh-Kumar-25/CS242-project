import os
import sqlite3
from contextlib import contextmanager

class DedupStore:
    """
    Persistent dedup store using SQLite.
    Multi-process safe (no has()+add() race):
      - try_add(doc_id) atomically inserts
      - returns True if inserted (i.e., was new), False if already seen
    """
    def __init__(self, db_path: str):
        os.makedirs(os.path.dirname(db_path), exist_ok=True)
        self.db_path = db_path
        self._init_db()

    @contextmanager
    def _conn(self):
        # isolation_level=None enables autocommit; timeout helps with contention
        conn = sqlite3.connect(self.db_path, timeout=30, isolation_level=None)
        try:
            # Better behavior under concurrent writers
            conn.execute("PRAGMA journal_mode=WAL;")
            conn.execute("PRAGMA synchronous=NORMAL;")
            yield conn
        finally:
            conn.close()

    def _init_db(self):
        with self._conn() as conn:
            conn.execute(
                """
                CREATE TABLE IF NOT EXISTS seen (
                    doc_id TEXT PRIMARY KEY
                );
                """
            )

    def try_add(self, doc_id: str) -> bool:
        """
        Atomically marks doc_id as seen.
        Returns True if this call inserted it (new), False if it already existed.
        """
        with self._conn() as conn:
            cur = conn.execute("INSERT OR IGNORE INTO seen(doc_id) VALUES (?);", (doc_id,))
            return cur.rowcount == 1
