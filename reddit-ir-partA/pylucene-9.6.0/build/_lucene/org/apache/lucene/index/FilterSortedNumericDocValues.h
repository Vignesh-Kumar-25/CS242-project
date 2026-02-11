#ifndef org_apache_lucene_index_FilterSortedNumericDocValues_H
#define org_apache_lucene_index_FilterSortedNumericDocValues_H

#include "org/apache/lucene/index/SortedNumericDocValues.h"

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

        class FilterSortedNumericDocValues : public ::org::apache::lucene::index::SortedNumericDocValues {
         public:
          enum {
            mid_init$_90c3ad14ed349db9,
            mid_advance_58b165b57740feff,
            mid_advanceExact_92eccba87b045bbc,
            mid_cost_058f5911dcf5d8a4,
            mid_docID_15aa3d485e96b665,
            mid_docValueCount_15aa3d485e96b665,
            mid_nextDoc_15aa3d485e96b665,
            mid_nextValue_058f5911dcf5d8a4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterSortedNumericDocValues(jobject obj) : ::org::apache::lucene::index::SortedNumericDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterSortedNumericDocValues(const FilterSortedNumericDocValues& obj) : ::org::apache::lucene::index::SortedNumericDocValues(obj) {}

          FilterSortedNumericDocValues(const ::org::apache::lucene::index::SortedNumericDocValues &);

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          jlong cost() const;
          jint docID() const;
          jint docValueCount() const;
          jint nextDoc() const;
          jlong nextValue() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterSortedNumericDocValues);
        extern PyTypeObject *PY_TYPE(FilterSortedNumericDocValues);

        class t_FilterSortedNumericDocValues {
        public:
          PyObject_HEAD
          FilterSortedNumericDocValues object;
          static PyObject *wrap_Object(const FilterSortedNumericDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
