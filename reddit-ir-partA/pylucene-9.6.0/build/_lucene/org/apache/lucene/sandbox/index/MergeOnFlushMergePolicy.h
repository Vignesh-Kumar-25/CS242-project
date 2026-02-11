#ifndef org_apache_lucene_sandbox_index_MergeOnFlushMergePolicy_H
#define org_apache_lucene_sandbox_index_MergeOnFlushMergePolicy_H

#include "org/apache/lucene/index/FilterMergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
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
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace index {

          class MergeOnFlushMergePolicy : public ::org::apache::lucene::index::FilterMergePolicy {
           public:
            enum {
              mid_init$_31961f4c829c80c3,
              mid_findFullFlushMerges_69db8b75d4bd0c68,
              mid_getSmallSegmentThresholdMB_409d010a7a53d0d1,
              mid_setSmallSegmentThresholdMB_c1f7206c104d501e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MergeOnFlushMergePolicy(jobject obj) : ::org::apache::lucene::index::FilterMergePolicy(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MergeOnFlushMergePolicy(const MergeOnFlushMergePolicy& obj) : ::org::apache::lucene::index::FilterMergePolicy(obj) {}

            MergeOnFlushMergePolicy(const ::org::apache::lucene::index::MergePolicy &);

            ::org::apache::lucene::index::MergePolicy$MergeSpecification findFullFlushMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
            jdouble getSmallSegmentThresholdMB() const;
            void setSmallSegmentThresholdMB(jdouble) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace index {
          extern PyType_Def PY_TYPE_DEF(MergeOnFlushMergePolicy);
          extern PyTypeObject *PY_TYPE(MergeOnFlushMergePolicy);

          class t_MergeOnFlushMergePolicy {
          public:
            PyObject_HEAD
            MergeOnFlushMergePolicy object;
            static PyObject *wrap_Object(const MergeOnFlushMergePolicy&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
