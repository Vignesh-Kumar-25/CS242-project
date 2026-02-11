#ifndef org_apache_lucene_util_BitSetIterator_H
#define org_apache_lucene_util_BitSetIterator_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class SparseFixedBitSet;
        class FixedBitSet;
        class BitSet;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BitSetIterator : public ::org::apache::lucene::search::DocIdSetIterator {
         public:
          enum {
            mid_init$_11163d3fb1a3d63a,
            mid_advance_58b165b57740feff,
            mid_cost_058f5911dcf5d8a4,
            mid_docID_15aa3d485e96b665,
            mid_getBitSet_02207d5189d32143,
            mid_getFixedBitSetOrNull_2c0abe595b84f82a,
            mid_getSparseFixedBitSetOrNull_2e82fe2cc1eeb40e,
            mid_nextDoc_15aa3d485e96b665,
            mid_setDocId_da425451c8de636b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BitSetIterator(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BitSetIterator(const BitSetIterator& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          BitSetIterator(const ::org::apache::lucene::util::BitSet &, jlong);

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
          ::org::apache::lucene::util::BitSet getBitSet() const;
          static ::org::apache::lucene::util::FixedBitSet getFixedBitSetOrNull(const ::org::apache::lucene::search::DocIdSetIterator &);
          static ::org::apache::lucene::util::SparseFixedBitSet getSparseFixedBitSetOrNull(const ::org::apache::lucene::search::DocIdSetIterator &);
          jint nextDoc() const;
          void setDocId(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(BitSetIterator);
        extern PyTypeObject *PY_TYPE(BitSetIterator);

        class t_BitSetIterator {
        public:
          PyObject_HEAD
          BitSetIterator object;
          static PyObject *wrap_Object(const BitSetIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
