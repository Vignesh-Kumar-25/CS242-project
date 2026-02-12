import scrapy
from scrapy.crawler import CrawlerProcess
from pathlib import Path
import argparse
import json

class ConfigurableGutenbergDownloader(scrapy.Spider):
    name = 'gutenberg_config'
    allowed_domains = ['gutenberg.org']
    
    def __init__(self, target_mb=500, output_dir='gutenberg_books', *args, **kwargs):
        super().__init__(*args, **kwargs)
        self.total_bytes = 0
        self.target_bytes = int(target_mb) * 1024 * 1024
        self.books_downloaded = 0
        self.download_dir = Path(output_dir)
        self.download_dir.mkdir(exist_ok=True)
        self.metadata = []
        
        self.start_urls = [
            'https://www.gutenberg.org/browse/scores/top',
            'https://www.gutenberg.org/browse/recent/last1',
            'https://www.gutenberg.org/browse/languages/en',  # English books
        ]
    
    custom_settings = {
        'ROBOTSTXT_OBEY': True,
        'DOWNLOAD_DELAY': 1,
        'CONCURRENT_REQUESTS': 2,
        'USER_AGENT': 'Mozilla/5.0 (Educational Project; Scrapy)',
        'HTTPCACHE_ENABLED': True,  # Cache to avoid re-downloading
        'HTTPCACHE_EXPIRATION_SECS': 86400,
        'HTTPCACHE_DIR': 'httpcache',
    }
    
    def parse(self, response):
        """Parse listing pages"""
        if self.total_bytes >= self.target_bytes:
            return
            
        book_links = response.css('a[href*="/ebooks/"]::attr(href)').getall()
        
        seen = set()
        for link in book_links:
            if self.total_bytes >= self.target_bytes:
                break
            if link not in seen and '/ebooks/' in link and link.count('/') == 2:
                seen.add(link)
                yield response.follow(link, callback=self.parse_book)
        
        # Follow pagination if exists
        next_page = response.css('a:contains("Next")::attr(href)').get()
        if next_page and self.total_bytes < self.target_bytes:
            yield response.follow(next_page, callback=self.parse)
    
    def parse_book(self, response):
        """Extract book metadata and download link"""
        if self.total_bytes >= self.target_bytes:
            return
        language = response.css('tr[itemprop="inLanguage"] td::text').get()
        if language and 'English' not in language:
            self.logger.info(f"Skipping non-English book: {language}")
            return    
        book_id = response.url.split('/')[-1]
        
        # Extract metadata
        metadata = {
            'book_id': book_id,
            'title': response.css('h1[itemprop="name"]::text').get(),
            'author': response.css('a[itemprop="creator"]::text').get(),
            'language': response.css('tr[itemprop="inLanguage"] td::text').get(),
            'subjects': response.css('td[itemprop="subject"] a::text').getall(),
            'downloads': response.css('td[itemprop="interactionCount"]::text').get(),
            'url': response.url
        }
        
        # Find text download links
        text_links = response.css('a.link::attr(href)').getall()
        
        # Prioritize UTF-8 plain text
        txt_link = None
        for link in text_links:
            if '.txt' in link:
                if 'utf-8' in link.lower() or 'UTF-8' in link:
                    txt_link = link
                    break
        
        if not txt_link:
            for link in text_links:
                if '.txt' in link:
                    txt_link = link
                    break
        
        if txt_link:
            yield response.follow(
                txt_link,
                callback=self.save_book,
                meta={'metadata': metadata}
            )
    
    def save_book(self, response):
        """Save book and metadata"""
        if self.total_bytes >= self.target_bytes:
            return
            
        metadata = response.meta['metadata']
        book_id = metadata['book_id']
        title = metadata['title'] or f'Book_{book_id}'
        author = metadata['author'] or 'Unknown'
        
        text_preview = response.body[:2000].decode('utf-8', errors='ignore')

        if 'Language:' in text_preview:
            language_line = [line for line in text_preview.split('\n') if 'Language:' in line]
        if language_line:
            language = language_line[0]
            if 'English' not in language and 'english' not in language:
                self.logger.info(f"Skipping non-English book: {title} - {language}")
                return
        
        # Clean filename
        safe_title = "".join(c for c in title if c.isalnum() or c in (' ', '-', '_')).strip()[:100]
        filename = self.download_dir / f"{book_id}_{safe_title}.txt"
        
        # Save book text
        with open(filename, 'wb') as f:
            f.write(response.body)
        
        file_size = len(response.body)
        self.total_bytes += file_size
        self.books_downloaded += 1
        
        # Update metadata
        metadata['filename'] = str(filename)
        metadata['file_size_kb'] = file_size / 1024
        self.metadata.append(metadata)
        
        self.logger.info(
            f"[{self.books_downloaded}] {title[:50]} by {author[:30]} | "
            f"{file_size/1024:.1f}KB | "
            f"Progress: {self.total_bytes/(1024*1024):.1f}/{self.target_bytes/(1024*1024):.0f}MB"
        )
    
    def closed(self, reason):
        """Save metadata when spider closes"""
        metadata_file = self.download_dir / 'metadata.json'
        with open(metadata_file, 'w') as f:
            json.dump({
                'total_books': self.books_downloaded,
                'total_size_mb': self.total_bytes / (1024*1024),
                'books': self.metadata
            }, f, indent=2)
        
        self.logger.info(f"\nMetadata saved to: {metadata_file}")
        self.logger.info(f"Total downloaded: {self.total_bytes/(1024*1024):.2f} MB in {self.books_downloaded} books")

def main():
    parser = argparse.ArgumentParser(description='Download books from Project Gutenberg')
    parser.add_argument('--size', type=int, default=500, help='Target size in MB (default: 500)')
    parser.add_argument('--output', type=str, default='gutenberg_books', help='Output directory')
    parser.add_argument('--delay', type=float, default=1.0, help='Delay between requests in seconds')
    
    args = parser.parse_args()
    
    print(f"\n{'='*60}")
    print(f"Project Gutenberg Downloader")
    print(f"Target: {args.size} MB")
    print(f"Output: {args.output}")
    print(f"Delay: {args.delay}s between requests")
    print(f"{'='*60}\n")
    
    process = CrawlerProcess()
    process.crawl(
        ConfigurableGutenbergDownloader,
        target_mb=args.size,
        output_dir=args.output
    )
    process.start()

if __name__ == '__main__':
    main()