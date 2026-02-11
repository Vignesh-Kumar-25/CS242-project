#ifndef org_apache_lucene_util_SparseFixedBitSet_H
#define org_apache_lucene_util_SparseFixedBitSet_H

#include "org/apache/lucene/util/BitSet.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class SparseFixedBitSet : public ::org::apache::lucene::util::BitSet {
         public:
          enum {
            mid_init$_da425451c8de636b,
            mid_approximateCardinality_15aa3d485e96b665,
            mid_cardinality_15aa3d485e96b665,
            mid_clear_da425451c8de636b,
            mid_clear_078cef180abf5351,
            mid_get_92eccba87b045bbc,
            mid_getAndSet_92eccba87b045bbc,
            mid_length_15aa3d485e96b665,
            mid_nextSetBit_58b165b57740feff,
            mid_or_2564d731e9721b2c,
            mid_prevSetBit_58b165b57740feff,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            mid_set_da425451c8de636b,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SparseFixedBitSet(jobject obj) : ::org::apache::lucene::util::BitSet(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SparseFixedBitSet(const SparseFixedBitSet& obj) : ::org::apache::lucene::util::BitSet(obj) {}

          SparseFixedBitSet(jint);

          jint approximateCardinality() const;
          jint cardinality() const;
          void clear(jint) const;
          void clear(jint, jint) const;
          jboolean get(jint) const;
          jboolean getAndSet(jint) const;
          jint length() const;
          jint nextSetBit(jint) const;
          void or$(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          jint prevSetBit(jint) const;
          jlong ramBytesUsed() const;
          void set(jint) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(SparseFixedBitSet);
        extern PyTypeObject *PY_TYPE(SparseFixedBitSet);

        class t_SparseFixedBitSet {
        public:
          PyObject_HEAD
          SparseFixedBitSet object;
          static PyObject *wrap_Object(const SparseFixedBitSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
