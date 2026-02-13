import scrapy
from scrapy.crawler import CrawlerProcess
from pathlib import Path
import argparse
import json
import os

class ConfigurableGutenbergDownloader(scrapy.Spider):
    name = 'gutenberg_config'
    allowed_domains = ['gutenberg.org']
    
    def __init__(self, target_mb=500, output_dir='gutenberg_books', *args, **kwargs):
        super().__init__(*args, **kwargs)
        self.download_dir = Path(output_dir)
        self.download_dir.mkdir(exist_ok=True, parents=True)
        
        # FIX 1: Initialize bytes based on what's already in the folder
        existing_size = sum(f.stat().st_size for f in self.download_dir.glob('*.txt') if f.is_file())
        self.total_bytes = existing_size
        self.target_bytes = int(target_mb) * 1024 * 1024
        
        self.books_downloaded = len(list(self.download_dir.glob('*.txt')))
        self.metadata = []
        
        self.logger.info(f"--- Starting Crawl ---")
        self.logger.info(f"Current Progress: {self.total_bytes/(1024*1024):.1f}MB / {target_mb}MB")

        self.start_urls = [
            'https://www.gutenberg.org/browse/scores/top', 
            'https://www.gutenberg.org/browse/recent/last1',
            'https://www.gutenberg.org/browse/languages/en',
            'https://www.gutenberg.org/ebooks/search/?sort_order=downloads',
            'https://www.gutenberg.org/ebooks/search/?sort_order=downloads&start_index=201',
            'https://www.gutenberg.org/ebooks/search/?sort_order=downloads&start_index=601',
            'https://www.gutenberg.org/ebooks/search/?sort_order=downloads&start_index=1001',
        ]

    custom_settings = {
        'ROBOTSTXT_OBEY': False,
        'DOWNLOAD_DELAY': 1.0,
        'CONCURRENT_REQUESTS': 16,
        'USER_AGENT': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36',
        'HTTPCACHE_ENABLED': False,
        'JOBDIR': 'crawls/gutenberg_final_push', 
    }
    
    def parse(self, response):
        # Stop if we hit the limit
        if self.total_bytes >= self.target_bytes:
            self.logger.info("TARGET REACHED. Stopping crawler.")
            return
            
        book_links = response.css('a[href*="/ebooks/"]::attr(href)').getall()
        for link in book_links:
            if self.total_bytes >= self.target_bytes:
                break
            # Filter for actual book pages (e.g., /ebooks/123)
            if '/ebooks/' in link and link.split('/')[-1].isdigit():
                yield response.follow(link, callback=self.parse_book)
        
        # FIX 2: Robust Pagination using XPath
        # This finds the link with 'Next' text OR the '>>' arrow
        next_page = response.xpath('//a[contains(text(), "Next") or contains(text(), ">>")]/@href').get()
        if next_page and self.total_bytes < self.target_bytes:
            yield response.follow(next_page, callback=self.parse)
    
    def parse_book(self, response):
        if self.total_bytes >= self.target_bytes:
            return

        lang = response.css('tr[itemprop="inLanguage"] td::text').get()
        if lang and 'English' not in lang:
            return    

        book_id = response.url.split('/')[-1]
        metadata = {
            'book_id': book_id,
            'title': response.css('h1[itemprop="name"]::text').get(),
            'author': response.css('a[itemprop="creator"]::text').get(),
            'url': response.url
        }
        
        txt_link = response.xpath('//a[contains(@href, ".txt.utf-8") or contains(@href, ".txt")]/@href').get()
        if txt_link:
            yield response.follow(txt_link, callback=self.save_book, meta={'metadata': metadata})
    
    def save_book(self, response):
        # Final safety check
        if self.total_bytes >= self.target_bytes:
            return
            
        metadata = response.meta['metadata']
        title = metadata['title'] or f"book_{metadata['book_id']}"
        safe_title = "".join(c for c in title if c.isalnum() or c in (' ', '-', '_')).strip()[:50]
        filename = self.download_dir / f"{metadata['book_id']}_{safe_title}.txt"
        
        # Only write and update bytes if the file doesn't exist
        if not filename.exists():
            with open(filename, 'wb') as f:
                f.write(response.body)
            
            file_size = len(response.body)
            self.total_bytes += file_size
            self.books_downloaded += 1
            
            self.logger.info(f"New Book ({self.books_downloaded}): {safe_title} | "
                             f"Total: {self.total_bytes/(1024*1024):.1f}MB")

    def closed(self, reason):
        metadata_file = self.download_dir / 'metadata.json'
        with open(metadata_file, 'w') as f:
            json.dump({
                'total_size_mb': self.total_bytes / (1024*1024),
                'books_count': self.books_downloaded,
                'books': self.metadata
            }, f, indent=2)

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--size', type=int, default=500)
    parser.add_argument('--output', type=str, default='data/gutenberg_raw')
    args = parser.parse_args()
    
    process = CrawlerProcess()
    process.crawl(ConfigurableGutenbergDownloader, target_mb=args.size, output_dir=args.output)
    process.start()

if __name__ == '__main__':
    main()
