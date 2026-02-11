#ifndef org_apache_lucene_util_LongBitSet_H
#define org_apache_lucene_util_LongBitSet_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class LongBitSet;
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

        class LongBitSet : public ::java::lang::Object {
         public:
          enum {
            mid_init$_db2028ac45cd5b77,
            mid_init$_6d135f286c8cc6d8,
            mid_and_4f08c2353c717cf4,
            mid_andNot_4f08c2353c717cf4,
            mid_bits2words_0b5d0387e68ead8f,
            mid_cardinality_058f5911dcf5d8a4,
            mid_clear_db2028ac45cd5b77,
            mid_clear_330edd6fec9fab93,
            mid_clone_911ea406e1f19428,
            mid_ensureCapacity_f377907bfefea900,
            mid_equals_6084f78e09b6c0c3,
            mid_flip_db2028ac45cd5b77,
            mid_flip_330edd6fec9fab93,
            mid_get_2000a3857a9ce9c5,
            mid_getAndClear_2000a3857a9ce9c5,
            mid_getAndSet_2000a3857a9ce9c5,
            mid_getBits_f437b7f5adb2eeb1,
            mid_hashCode_15aa3d485e96b665,
            mid_intersects_cb40602f2e6f2e3d,
            mid_length_058f5911dcf5d8a4,
            mid_nextSetBit_df4b83f9c1b9d174,
            mid_or_4f08c2353c717cf4,
            mid_prevSetBit_df4b83f9c1b9d174,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            mid_scanIsEmpty_ee8b0a5fa521ddac,
            mid_set_db2028ac45cd5b77,
            mid_set_330edd6fec9fab93,
            mid_xor_4f08c2353c717cf4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongBitSet(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongBitSet(const LongBitSet& obj) : ::java::lang::Object(obj) {}

          static jlong MAX_NUM_BITS;

          LongBitSet(jlong);
          LongBitSet(const JArray< jlong > &, jlong);

          void and$(const LongBitSet &) const;
          void andNot(const LongBitSet &) const;
          static jint bits2words(jlong);
          jlong cardinality() const;
          void clear(jlong) const;
          void clear(jlong, jlong) const;
          LongBitSet clone() const;
          static LongBitSet ensureCapacity(const LongBitSet &, jlong);
          jboolean equals(const ::java::lang::Object &) const;
          void flip(jlong) const;
          void flip(jlong, jlong) const;
          jboolean get(jlong) const;
          jboolean getAndClear(jlong) const;
          jboolean getAndSet(jlong) const;
          JArray< jlong > getBits() const;
          jint hashCode() const;
          jboolean intersects(const LongBitSet &) const;
          jlong length() const;
          jlong nextSetBit(jlong) const;
          void or$(const LongBitSet &) const;
          jlong prevSetBit(jlong) const;
          jlong ramBytesUsed() const;
          jboolean scanIsEmpty() const;
          void set(jlong) const;
          void set(jlong, jlong) const;
          void xor$(const LongBitSet &) const;
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
        extern PyType_Def PY_TYPE_DEF(LongBitSet);
        extern PyTypeObject *PY_TYPE(LongBitSet);

        class t_LongBitSet {
        public:
          PyObject_HEAD
          LongBitSet object;
          static PyObject *wrap_Object(const LongBitSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
