#ifndef org_apache_lucene_index_MergePolicy_H
#define org_apache_lucene_index_MergePolicy_H

#include "java/lang/Object.h"

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

        class MergePolicy : public ::java::lang::Object {
         public:
          enum {
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
            mid_useCompoundFile_2842ac3ad62ba0f7,
            mid_segString_bf1a0360273cf8df,
            mid_maxFullFlushMergeSize_058f5911dcf5d8a4,
            mid_assertDelCount_9ca9d92dee3b9b1d,
            mid_isMerged_2842ac3ad62ba0f7,
            mid_verbose_114ed0e162e77fcd,
            mid_size_3f56451e2a46cc5d,
            mid_message_b48262e908c462ab,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergePolicy(const MergePolicy& obj) : ::java::lang::Object(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(MergePolicy);
        extern PyTypeObject *PY_TYPE(MergePolicy);

        class t_MergePolicy {
        public:
          PyObject_HEAD
          MergePolicy object;
          static PyObject *wrap_Object(const MergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
