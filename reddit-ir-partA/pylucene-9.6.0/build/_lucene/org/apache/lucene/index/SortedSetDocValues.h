#ifndef org_apache_lucene_index_SortedSetDocValues_H
#define org_apache_lucene_index_SortedSetDocValues_H

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

        class SortedSetDocValues : public ::org::apache::lucene::index::DocValuesIterator {
         public:
          enum {
            mid_docValueCount_15aa3d485e96b665,
            mid_getValueCount_058f5911dcf5d8a4,
            mid_intersect_d0fb2201e6526f30,
            mid_lookupOrd_2879e2417313c5a8,
            mid_lookupTerm_cac4add48ae85e95,
            mid_nextOrd_058f5911dcf5d8a4,
            mid_termsEnum_b2ad4a24df27c060,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedSetDocValues(jobject obj) : ::org::apache::lucene::index::DocValuesIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedSetDocValues(const SortedSetDocValues& obj) : ::org::apache::lucene::index::DocValuesIterator(obj) {}

          static jlong NO_MORE_ORDS;

          jint docValueCount() const;
          jlong getValueCount() const;
          ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &) const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jlong) const;
          jlong lookupTerm(const ::org::apache::lucene::util::BytesRef &) const;
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
        extern PyType_Def PY_TYPE_DEF(SortedSetDocValues);
        extern PyTypeObject *PY_TYPE(SortedSetDocValues);

        class t_SortedSetDocValues {
        public:
          PyObject_HEAD
          SortedSetDocValues object;
          static PyObject *wrap_Object(const SortedSetDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
