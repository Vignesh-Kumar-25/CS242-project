#ifndef org_apache_lucene_sandbox_document_FloatPointNearestNeighbor_H
#define org_apache_lucene_sandbox_document_FloatPointNearestNeighbor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class TopFieldDocs;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace document {

          class FloatPointNearestNeighbor : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_nearest_130b1a961291e5af,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FloatPointNearestNeighbor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FloatPointNearestNeighbor(const FloatPointNearestNeighbor& obj) : ::java::lang::Object(obj) {}

            FloatPointNearestNeighbor();

            static ::org::apache::lucene::search::TopFieldDocs nearest(const ::org::apache::lucene::search::IndexSearcher &, const ::java::lang::String &, jint, const JArray< jfloat > &);
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
          extern PyType_Def PY_TYPE_DEF(FloatPointNearestNeighbor);
          extern PyTypeObject *PY_TYPE(FloatPointNearestNeighbor);

          class t_FloatPointNearestNeighbor {
          public:
            PyObject_HEAD
            FloatPointNearestNeighbor object;
            static PyObject *wrap_Object(const FloatPointNearestNeighbor&);
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
