#ifndef org_apache_lucene_index_FilterBinaryDocValues_H
#define org_apache_lucene_index_FilterBinaryDocValues_H

#include "org/apache/lucene/index/BinaryDocValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
      namespace index {

        class FilterBinaryDocValues : public ::org::apache::lucene::index::BinaryDocValues {
         public:
          enum {
            mid_advance_58b165b57740feff,
            mid_advanceExact_92eccba87b045bbc,
            mid_binaryValue_e6961a1ebae5a29a,
            mid_cost_058f5911dcf5d8a4,
            mid_docID_15aa3d485e96b665,
            mid_nextDoc_15aa3d485e96b665,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterBinaryDocValues(jobject obj) : ::org::apache::lucene::index::BinaryDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterBinaryDocValues(const FilterBinaryDocValues& obj) : ::org::apache::lucene::index::BinaryDocValues(obj) {}

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          ::org::apache::lucene::util::BytesRef binaryValue() const;
          jlong cost() const;
          jint docID() const;
          jint nextDoc() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterBinaryDocValues);
        extern PyTypeObject *PY_TYPE(FilterBinaryDocValues);

        class t_FilterBinaryDocValues {
        public:
          PyObject_HEAD
          FilterBinaryDocValues object;
          static PyObject *wrap_Object(const FilterBinaryDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
