#ifndef org_apache_lucene_index_UpgradeIndexMergePolicy_H
#define org_apache_lucene_index_UpgradeIndexMergePolicy_H

#include "org/apache/lucene/index/FilterMergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
        class MergePolicy;
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

        class UpgradeIndexMergePolicy : public ::org::apache::lucene::index::FilterMergePolicy {
         public:
          enum {
            mid_init$_31961f4c829c80c3,
            mid_findForcedMerges_6589b828f65a6b64,
            mid_findMerges_69db8b75d4bd0c68,
            mid_shouldUpgradeSegment_1916654ac294ff27,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UpgradeIndexMergePolicy(jobject obj) : ::org::apache::lucene::index::FilterMergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UpgradeIndexMergePolicy(const UpgradeIndexMergePolicy& obj) : ::org::apache::lucene::index::FilterMergePolicy(obj) {}

          UpgradeIndexMergePolicy(const ::org::apache::lucene::index::MergePolicy &);

          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(UpgradeIndexMergePolicy);
        extern PyTypeObject *PY_TYPE(UpgradeIndexMergePolicy);

        class t_UpgradeIndexMergePolicy {
        public:
          PyObject_HEAD
          UpgradeIndexMergePolicy object;
          static PyObject *wrap_Object(const UpgradeIndexMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
