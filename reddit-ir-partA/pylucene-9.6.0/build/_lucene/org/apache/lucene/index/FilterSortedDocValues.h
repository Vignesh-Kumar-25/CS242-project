#ifndef org_apache_lucene_index_FilterSortedDocValues_H
#define org_apache_lucene_index_FilterSortedDocValues_H

#include "org/apache/lucene/index/SortedDocValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace automaton {
          class CompiledAutomaton;
        }
      }
      namespace index {
        class TermsEnum;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FilterSortedDocValues : public ::org::apache::lucene::index::SortedDocValues {
         public:
          enum {
            mid_init$_16b90fb7288750d0,
            mid_advance_58b165b57740feff,
            mid_advanceExact_92eccba87b045bbc,
            mid_cost_058f5911dcf5d8a4,
            mid_docID_15aa3d485e96b665,
            mid_getValueCount_15aa3d485e96b665,
            mid_intersect_d0fb2201e6526f30,
            mid_lookupOrd_1ad28ec3fc5251fa,
            mid_lookupTerm_7e43af883cb79fc2,
            mid_nextDoc_15aa3d485e96b665,
            mid_ordValue_15aa3d485e96b665,
            mid_termsEnum_b2ad4a24df27c060,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterSortedDocValues(jobject obj) : ::org::apache::lucene::index::SortedDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterSortedDocValues(const FilterSortedDocValues& obj) : ::org::apache::lucene::index::SortedDocValues(obj) {}

          FilterSortedDocValues(const ::org::apache::lucene::index::SortedDocValues &);

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          jlong cost() const;
          jint docID() const;
          jint getValueCount() const;
          ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &) const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jint) const;
          jint lookupTerm(const ::org::apache::lucene::util::BytesRef &) const;
          jint nextDoc() const;
          jint ordValue() const;
          ::org::apache::lucene::index::TermsEnum termsEnum() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterSortedDocValues);
        extern PyTypeObject *PY_TYPE(FilterSortedDocValues);

        class t_FilterSortedDocValues {
        public:
          PyObject_HEAD
          FilterSortedDocValues object;
          static PyObject *wrap_Object(const FilterSortedDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
