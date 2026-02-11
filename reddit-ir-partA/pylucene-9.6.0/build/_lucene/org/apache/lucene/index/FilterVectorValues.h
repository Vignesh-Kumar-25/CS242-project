#ifndef org_apache_lucene_index_FilterVectorValues_H
#define org_apache_lucene_index_FilterVectorValues_H

#include "org/apache/lucene/index/VectorValues.h"

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

        class FilterVectorValues : public ::org::apache::lucene::index::VectorValues {
         public:
          enum {
            mid_advance_58b165b57740feff,
            mid_dimension_15aa3d485e96b665,
            mid_docID_15aa3d485e96b665,
            mid_nextDoc_15aa3d485e96b665,
            mid_size_15aa3d485e96b665,
            mid_vectorValue_f9af2b083f7af575,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterVectorValues(jobject obj) : ::org::apache::lucene::index::VectorValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterVectorValues(const FilterVectorValues& obj) : ::org::apache::lucene::index::VectorValues(obj) {}

          jint advance(jint) const;
          jint dimension() const;
          jint docID() const;
          jint nextDoc() const;
          jint size() const;
          JArray< jfloat > vectorValue() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterVectorValues);
        extern PyTypeObject *PY_TYPE(FilterVectorValues);

        class t_FilterVectorValues {
        public:
          PyObject_HEAD
          FilterVectorValues object;
          static PyObject *wrap_Object(const FilterVectorValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
