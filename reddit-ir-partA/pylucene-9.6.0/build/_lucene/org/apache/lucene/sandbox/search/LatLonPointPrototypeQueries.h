#ifndef org_apache_lucene_sandbox_search_LatLonPointPrototypeQueries_H
#define org_apache_lucene_sandbox_search_LatLonPointPrototypeQueries_H

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
        namespace search {

          class LatLonPointPrototypeQueries : public ::java::lang::Object {
           public:
            enum {
              mid_nearest_dd4babc722171799,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LatLonPointPrototypeQueries(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LatLonPointPrototypeQueries(const LatLonPointPrototypeQueries& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::search::TopFieldDocs nearest(const ::org::apache::lucene::search::IndexSearcher &, const ::java::lang::String &, jdouble, jdouble, jint);
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
        namespace search {
          extern PyType_Def PY_TYPE_DEF(LatLonPointPrototypeQueries);
          extern PyTypeObject *PY_TYPE(LatLonPointPrototypeQueries);

          class t_LatLonPointPrototypeQueries {
          public:
            PyObject_HEAD
            LatLonPointPrototypeQueries object;
            static PyObject *wrap_Object(const LatLonPointPrototypeQueries&);
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
