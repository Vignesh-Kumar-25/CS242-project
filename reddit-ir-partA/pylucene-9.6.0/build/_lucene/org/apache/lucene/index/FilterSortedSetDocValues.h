#ifndef org_apache_lucene_index_FilterSortedSetDocValues_H
#define org_apache_lucene_index_FilterSortedSetDocValues_H

#include "org/apache/lucene/index/SortedSetDocValues.h"

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

        class FilterSortedSetDocValues : public ::org::apache::lucene::index::SortedSetDocValues {
         public:
          enum {
            mid_init$_a35e5aa39c5a0b84,
            mid_advance_58b165b57740feff,
            mid_advanceExact_92eccba87b045bbc,
            mid_cost_058f5911dcf5d8a4,
            mid_docID_15aa3d485e96b665,
            mid_docValueCount_15aa3d485e96b665,
            mid_getValueCount_058f5911dcf5d8a4,
            mid_intersect_d0fb2201e6526f30,
            mid_lookupOrd_2879e2417313c5a8,
            mid_lookupTerm_cac4add48ae85e95,
            mid_nextDoc_15aa3d485e96b665,
            mid_nextOrd_058f5911dcf5d8a4,
            mid_termsEnum_b2ad4a24df27c060,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterSortedSetDocValues(jobject obj) : ::org::apache::lucene::index::SortedSetDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterSortedSetDocValues(const FilterSortedSetDocValues& obj) : ::org::apache::lucene::index::SortedSetDocValues(obj) {}

          FilterSortedSetDocValues(const ::org::apache::lucene::index::SortedSetDocValues &);

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          jlong cost() const;
          jint docID() const;
          jint docValueCount() const;
          jlong getValueCount() const;
          ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &) const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jlong) const;
          jlong lookupTerm(const ::org::apache::lucene::util::BytesRef &) const;
          jint nextDoc() const;
          jlong nextOrd() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterSortedSetDocValues);
        extern PyTypeObject *PY_TYPE(FilterSortedSetDocValues);

        class t_FilterSortedSetDocValues {
        public:
          PyObject_HEAD
          FilterSortedSetDocValues object;
          static PyObject *wrap_Object(const FilterSortedSetDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
