#ifndef org_apache_lucene_util_FixedBitSet_H
#define org_apache_lucene_util_FixedBitSet_H

#include "org/apache/lucene/util/BitSet.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class FixedBitSet;
        class Bits;
      }
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

        class FixedBitSet : public ::org::apache::lucene::util::BitSet {
         public:
          enum {
            mid_init$_da425451c8de636b,
            mid_init$_7677019453d1113a,
            mid_and_bc13994c08a3a321,
            mid_andNot_bc13994c08a3a321,
            mid_andNot_2564d731e9721b2c,
            mid_andNotCount_ba13a11b71544b3e,
            mid_approximateCardinality_15aa3d485e96b665,
            mid_asReadOnlyBits_d4f221d850798ead,
            mid_bits2words_58b165b57740feff,
            mid_cardinality_15aa3d485e96b665,
            mid_clear_da425451c8de636b,
            mid_clear_078cef180abf5351,
            mid_clone_d54506e1caf3d4d4,
            mid_copyOf_b930449113bc6b61,
            mid_ensureCapacity_7da44de629ad24b7,
            mid_equals_6084f78e09b6c0c3,
            mid_flip_da425451c8de636b,
            mid_flip_078cef180abf5351,
            mid_get_92eccba87b045bbc,
            mid_getAndClear_92eccba87b045bbc,
            mid_getAndSet_92eccba87b045bbc,
            mid_getBits_f437b7f5adb2eeb1,
            mid_hashCode_15aa3d485e96b665,
            mid_intersectionCount_ba13a11b71544b3e,
            mid_intersects_93ea05ee168ce9c9,
            mid_length_15aa3d485e96b665,
            mid_nextSetBit_58b165b57740feff,
            mid_or_bc13994c08a3a321,
            mid_or_2564d731e9721b2c,
            mid_prevSetBit_58b165b57740feff,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            mid_scanIsEmpty_ee8b0a5fa521ddac,
            mid_set_da425451c8de636b,
            mid_set_078cef180abf5351,
            mid_unionCount_ba13a11b71544b3e,
            mid_xor_bc13994c08a3a321,
            mid_xor_2564d731e9721b2c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FixedBitSet(jobject obj) : ::org::apache::lucene::util::BitSet(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FixedBitSet(const FixedBitSet& obj) : ::org::apache::lucene::util::BitSet(obj) {}

          FixedBitSet(jint);
          FixedBitSet(const JArray< jlong > &, jint);

          void and$(const FixedBitSet &) const;
          void andNot(const FixedBitSet &) const;
          void andNot(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          static jlong andNotCount(const FixedBitSet &, const FixedBitSet &);
          jint approximateCardinality() const;
          ::org::apache::lucene::util::Bits asReadOnlyBits() const;
          static jint bits2words(jint);
          jint cardinality() const;
          void clear(jint) const;
          void clear(jint, jint) const;
          FixedBitSet clone() const;
          static FixedBitSet copyOf(const ::org::apache::lucene::util::Bits &);
          static FixedBitSet ensureCapacity(const FixedBitSet &, jint);
          jboolean equals(const ::java::lang::Object &) const;
          void flip(jint) const;
          void flip(jint, jint) const;
          jboolean get(jint) const;
          jboolean getAndClear(jint) const;
          jboolean getAndSet(jint) const;
          JArray< jlong > getBits() const;
          jint hashCode() const;
          static jlong intersectionCount(const FixedBitSet &, const FixedBitSet &);
          jboolean intersects(const FixedBitSet &) const;
          jint length() const;
          jint nextSetBit(jint) const;
          void or$(const FixedBitSet &) const;
          void or$(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          jint prevSetBit(jint) const;
          jlong ramBytesUsed() const;
          jboolean scanIsEmpty() const;
          void set(jint) const;
          void set(jint, jint) const;
          static jlong unionCount(const FixedBitSet &, const FixedBitSet &);
          void xor$(const FixedBitSet &) const;
          void xor$(const ::org::apache::lucene::search::DocIdSetIterator &) const;
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
        extern PyType_Def PY_TYPE_DEF(FixedBitSet);
        extern PyTypeObject *PY_TYPE(FixedBitSet);

        class t_FixedBitSet {
        public:
          PyObject_HEAD
          FixedBitSet object;
          static PyObject *wrap_Object(const FixedBitSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
