#ifndef java_util_BitSet_H
#define java_util_BitSet_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace util {
    class BitSet;
  }
  namespace lang {
    class Class;
    class Cloneable;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class BitSet : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_da425451c8de636b,
        mid_and_470da641c1caf10e,
        mid_andNot_470da641c1caf10e,
        mid_cardinality_15aa3d485e96b665,
        mid_clear_3353d9f14bbfd91a,
        mid_clear_da425451c8de636b,
        mid_clear_078cef180abf5351,
        mid_clone_bdd51648087bae52,
        mid_equals_6084f78e09b6c0c3,
        mid_flip_da425451c8de636b,
        mid_flip_078cef180abf5351,
        mid_get_92eccba87b045bbc,
        mid_get_de9b923147ade74c,
        mid_hashCode_15aa3d485e96b665,
        mid_intersects_4c870e04ed976adb,
        mid_isEmpty_ee8b0a5fa521ddac,
        mid_length_15aa3d485e96b665,
        mid_nextClearBit_58b165b57740feff,
        mid_nextSetBit_58b165b57740feff,
        mid_or_470da641c1caf10e,
        mid_previousClearBit_58b165b57740feff,
        mid_previousSetBit_58b165b57740feff,
        mid_set_da425451c8de636b,
        mid_set_5a9df8809b7e2c79,
        mid_set_078cef180abf5351,
        mid_set_09d78aa3a207f857,
        mid_size_15aa3d485e96b665,
        mid_toByteArray_f4d7c022fb7af16d,
        mid_toLongArray_f437b7f5adb2eeb1,
        mid_toString_dc633f13a47328a8,
        mid_valueOf_4f275811b185b915,
        mid_valueOf_714e2cf4fc26c62c,
        mid_xor_470da641c1caf10e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit BitSet(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      BitSet(const BitSet& obj) : ::java::lang::Object(obj) {}

      BitSet();
      BitSet(jint);

      void and$(const BitSet &) const;
      void andNot(const BitSet &) const;
      jint cardinality() const;
      void clear() const;
      void clear(jint) const;
      void clear(jint, jint) const;
      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      void flip(jint) const;
      void flip(jint, jint) const;
      jboolean get(jint) const;
      BitSet get(jint, jint) const;
      jint hashCode() const;
      jboolean intersects(const BitSet &) const;
      jboolean isEmpty() const;
      jint length() const;
      jint nextClearBit(jint) const;
      jint nextSetBit(jint) const;
      void or$(const BitSet &) const;
      jint previousClearBit(jint) const;
      jint previousSetBit(jint) const;
      void set(jint) const;
      void set(jint, jboolean) const;
      void set(jint, jint) const;
      void set(jint, jint, jboolean) const;
      jint size() const;
      JArray< jbyte > toByteArray() const;
      JArray< jlong > toLongArray() const;
      ::java::lang::String toString() const;
      static BitSet valueOf(const JArray< jbyte > &);
      static BitSet valueOf(const JArray< jlong > &);
      void xor$(const BitSet &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(BitSet);
    extern PyTypeObject *PY_TYPE(BitSet);

    class t_BitSet {
    public:
      PyObject_HEAD
      BitSet object;
      static PyObject *wrap_Object(const BitSet&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
