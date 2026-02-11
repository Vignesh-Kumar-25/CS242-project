#ifndef org_apache_lucene_index_SortedDocValues_H
#define org_apache_lucene_index_SortedDocValues_H

#include "org/apache/lucene/index/DocValuesIterator.h"

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

        class SortedDocValues : public ::org::apache::lucene::index::DocValuesIterator {
         public:
          enum {
            mid_getValueCount_15aa3d485e96b665,
            mid_intersect_d0fb2201e6526f30,
            mid_lookupOrd_1ad28ec3fc5251fa,
            mid_lookupTerm_7e43af883cb79fc2,
            mid_ordValue_15aa3d485e96b665,
            mid_termsEnum_b2ad4a24df27c060,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedDocValues(jobject obj) : ::org::apache::lucene::index::DocValuesIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedDocValues(const SortedDocValues& obj) : ::org::apache::lucene::index::DocValuesIterator(obj) {}

          jint getValueCount() const;
          ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &) const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jint) const;
          jint lookupTerm(const ::org::apache::lucene::util::BytesRef &) const;
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
        extern PyType_Def PY_TYPE_DEF(SortedDocValues);
        extern PyTypeObject *PY_TYPE(SortedDocValues);

        class t_SortedDocValues {
        public:
          PyObject_HEAD
          SortedDocValues object;
          static PyObject *wrap_Object(const SortedDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
