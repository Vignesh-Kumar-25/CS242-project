#ifndef org_apache_lucene_sandbox_document_FloatPointMultiRangeBuilder_H
#define org_apache_lucene_sandbox_document_FloatPointMultiRangeBuilder_H

#include "org/apache/lucene/sandbox/search/MultiRangeQuery$Builder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          class MultiRangeQuery;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace document {

          class FloatPointMultiRangeBuilder : public ::org::apache::lucene::sandbox::search::MultiRangeQuery$Builder {
           public:
            enum {
              mid_init$_751a1c1a1ca09c1d,
              mid_add_94184bf4326c2ecb,
              mid_build_f8b36355207a59b9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FloatPointMultiRangeBuilder(jobject obj) : ::org::apache::lucene::sandbox::search::MultiRangeQuery$Builder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FloatPointMultiRangeBuilder(const FloatPointMultiRangeBuilder& obj) : ::org::apache::lucene::sandbox::search::MultiRangeQuery$Builder(obj) {}

            FloatPointMultiRangeBuilder(const ::java::lang::String &, jint);

            void add(const JArray< jfloat > &, const JArray< jfloat > &) const;
            ::org::apache::lucene::sandbox::search::MultiRangeQuery build() const;
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
        namespace document {
          extern PyType_Def PY_TYPE_DEF(FloatPointMultiRangeBuilder);
          extern PyTypeObject *PY_TYPE(FloatPointMultiRangeBuilder);

          class t_FloatPointMultiRangeBuilder {
          public:
            PyObject_HEAD
            FloatPointMultiRangeBuilder object;
            static PyObject *wrap_Object(const FloatPointMultiRangeBuilder&);
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
