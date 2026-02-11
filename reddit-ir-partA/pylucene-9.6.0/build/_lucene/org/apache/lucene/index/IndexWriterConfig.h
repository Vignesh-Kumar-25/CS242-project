#ifndef org_apache_lucene_index_IndexWriterConfig_H
#define org_apache_lucene_index_IndexWriterConfig_H

#include "org/apache/lucene/index/LiveIndexWriterConfig.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter$IndexReaderWarmer;
        class LeafReader;
        class MergeScheduler;
        class IndexWriterConfig;
        class MergePolicy;
        class IndexDeletionPolicy;
        class IndexWriterEventListener;
        class IndexCommit;
        class IndexWriterConfig$OpenMode;
      }
      namespace search {
        namespace similarities {
          class Similarity;
        }
        class Sort;
      }
      namespace codecs {
        class Codec;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace util {
        class InfoStream;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class PrintStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexWriterConfig : public ::org::apache::lucene::index::LiveIndexWriterConfig {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_cea12a5ff05f6816,
            mid_getAnalyzer_2e5841967e4c0700,
            mid_getCodec_acf8c1a01773b200,
            mid_getIndexCommit_854542e383137675,
            mid_getIndexDeletionPolicy_1e64a70653c208f0,
            mid_getInfoStream_425a85236b069a69,
            mid_getMaxBufferedDocs_15aa3d485e96b665,
            mid_getMergePolicy_ddea2fb6f7532b1b,
            mid_getMergeScheduler_7e3f52ee54c10b54,
            mid_getMergedSegmentWarmer_bc80ac0fe11a8c8d,
            mid_getOpenMode_d46ca4f03626f8d9,
            mid_getRAMBufferSizeMB_409d010a7a53d0d1,
            mid_getRAMPerThreadHardLimitMB_15aa3d485e96b665,
            mid_getReaderPooling_ee8b0a5fa521ddac,
            mid_getSimilarity_4057ab9f016d67a1,
            mid_setCheckPendingFlushUpdate_6e31ec95acbd2d1d,
            mid_setCodec_19d01dbee291dd77,
            mid_setCommitOnClose_6e31ec95acbd2d1d,
            mid_setIndexCommit_70b769146e6026ee,
            mid_setIndexCreatedVersionMajor_10467a839cad735a,
            mid_setIndexDeletionPolicy_a42acafea9a43f96,
            mid_setIndexSort_09902f62dbfa0a6a,
            mid_setIndexWriterEventListener_e45002d3bf60f6a7,
            mid_setInfoStream_2c59c70ad5c6a703,
            mid_setInfoStream_15d6f2e8fe6ddfc1,
            mid_setLeafSorter_b8967bb2a341e23d,
            mid_setMaxBufferedDocs_10467a839cad735a,
            mid_setMaxFullFlushMergeWaitMillis_93c277ad7ea55e8e,
            mid_setMergePolicy_190ee07b7d697446,
            mid_setMergeScheduler_498e2bebcab042f8,
            mid_setMergedSegmentWarmer_dbbf1385d03cd381,
            mid_setOpenMode_46e47906c3f6fcbd,
            mid_setRAMBufferSizeMB_a232562aa1c93e42,
            mid_setRAMPerThreadHardLimitMB_10467a839cad735a,
            mid_setReaderPooling_6e31ec95acbd2d1d,
            mid_setSimilarity_dd071ec06f59840a,
            mid_setSoftDeletesField_7f3c94ac1c3b9cdb,
            mid_setUseCompoundFile_6e31ec95acbd2d1d,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexWriterConfig(jobject obj) : ::org::apache::lucene::index::LiveIndexWriterConfig(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexWriterConfig(const IndexWriterConfig& obj) : ::org::apache::lucene::index::LiveIndexWriterConfig(obj) {}

          static jboolean DEFAULT_COMMIT_ON_CLOSE;
          static jint DEFAULT_MAX_BUFFERED_DELETE_TERMS;
          static jint DEFAULT_MAX_BUFFERED_DOCS;
          static jlong DEFAULT_MAX_FULL_FLUSH_MERGE_WAIT_MILLIS;
          static jdouble DEFAULT_RAM_BUFFER_SIZE_MB;
          static jint DEFAULT_RAM_PER_THREAD_HARD_LIMIT_MB;
          static jboolean DEFAULT_READER_POOLING;
          static jboolean DEFAULT_USE_COMPOUND_FILE_SYSTEM;
          static jint DISABLE_AUTO_FLUSH;

          IndexWriterConfig();
          IndexWriterConfig(const ::org::apache::lucene::analysis::Analyzer &);

          ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
          ::org::apache::lucene::codecs::Codec getCodec() const;
          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          ::org::apache::lucene::index::IndexDeletionPolicy getIndexDeletionPolicy() const;
          ::org::apache::lucene::util::InfoStream getInfoStream() const;
          jint getMaxBufferedDocs() const;
          ::org::apache::lucene::index::MergePolicy getMergePolicy() const;
          ::org::apache::lucene::index::MergeScheduler getMergeScheduler() const;
          ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer getMergedSegmentWarmer() const;
          ::org::apache::lucene::index::IndexWriterConfig$OpenMode getOpenMode() const;
          jdouble getRAMBufferSizeMB() const;
          jint getRAMPerThreadHardLimitMB() const;
          jboolean getReaderPooling() const;
          ::org::apache::lucene::search::similarities::Similarity getSimilarity() const;
          IndexWriterConfig setCheckPendingFlushUpdate(jboolean) const;
          IndexWriterConfig setCodec(const ::org::apache::lucene::codecs::Codec &) const;
          IndexWriterConfig setCommitOnClose(jboolean) const;
          IndexWriterConfig setIndexCommit(const ::org::apache::lucene::index::IndexCommit &) const;
          IndexWriterConfig setIndexCreatedVersionMajor(jint) const;
          IndexWriterConfig setIndexDeletionPolicy(const ::org::apache::lucene::index::IndexDeletionPolicy &) const;
          IndexWriterConfig setIndexSort(const ::org::apache::lucene::search::Sort &) const;
          IndexWriterConfig setIndexWriterEventListener(const ::org::apache::lucene::index::IndexWriterEventListener &) const;
          IndexWriterConfig setInfoStream(const ::java::io::PrintStream &) const;
          IndexWriterConfig setInfoStream(const ::org::apache::lucene::util::InfoStream &) const;
          IndexWriterConfig setLeafSorter(const ::java::util::Comparator &) const;
          IndexWriterConfig setMaxBufferedDocs(jint) const;
          IndexWriterConfig setMaxFullFlushMergeWaitMillis(jlong) const;
          IndexWriterConfig setMergePolicy(const ::org::apache::lucene::index::MergePolicy &) const;
          IndexWriterConfig setMergeScheduler(const ::org::apache::lucene::index::MergeScheduler &) const;
          IndexWriterConfig setMergedSegmentWarmer(const ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer &) const;
          IndexWriterConfig setOpenMode(const ::org::apache::lucene::index::IndexWriterConfig$OpenMode &) const;
          IndexWriterConfig setRAMBufferSizeMB(jdouble) const;
          IndexWriterConfig setRAMPerThreadHardLimitMB(jint) const;
          IndexWriterConfig setReaderPooling(jboolean) const;
          IndexWriterConfig setSimilarity(const ::org::apache::lucene::search::similarities::Similarity &) const;
          IndexWriterConfig setSoftDeletesField(const ::java::lang::String &) const;
          IndexWriterConfig setUseCompoundFile(jboolean) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexWriterConfig);
        extern PyTypeObject *PY_TYPE(IndexWriterConfig);

        class t_IndexWriterConfig {
        public:
          PyObject_HEAD
          IndexWriterConfig object;
          static PyObject *wrap_Object(const IndexWriterConfig&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
