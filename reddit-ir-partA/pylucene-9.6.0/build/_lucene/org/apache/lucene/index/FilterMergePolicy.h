#ifndef org_apache_lucene_index_FilterMergePolicy_H
#define org_apache_lucene_index_FilterMergePolicy_H

#include "org/apache/lucene/index/MergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
        class CodecReader;
        class SegmentInfos;
        class MergePolicy$MergeContext;
        class MergePolicy$MergeSpecification;
        class MergeTrigger;
      }
      namespace util {
        class IOSupplier;
        class Unwrappable;
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

        class FilterMergePolicy : public ::org::apache::lucene::index::MergePolicy {
         public:
          enum {
            mid_init$_31961f4c829c80c3,
            mid_findForcedDeletesMerges_ba8e1f56536744f9,
            mid_findForcedMerges_6589b828f65a6b64,
            mid_findFullFlushMerges_69db8b75d4bd0c68,
            mid_findMerges_f907bbc19fe54860,
            mid_findMerges_69db8b75d4bd0c68,
            mid_getMaxCFSSegmentSizeMB_409d010a7a53d0d1,
            mid_getNoCFSRatio_409d010a7a53d0d1,
            mid_keepFullyDeletedSegment_9cc78b24cedd0494,
            mid_numDeletesToMerge_afba2acc8e81ed05,
            mid_setMaxCFSSegmentSizeMB_c1f7206c104d501e,
            mid_setNoCFSRatio_c1f7206c104d501e,
            mid_toString_dc633f13a47328a8,
            mid_unwrap_ddea2fb6f7532b1b,
            mid_useCompoundFile_2842ac3ad62ba0f7,
            mid_maxFullFlushMergeSize_058f5911dcf5d8a4,
            mid_size_3f56451e2a46cc5d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterMergePolicy(jobject obj) : ::org::apache::lucene::index::MergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterMergePolicy(const FilterMergePolicy& obj) : ::org::apache::lucene::index::MergePolicy(obj) {}

          FilterMergePolicy(const ::org::apache::lucene::index::MergePolicy &);

          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedDeletesMerges(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findFullFlushMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const JArray< ::org::apache::lucene::index::CodecReader > &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          jdouble getMaxCFSSegmentSizeMB() const;
          jdouble getNoCFSRatio() const;
          jboolean keepFullyDeletedSegment(const ::org::apache::lucene::util::IOSupplier &) const;
          jint numDeletesToMerge(const ::org::apache::lucene::index::SegmentCommitInfo &, jint, const ::org::apache::lucene::util::IOSupplier &) const;
          void setMaxCFSSegmentSizeMB(jdouble) const;
          void setNoCFSRatio(jdouble) const;
          ::java::lang::String toString() const;
          ::org::apache::lucene::index::MergePolicy unwrap() const;
          jboolean useCompoundFile(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::SegmentCommitInfo &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(FilterMergePolicy);
        extern PyTypeObject *PY_TYPE(FilterMergePolicy);

        class t_FilterMergePolicy {
        public:
          PyObject_HEAD
          FilterMergePolicy object;
          static PyObject *wrap_Object(const FilterMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
