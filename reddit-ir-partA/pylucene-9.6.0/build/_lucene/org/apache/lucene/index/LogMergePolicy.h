#ifndef org_apache_lucene_index_LogMergePolicy_H
#define org_apache_lucene_index_LogMergePolicy_H

#include "org/apache/lucene/index/MergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
        class SegmentInfos;
        class MergePolicy$MergeContext;
        class MergePolicy$MergeSpecification;
        class MergeTrigger;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Boolean;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class LogMergePolicy : public ::org::apache::lucene::index::MergePolicy {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_findForcedDeletesMerges_ba8e1f56536744f9,
            mid_findForcedMerges_6589b828f65a6b64,
            mid_findMerges_69db8b75d4bd0c68,
            mid_getCalibrateSizeByDeletes_ee8b0a5fa521ddac,
            mid_getMaxMergeDocs_15aa3d485e96b665,
            mid_getMergeFactor_15aa3d485e96b665,
            mid_setCalibrateSizeByDeletes_4f96af910856b303,
            mid_setMaxMergeDocs_da425451c8de636b,
            mid_setMergeFactor_da425451c8de636b,
            mid_toString_dc633f13a47328a8,
            mid_maxFullFlushMergeSize_058f5911dcf5d8a4,
            mid_isMerged_808ebf4eb6384860,
            mid_sizeDocs_3f56451e2a46cc5d,
            mid_sizeBytes_3f56451e2a46cc5d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LogMergePolicy(jobject obj) : ::org::apache::lucene::index::MergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LogMergePolicy(const LogMergePolicy& obj) : ::org::apache::lucene::index::MergePolicy(obj) {}

          static jint DEFAULT_MAX_MERGE_DOCS;
          static jint DEFAULT_MERGE_FACTOR;
          static jdouble DEFAULT_NO_CFS_RATIO;
          static jdouble LEVEL_LOG_SPAN;

          LogMergePolicy();

          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedDeletesMerges(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          jboolean getCalibrateSizeByDeletes() const;
          jint getMaxMergeDocs() const;
          jint getMergeFactor() const;
          void setCalibrateSizeByDeletes(jboolean) const;
          void setMaxMergeDocs(jint) const;
          void setMergeFactor(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(LogMergePolicy);
        extern PyTypeObject *PY_TYPE(LogMergePolicy);

        class t_LogMergePolicy {
        public:
          PyObject_HEAD
          LogMergePolicy object;
          static PyObject *wrap_Object(const LogMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
