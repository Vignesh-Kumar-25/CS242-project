import argparse
import json
import time
from pathlib import Path
import pickle
import numpy as np
from tqdm import tqdm


import torch
from transformers import AutoTokenizer, AutoModel

import faiss


class BERTIndexer:
    def __init__(self, model_name='sentence-transformers/all-MiniLM-L6-v2', max_length=512):
        """
        Initialize BERT indexer
        
        Args:
            model_name: HuggingFace model to use for embeddings
            max_length: Maximum tokens per passage (BERT limit is 512)
        """
        print(f"Loading BERT model: {model_name}")
        self.model_name = model_name
        self.max_length = max_length
        
        self.tokenizer = AutoTokenizer.from_pretrained(model_name)
        self.model = AutoModel.from_pretrained(model_name)
        

        self.device = torch.device('cuda' if torch.cuda.is_available() else 'cpu')
        self.model.to(self.device)
        self.model.eval()  
        
        print(f"Using device: {self.device}")
        

        self.passages = [] 
        self.passage_metadata = []  
        self.embeddings = []  
        
    def split_into_passages(self, text, max_tokens=450):
        """
        Split text into passages of max_tokens length
        
        Args:
            text: Full book text
            max_tokens: Maximum tokens per passage (use 450 to leave room for special tokens)
        
        Returns:
            List of passage strings
        """

        tokens = self.tokenizer.encode(text, add_special_tokens=False, truncation=False)
        

        passages = []
        for i in range(0, len(tokens), max_tokens):
            chunk_tokens = tokens[i:i + max_tokens]
            passage_text = self.tokenizer.decode(chunk_tokens, skip_special_tokens=True)
            passages.append(passage_text)
        
        return passages
    
    def encode_text(self, text):


        inputs = self.tokenizer(
            text,
            padding=True,
            truncation=True,
            max_length=self.max_length,
            return_tensors='pt'
        )
        

        inputs = {k: v.to(self.device) for k, v in inputs.items()}
        

        with torch.no_grad():
            outputs = self.model(**inputs)

            embeddings = outputs.last_hidden_state.mean(dim=1)
        

        embedding = embeddings.cpu().numpy()[0]
        
        return embedding
    
    def index_book(self, book_path, book_id, title):


        try:
            with open(book_path, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
        except Exception as e:
            print(f"Error reading {book_path}: {e}")
            return
        
 
        passages = self.split_into_passages(content)
        

        for idx, passage in enumerate(passages):
            if len(passage.strip()) < 50: 
                continue
            

            embedding = self.encode_text(passage)
            

            self.passages.append(passage)
            self.passage_metadata.append({
                'book_id': book_id,
                'title': title,
                'passage_idx': idx,
                'book_path': str(book_path)
            })
            self.embeddings.append(embedding)
    
    def build_faiss_index(self):

        print("Building FAISS index...")
        

        embeddings_matrix = np.array(self.embeddings).astype('float32')
        

        faiss.normalize_L2(embeddings_matrix)
        
        # Build index
        dimension = embeddings_matrix.shape[1]
        index = faiss.IndexFlatIP(dimension)  
        index.add(embeddings_matrix)
        
        print(f"FAISS index built with {index.ntotal} passages")
        
        return index
    
    def save_index(self, output_dir):

        output_dir = Path(output_dir)
        output_dir.mkdir(parents=True, exist_ok=True)
        

        faiss_index = self.build_faiss_index()
        faiss.write_index(faiss_index, str(output_dir / 'faiss_index.bin'))
        

        with open(output_dir / 'passages.json', 'w', encoding='utf-8') as f:
            json.dump(self.passages, f, ensure_ascii=False, indent=2)
        

        with open(output_dir / 'metadata.json', 'w', encoding='utf-8') as f:
            json.dump(self.passage_metadata, f, ensure_ascii=False, indent=2)
        

        config = {
            'model_name': self.model_name,
            'max_length': self.max_length,
            'num_passages': len(self.passages),
            'embedding_dimension': len(self.embeddings[0]) if self.embeddings else 0
        }
        with open(output_dir / 'config.json', 'w') as f:
            json.dump(config, f, indent=2)
        
        print(f"\nIndex saved to {output_dir}/")
        print(f"  - faiss_index.bin: FAISS index")
        print(f"  - passages.json: Passage texts")
        print(f"  - metadata.json: Passage metadata")
        print(f"  - config.json: Configuration")


def main():
    parser = argparse.ArgumentParser(description='Build BERT index from book collection')
    parser.add_argument('--data_dir', type=str, required=True, 
                        help='Directory containing book text files')
    parser.add_argument('--index_dir', type=str, default='data/bert_index',
                        help='Output directory for BERT index')
    parser.add_argument('--model', type=str, default='sentence-transformers/all-MiniLM-L6-v2',
                        help='HuggingFace model name')
    parser.add_argument('--max_books', type=int, default=None,
                        help='Maximum number of books to index (for testing)')
    
    args = parser.parse_args()
    
    data_dir = Path(args.data_dir)
    if not data_dir.exists():
        print(f"Error: Data directory {data_dir} does not exist")
        return
    
    print("="*60)
    print("BERT Indexer - CS242 Project Part B")
    print("="*60)
    print(f"Data directory: {data_dir}")
    print(f"Index directory: {args.index_dir}")
    print(f"Model: {args.model}")
    print("="*60)
    

    indexer = BERTIndexer(model_name=args.model)
    

    book_files = list(data_dir.glob('*.txt'))
    if args.max_books:
        book_files = book_files[:args.max_books]
    
    print(f"\nFound {len(book_files)} books to index")
    

    start_time = time.time()
    

    for book_path in tqdm(book_files, desc="Indexing books"):

        filename = book_path.stem
        parts = filename.split('_', 1)
        book_id = parts[0]
        title = parts[1] if len(parts) > 1 else filename
        
        indexer.index_book(book_path, book_id, title)
    

    end_time = time.time()
    runtime = end_time - start_time
    
    print(f"\n{'='*60}")
    print(f"Indexing complete!")
    print(f"{'='*60}")
    print(f"Total passages: {len(indexer.passages)}")
    print(f"Total time: {runtime:.2f} seconds ({runtime/60:.2f} minutes)")
    print(f"Average time per book: {runtime/len(book_files):.2f} seconds")
    print(f"{'='*60}")
    

    indexer.save_index(args.index_dir)
    

    stats = {
        'total_books': len(book_files),
        'total_passages': len(indexer.passages),
        'runtime_seconds': runtime,
        'runtime_minutes': runtime / 60,
        'avg_seconds_per_book': runtime / len(book_files),
        'model_name': args.model,
        'device': str(indexer.device)
    }
    
    stats_path = Path(args.index_dir) / 'indexing_stats.json'
    with open(stats_path, 'w') as f:
        json.dump(stats, f, indent=2)
    
    print(f"\nIndexing statistics saved to {stats_path}")


if __name__ == '__main__':
    main()
