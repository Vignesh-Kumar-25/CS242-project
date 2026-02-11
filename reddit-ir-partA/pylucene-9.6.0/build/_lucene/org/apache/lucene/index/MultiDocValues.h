#ifndef org_apache_lucene_index_MultiDocValues_H
#define org_apache_lucene_index_MultiDocValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedSetDocValues;
        class SortedNumericDocValues;
        class NumericDocValues;
        class SortedDocValues;
        class BinaryDocValues;
        class IndexReader;
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
      namespace index {

        class MultiDocValues : public ::java::lang::Object {
         public:
          enum {
            mid_getBinaryValues_6db1a4f86a488655,
            mid_getNormValues_4566cad0642332a6,
            mid_getNumericValues_4566cad0642332a6,
            mid_getSortedNumericValues_0b31620c0d159f0b,
            mid_getSortedSetValues_4923377666eaece9,
            mid_getSortedValues_1355832751ab7025,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiDocValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiDocValues(const MultiDocValues& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::index::BinaryDocValues getBinaryValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::NumericDocValues getNormValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::NumericDocValues getNumericValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedSetDocValues getSortedSetValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedDocValues getSortedValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(MultiDocValues);
        extern PyTypeObject *PY_TYPE(MultiDocValues);

        class t_MultiDocValues {
        public:
          PyObject_HEAD
          MultiDocValues object;
          static PyObject *wrap_Object(const MultiDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
