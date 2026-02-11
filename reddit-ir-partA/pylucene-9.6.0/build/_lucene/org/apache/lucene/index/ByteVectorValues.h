#ifndef org_apache_lucene_index_ByteVectorValues_H
#define org_apache_lucene_index_ByteVectorValues_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

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
      namespace index {

        class ByteVectorValues : public ::org::apache::lucene::search::DocIdSetIterator {
         public:
          enum {
            mid_cost_058f5911dcf5d8a4,
            mid_dimension_15aa3d485e96b665,
            mid_size_15aa3d485e96b665,
            mid_vectorValue_f4d7c022fb7af16d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteVectorValues(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteVectorValues(const ByteVectorValues& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          static jint MAX_DIMENSIONS;

          jlong cost() const;
          jint dimension() const;
          jint size() const;
          JArray< jbyte > vectorValue() const;
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
        extern PyType_Def PY_TYPE_DEF(ByteVectorValues);
        extern PyTypeObject *PY_TYPE(ByteVectorValues);

        class t_ByteVectorValues {
        public:
          PyObject_HEAD
          ByteVectorValues object;
          static PyObject *wrap_Object(const ByteVectorValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
