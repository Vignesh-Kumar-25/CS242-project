#ifndef org_apache_lucene_internal_tests_TestSecrets_H
#define org_apache_lucene_internal_tests_TestSecrets_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace tests {
          class SegmentReaderAccess;
          class IndexPackageAccess;
          class ConcurrentMergeSchedulerAccess;
          class IndexWriterAccess;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace tests {

          class TestSecrets : public ::java::lang::Object {
           public:
            enum {
              mid_getConcurrentMergeSchedulerAccess_0a66faae63bb28e3,
              mid_getIndexPackageAccess_adecf4d9e84b2ddf,
              mid_getIndexWriterAccess_b59d5afcc25f444a,
              mid_getSegmentReaderAccess_e9d6fce3462ae22e,
              mid_setConcurrentMergeSchedulerAccess_633001a60ec2326a,
              mid_setIndexPackageAccess_af012035a0d41363,
              mid_setIndexWriterAccess_4ce0b87e20d6fdd1,
              mid_setSegmentReaderAccess_9cbea5accb4dd87d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TestSecrets(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TestSecrets(const TestSecrets& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::internal::tests::ConcurrentMergeSchedulerAccess getConcurrentMergeSchedulerAccess();
            static ::org::apache::lucene::internal::tests::IndexPackageAccess getIndexPackageAccess();
            static ::org::apache::lucene::internal::tests::IndexWriterAccess getIndexWriterAccess();
            static ::org::apache::lucene::internal::tests::SegmentReaderAccess getSegmentReaderAccess();
            static void setConcurrentMergeSchedulerAccess(const ::org::apache::lucene::internal::tests::ConcurrentMergeSchedulerAccess &);
            static void setIndexPackageAccess(const ::org::apache::lucene::internal::tests::IndexPackageAccess &);
            static void setIndexWriterAccess(const ::org::apache::lucene::internal::tests::IndexWriterAccess &);
            static void setSegmentReaderAccess(const ::org::apache::lucene::internal::tests::SegmentReaderAccess &);
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
      namespace internal {
        namespace tests {
          extern PyType_Def PY_TYPE_DEF(TestSecrets);
          extern PyTypeObject *PY_TYPE(TestSecrets);

          class t_TestSecrets {
          public:
            PyObject_HEAD
            TestSecrets object;
            static PyObject *wrap_Object(const TestSecrets&);
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
