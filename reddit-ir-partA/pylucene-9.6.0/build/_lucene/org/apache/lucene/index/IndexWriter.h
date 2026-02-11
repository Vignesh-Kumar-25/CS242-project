#ifndef org_apache_lucene_index_IndexWriter_H
#define org_apache_lucene_index_IndexWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Iterable;
    class Throwable;
    class Class;
    class String;
  }
  namespace util {
    class Set;
    class Map$Entry;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexableField;
        class SegmentInfos;
        class MergePolicy$MergeContext;
        class CodecReader;
        class LiveIndexWriterConfig;
        class IndexWriter$DocStats;
        class DirectoryReader;
        class MergePolicy$OneMerge;
        class SegmentCommitInfo;
        class TwoPhaseCommit;
        class IndexWriterConfig;
        class Term;
        class IndexReader;
      }
      namespace util {
        class InfoStream;
        class Accountable;
        class BytesRef;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace store {
        class Directory;
      }
      namespace search {
        class Query;
      }
      namespace document {
        class Field;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexWriter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_91354b5438b26947,
            mid_addDocument_9674686696872358,
            mid_addDocuments_9674686696872358,
            mid_addIndexes_5355cbabaad3bdce,
            mid_addIndexes_c3385b18bece9c8d,
            mid_addIndexesReaderMerge_6233f2e8bf8fd324,
            mid_advanceSegmentInfosVersion_db2028ac45cd5b77,
            mid_close_3353d9f14bbfd91a,
            mid_commit_058f5911dcf5d8a4,
            mid_decRefDeleter_cb13d48adf3e629f,
            mid_deleteAll_058f5911dcf5d8a4,
            mid_deleteDocuments_d8b3a788056bd23b,
            mid_deleteDocuments_5cb468ebd10a2fe1,
            mid_deleteUnusedFiles_3353d9f14bbfd91a,
            mid_flush_3353d9f14bbfd91a,
            mid_flushNextBuffer_ee8b0a5fa521ddac,
            mid_forceMerge_da425451c8de636b,
            mid_forceMerge_5a9df8809b7e2c79,
            mid_forceMergeDeletes_3353d9f14bbfd91a,
            mid_forceMergeDeletes_4f96af910856b303,
            mid_getAnalyzer_2e5841967e4c0700,
            mid_getConfig_47df32e985e4d8c1,
            mid_getDirectory_dab1bc6be9334718,
            mid_getDocStats_e3310088a5f6f947,
            mid_getFieldNames_9a625d56b67c7390,
            mid_getFlushingBytes_058f5911dcf5d8a4,
            mid_getInfoStream_425a85236b069a69,
            mid_getLiveCommitData_d5b0a7b20fe07dd6,
            mid_getMaxCompletedSequenceNumber_058f5911dcf5d8a4,
            mid_getMergingSegments_9a625d56b67c7390,
            mid_getPendingNumDocs_058f5911dcf5d8a4,
            mid_getReader_19eedc9355fc9d92,
            mid_getTragicException_810f7ff0a8f0e46f,
            mid_hasDeletions_ee8b0a5fa521ddac,
            mid_hasPendingMerges_ee8b0a5fa521ddac,
            mid_hasUncommittedChanges_ee8b0a5fa521ddac,
            mid_incRefDeleter_cb13d48adf3e629f,
            mid_isOpen_ee8b0a5fa521ddac,
            mid_maybeMerge_3353d9f14bbfd91a,
            mid_numDeletedDocs_a5a6d44c1d744342,
            mid_numDeletesToMerge_a5a6d44c1d744342,
            mid_numRamDocs_15aa3d485e96b665,
            mid_onTragicEvent_352b699defe1d931,
            mid_prepareCommit_058f5911dcf5d8a4,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            mid_rollback_3353d9f14bbfd91a,
            mid_setLiveCommitData_e24ade5f219c5841,
            mid_setLiveCommitData_b503f53385306932,
            mid_softUpdateDocument_10abe822225e1d2b,
            mid_softUpdateDocuments_10abe822225e1d2b,
            mid_tryDeleteDocument_a983fed82724688e,
            mid_tryUpdateDocValue_3e9879a81bc1444e,
            mid_updateBinaryDocValue_511915df0fa27a27,
            mid_updateDocValues_fc0242e1371ee28e,
            mid_updateDocument_680703ab4c3bd338,
            mid_updateDocuments_680703ab4c3bd338,
            mid_updateNumericDocValue_3ae7b495adca2d43,
            mid_doAfterFlush_3353d9f14bbfd91a,
            mid_mergeSuccess_6233f2e8bf8fd324,
            mid_doBeforeFlush_3353d9f14bbfd91a,
            mid_isEnableTestPoints_ee8b0a5fa521ddac,
            mid_merge_6233f2e8bf8fd324,
            mid_ensureOpen_4f96af910856b303,
            mid_ensureOpen_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexWriter(const IndexWriter& obj) : ::java::lang::Object(obj) {}

          static jint MAX_DOCS;
          static jint MAX_POSITION;
          static jint MAX_STORED_STRING_LENGTH;
          static jint MAX_TERM_LENGTH;
          static ::java::lang::String *SOURCE;
          static ::java::lang::String *SOURCE_ADDINDEXES_READERS;
          static ::java::lang::String *SOURCE_FLUSH;
          static ::java::lang::String *SOURCE_MERGE;
          static ::java::lang::String *WRITE_LOCK_NAME;

          IndexWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig &);

          jlong addDocument(const ::java::lang::Iterable &) const;
          jlong addDocuments(const ::java::lang::Iterable &) const;
          jlong addIndexes(const JArray< ::org::apache::lucene::index::CodecReader > &) const;
          jlong addIndexes(const JArray< ::org::apache::lucene::store::Directory > &) const;
          void addIndexesReaderMerge(const ::org::apache::lucene::index::MergePolicy$OneMerge &) const;
          void advanceSegmentInfosVersion(jlong) const;
          void close() const;
          jlong commit() const;
          void decRefDeleter(const ::org::apache::lucene::index::SegmentInfos &) const;
          jlong deleteAll() const;
          jlong deleteDocuments(const JArray< ::org::apache::lucene::index::Term > &) const;
          jlong deleteDocuments(const JArray< ::org::apache::lucene::search::Query > &) const;
          void deleteUnusedFiles() const;
          void flush() const;
          jboolean flushNextBuffer() const;
          void forceMerge(jint) const;
          void forceMerge(jint, jboolean) const;
          void forceMergeDeletes() const;
          void forceMergeDeletes(jboolean) const;
          ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
          ::org::apache::lucene::index::LiveIndexWriterConfig getConfig() const;
          ::org::apache::lucene::store::Directory getDirectory() const;
          ::org::apache::lucene::index::IndexWriter$DocStats getDocStats() const;
          ::java::util::Set getFieldNames() const;
          jlong getFlushingBytes() const;
          ::org::apache::lucene::util::InfoStream getInfoStream() const;
          ::java::lang::Iterable getLiveCommitData() const;
          jlong getMaxCompletedSequenceNumber() const;
          ::java::util::Set getMergingSegments() const;
          jlong getPendingNumDocs() const;
          ::org::apache::lucene::index::DirectoryReader getReader(jboolean, jboolean) const;
          ::java::lang::Throwable getTragicException() const;
          jboolean hasDeletions() const;
          jboolean hasPendingMerges() const;
          jboolean hasUncommittedChanges() const;
          void incRefDeleter(const ::org::apache::lucene::index::SegmentInfos &) const;
          jboolean isOpen() const;
          void maybeMerge() const;
          jint numDeletedDocs(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          jint numDeletesToMerge(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          jint numRamDocs() const;
          void onTragicEvent(const ::java::lang::Throwable &, const ::java::lang::String &) const;
          jlong prepareCommit() const;
          jlong ramBytesUsed() const;
          void rollback() const;
          void setLiveCommitData(const ::java::lang::Iterable &) const;
          void setLiveCommitData(const ::java::lang::Iterable &, jboolean) const;
          jlong softUpdateDocument(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &, const JArray< ::org::apache::lucene::document::Field > &) const;
          jlong softUpdateDocuments(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &, const JArray< ::org::apache::lucene::document::Field > &) const;
          jlong tryDeleteDocument(const ::org::apache::lucene::index::IndexReader &, jint) const;
          jlong tryUpdateDocValue(const ::org::apache::lucene::index::IndexReader &, jint, const JArray< ::org::apache::lucene::document::Field > &) const;
          jlong updateBinaryDocValue(const ::org::apache::lucene::index::Term &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &) const;
          jlong updateDocValues(const ::org::apache::lucene::index::Term &, const JArray< ::org::apache::lucene::document::Field > &) const;
          jlong updateDocument(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &) const;
          jlong updateDocuments(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &) const;
          jlong updateNumericDocValue(const ::org::apache::lucene::index::Term &, const ::java::lang::String &, jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(IndexWriter);
        extern PyTypeObject *PY_TYPE(IndexWriter);

        class t_IndexWriter {
        public:
          PyObject_HEAD
          IndexWriter object;
          static PyObject *wrap_Object(const IndexWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
