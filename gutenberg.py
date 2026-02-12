
import scrapy
from scrapy.crawler import CrawlerProcess
import os
from pathlib import Path

class GutenbergDownloader(scrapy.Spider):
    name = 'gutenberg_downloader'
    allowed_domains = ['gutenberg.org']
    
    start_urls = [
        'https://www.gutenberg.org/browse/scores/top', 
        'https://www.gutenberg.org/browse/recent/last1',
        'https://www.gutenberg.org/browse/languages/en',
        'https://www.gutenberg.org/ebooks/search/?sort_order=downloads'
    ]
    
    # track downloaded size
    custom_settings = {
        'ROBOTSTXT_OBEY': True,
        'DOWNLOAD_DELAY': 5, 
        'CONCURRENT_REQUESTS': 1,
        'USER_AGENT': 'Mozilla/5.0 (Educational Project; Scrapy)',
    }
    
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
        self.total_bytes = 0
        self.target_bytes = 500 * 1024 * 1024  # 500 MB
        self.books_downloaded = 0
        self.download_dir = Path('gutenberg_books')
        self.download_dir.mkdir(exist_ok=True)
        
    def parse(self, response):
        # Find all ebook links
        book_links = response.css('a[href*="/ebooks/"]::attr(href)').getall()
        
        # Remove duplicates and filter
        seen = set()
        for link in book_links:
            if link not in seen and '/ebooks/' in link:
                seen.add(link)
                # Stop if we've hit our target
                if self.total_bytes >= self.target_bytes:
                    self.logger.info(f"Target size reached: {self.total_bytes / (1024*1024):.2f} MB")
                    return
                yield response.follow(link, callback=self.parse_book)
    
    def parse_book(self, response):
        if self.total_bytes >= self.target_bytes:
            return

        language = response.css('tr[itemprop="inLanguage"] td::text').get()
        if language and 'English' not in language:
            self.logger.info(f"Skipping non-English book: {language}")
            return

        book_id = response.url.split('/')[-1]
        title = response.css('h1[itemprop="name"]::text').get()
        author = response.css('a[itemprop="creator"]::text').get()
        
        text_links = response.css('a.link::attr(href)').getall()
        
        txt_link = None
        for link in text_links:
            if '.txt' in link and 'utf-8' in link.lower():
                txt_link = link
                break
        
        if not txt_link:
            for link in text_links:
                if '.txt' in link:
                    txt_link = link
                    break
        
        if txt_link:
            self.logger.info(f"Downloading: {title} by {author}")
            yield response.follow(
                txt_link, 
                callback=self.save_book,
                meta={
                    'book_id': book_id,
                    'title': title or f'Unknown_{book_id}',
                    'author': author or 'Unknown'
                }
            )
    
    def save_book(self, response):
        if self.total_bytes >= self.target_bytes:
            return
            
        book_id = response.meta['book_id']
        title = response.meta['title']
        author = response.meta['author']
        
        text_preview = response.body[:2000].decode('utf-8', errors='ignore')

        if 'Language:' in text_preview:
            language_line = [line for line in text_preview.split('\n') if 'Language:' in line]
        if language_line:
            language = language_line[0]
            if 'English' not in language and 'english' not in language:
                self.logger.info(f"Skipping non-English book: {title} - {language}")
                return
        
        # clean filename
        safe_title = "".join(c for c in title if c.isalnum() or c in (' ', '-', '_')).strip()
        safe_author = "".join(c for c in author if c.isalnum() or c in (' ', '-', '_')).strip()
        
        filename = self.download_dir / f"{book_id}_{safe_author}_{safe_title}.txt"
        
        # write file
        with open(filename, 'wb') as f:
            f.write(response.body)
        
        file_size = len(response.body)
        self.total_bytes += file_size
        self.books_downloaded += 1
        
        self.logger.info(
            f"Saved: {filename.name} "
            f"({file_size / 1024:.2f} KB) | "
            f"Total: {self.total_bytes / (1024*1024):.2f} MB / "
            f"{self.target_bytes / (1024*1024):.2f} MB | "
            f"Books: {self.books_downloaded}"
        )
        
        # log completion
        if self.total_bytes >= self.target_bytes:
            self.logger.info(
                f"\n{'='*60}\n"
                f"TARGET REACHED!\n"
                f"Downloaded {self.books_downloaded} books\n"
                f"Total size: {self.total_bytes / (1024*1024):.2f} MB\n"
                f"Location: {self.download_dir}\n"
                f"{'='*60}"
            )

if __name__ == '__main__':
    process = CrawlerProcess()
    process.crawl(GutenbergDownloader)
    process.start()