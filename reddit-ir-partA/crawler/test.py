import lucene
lucene.initVM()

from org.apache.lucene.store import ByteBuffersDirectory
from org.apache.lucene.analysis.standard import StandardAnalyzer
from org.apache.lucene.index import IndexWriter, IndexWriterConfig
from org.apache.lucene.document import Document, Field, TextField

directory = ByteBuffersDirectory()
analyzer = StandardAnalyzer()
config = IndexWriterConfig(analyzer)
writer = IndexWriter(directory, config)

doc = Document()
doc.add(TextField("content", "Hello Reddit Lucene", Field.Store.YES))
writer.addDocument(doc)

writer.close()

print("Index created successfully 🚀")
