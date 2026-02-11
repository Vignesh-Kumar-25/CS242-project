#ifndef org_apache_lucene_index_LiveIndexWriterConfig_H
#define org_apache_lucene_index_LiveIndexWriterConfig_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter$IndexReaderWarmer;
        class LiveIndexWriterConfig;
        class LeafReader;
        class MergeScheduler;
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
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class LiveIndexWriterConfig : public ::java::lang::Object {
         public:
          enum {
            mid_getAnalyzer_2e5841967e4c0700,
            mid_getCodec_acf8c1a01773b200,
            mid_getCommitOnClose_ee8b0a5fa521ddac,
            mid_getIndexCommit_854542e383137675,
            mid_getIndexCreatedVersionMajor_15aa3d485e96b665,
            mid_getIndexDeletionPolicy_1e64a70653c208f0,
            mid_getIndexSort_a94eac9be092b024,
            mid_getIndexSortFields_9a625d56b67c7390,
            mid_getIndexWriterEventListener_a9e908706986ef87,
            mid_getInfoStream_425a85236b069a69,
            mid_getLeafSorter_bfaba219acee2aff,
            mid_getMaxBufferedDocs_15aa3d485e96b665,
            mid_getMaxFullFlushMergeWaitMillis_058f5911dcf5d8a4,
            mid_getMergePolicy_ddea2fb6f7532b1b,
            mid_getMergeScheduler_7e3f52ee54c10b54,
            mid_getMergedSegmentWarmer_bc80ac0fe11a8c8d,
            mid_getOpenMode_d46ca4f03626f8d9,
            mid_getRAMBufferSizeMB_409d010a7a53d0d1,
            mid_getRAMPerThreadHardLimitMB_15aa3d485e96b665,
            mid_getReaderPooling_ee8b0a5fa521ddac,
            mid_getSimilarity_4057ab9f016d67a1,
            mid_getSoftDeletesField_dc633f13a47328a8,
            mid_getUseCompoundFile_ee8b0a5fa521ddac,
            mid_isCheckPendingFlushOnUpdate_ee8b0a5fa521ddac,
            mid_setCheckPendingFlushUpdate_416deccb68188763,
            mid_setMaxBufferedDocs_394118befbe6ad82,
            mid_setMergePolicy_2196719f7fdeb67e,
            mid_setMergedSegmentWarmer_bdf2b00d0ed913eb,
            mid_setRAMBufferSizeMB_d83e2c7fab0d14ae,
            mid_setUseCompoundFile_416deccb68188763,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LiveIndexWriterConfig(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LiveIndexWriterConfig(const LiveIndexWriterConfig& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
          ::org::apache::lucene::codecs::Codec getCodec() const;
          jboolean getCommitOnClose() const;
          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          jint getIndexCreatedVersionMajor() const;
          ::org::apache::lucene::index::IndexDeletionPolicy getIndexDeletionPolicy() const;
          ::org::apache::lucene::search::Sort getIndexSort() const;
          ::java::util::Set getIndexSortFields() const;
          ::org::apache::lucene::index::IndexWriterEventListener getIndexWriterEventListener() const;
          ::org::apache::lucene::util::InfoStream getInfoStream() const;
          ::java::util::Comparator getLeafSorter() const;
          jint getMaxBufferedDocs() const;
          jlong getMaxFullFlushMergeWaitMillis() const;
          ::org::apache::lucene::index::MergePolicy getMergePolicy() const;
          ::org::apache::lucene::index::MergeScheduler getMergeScheduler() const;
          ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer getMergedSegmentWarmer() const;
          ::org::apache::lucene::index::IndexWriterConfig$OpenMode getOpenMode() const;
          jdouble getRAMBufferSizeMB() const;
          jint getRAMPerThreadHardLimitMB() const;
          jboolean getReaderPooling() const;
          ::org::apache::lucene::search::similarities::Similarity getSimilarity() const;
          ::java::lang::String getSoftDeletesField() const;
          jboolean getUseCompoundFile() const;
          jboolean isCheckPendingFlushOnUpdate() const;
          LiveIndexWriterConfig setCheckPendingFlushUpdate(jboolean) const;
          LiveIndexWriterConfig setMaxBufferedDocs(jint) const;
          LiveIndexWriterConfig setMergePolicy(const ::org::apache::lucene::index::MergePolicy &) const;
          LiveIndexWriterConfig setMergedSegmentWarmer(const ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer &) const;
          LiveIndexWriterConfig setRAMBufferSizeMB(jdouble) const;
          LiveIndexWriterConfig setUseCompoundFile(jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(LiveIndexWriterConfig);
        extern PyTypeObject *PY_TYPE(LiveIndexWriterConfig);

        class t_LiveIndexWriterConfig {
        public:
          PyObject_HEAD
          LiveIndexWriterConfig object;
          static PyObject *wrap_Object(const LiveIndexWriterConfig&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
