#ifndef org_apache_lucene_index_OneMergeWrappingMergePolicy_H
#define org_apache_lucene_index_OneMergeWrappingMergePolicy_H

#include "org/apache/lucene/index/FilterMergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
        class MergeTrigger;
        class MergePolicy;
        class SegmentInfos;
        class MergePolicy$MergeContext;
        class MergePolicy$MergeSpecification;
        class MergePolicy$OneMerge;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class UnaryOperator;
    }
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

        class OneMergeWrappingMergePolicy : public ::org::apache::lucene::index::FilterMergePolicy {
         public:
          enum {
            mid_init$_974a3d73ea44c1e2,
            mid_findForcedDeletesMerges_ba8e1f56536744f9,
            mid_findForcedMerges_6589b828f65a6b64,
            mid_findFullFlushMerges_69db8b75d4bd0c68,
            mid_findMerges_69db8b75d4bd0c68,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OneMergeWrappingMergePolicy(jobject obj) : ::org::apache::lucene::index::FilterMergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OneMergeWrappingMergePolicy(const OneMergeWrappingMergePolicy& obj) : ::org::apache::lucene::index::FilterMergePolicy(obj) {}

          OneMergeWrappingMergePolicy(const ::org::apache::lucene::index::MergePolicy &, const ::java::util::function::UnaryOperator &);

          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedDeletesMerges(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findFullFlushMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(OneMergeWrappingMergePolicy);
        extern PyTypeObject *PY_TYPE(OneMergeWrappingMergePolicy);

        class t_OneMergeWrappingMergePolicy {
        public:
          PyObject_HEAD
          OneMergeWrappingMergePolicy object;
          static PyObject *wrap_Object(const OneMergeWrappingMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
