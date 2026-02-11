#ifndef org_apache_lucene_index_VectorValues_H
#define org_apache_lucene_index_VectorValues_H

#include "org/apache/lucene/index/FloatVectorValues.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class VectorValues : public ::org::apache::lucene::index::FloatVectorValues {
         public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit VectorValues(jobject obj) : ::org::apache::lucene::index::FloatVectorValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          VectorValues(const VectorValues& obj) : ::org::apache::lucene::index::FloatVectorValues(obj) {}
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
        extern PyType_Def PY_TYPE_DEF(VectorValues);
        extern PyTypeObject *PY_TYPE(VectorValues);

        class t_VectorValues {
        public:
          PyObject_HEAD
          VectorValues object;
          static PyObject *wrap_Object(const VectorValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
