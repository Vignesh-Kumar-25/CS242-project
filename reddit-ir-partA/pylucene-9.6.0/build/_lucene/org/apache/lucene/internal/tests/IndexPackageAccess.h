#ifndef org_apache_lucene_internal_tests_IndexPackageAccess_H
#define org_apache_lucene_internal_tests_IndexPackageAccess_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader$CacheKey;
        class Impacts;
      }
      namespace internal {
        namespace tests {
          class IndexPackageAccess$FieldInfosBuilder;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace tests {

          class IndexPackageAccess : public ::java::lang::Object {
           public:
            enum {
              mid_checkImpacts_74f2cd00b6bb8001,
              mid_newCacheKey_19ae42e837a65e19,
              mid_newFieldInfosBuilder_891a403966764fda,
              mid_setIndexWriterMaxDocs_da425451c8de636b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndexPackageAccess(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndexPackageAccess(const IndexPackageAccess& obj) : ::java::lang::Object(obj) {}

            void checkImpacts(const ::org::apache::lucene::index::Impacts &, jint) const;
            ::org::apache::lucene::index::IndexReader$CacheKey newCacheKey() const;
            ::org::apache::lucene::internal::tests::IndexPackageAccess$FieldInfosBuilder newFieldInfosBuilder(const ::java::lang::String &) const;
            void setIndexWriterMaxDocs(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(IndexPackageAccess);
          extern PyTypeObject *PY_TYPE(IndexPackageAccess);

          class t_IndexPackageAccess {
          public:
            PyObject_HEAD
            IndexPackageAccess object;
            static PyObject *wrap_Object(const IndexPackageAccess&);
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
