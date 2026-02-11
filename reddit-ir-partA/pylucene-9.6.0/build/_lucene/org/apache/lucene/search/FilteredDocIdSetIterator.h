#ifndef org_apache_lucene_search_FilteredDocIdSetIterator_H
#define org_apache_lucene_search_FilteredDocIdSetIterator_H

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
      namespace search {

        class FilteredDocIdSetIterator : public ::org::apache::lucene::search::DocIdSetIterator {
         public:
          enum {
            mid_init$_2564d731e9721b2c,
            mid_advance_58b165b57740feff,
            mid_cost_058f5911dcf5d8a4,
            mid_docID_15aa3d485e96b665,
            mid_getDelegate_4d173fc78d956ba9,
            mid_nextDoc_15aa3d485e96b665,
            mid_match_92eccba87b045bbc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilteredDocIdSetIterator(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilteredDocIdSetIterator(const FilteredDocIdSetIterator& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          FilteredDocIdSetIterator(const ::org::apache::lucene::search::DocIdSetIterator &);

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
          ::org::apache::lucene::search::DocIdSetIterator getDelegate() const;
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(FilteredDocIdSetIterator);
        extern PyTypeObject *PY_TYPE(FilteredDocIdSetIterator);

        class t_FilteredDocIdSetIterator {
        public:
          PyObject_HEAD
          FilteredDocIdSetIterator object;
          static PyObject *wrap_Object(const FilteredDocIdSetIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
