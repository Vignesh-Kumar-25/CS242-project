#ifndef java_lang_Long_H
#define java_lang_Long_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class NumberFormatException;
    class CharSequence;
    class Class;
    class Long;
    class Object;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Long : public ::java::lang::Number {
     public:
      enum {
        mid_init$_4a883f7810d2effa,
        mid_init$_db2028ac45cd5b77,
        mid_bitCount_0b5d0387e68ead8f,
        mid_byteValue_9fe2c7e31d2bc1ae,
        mid_compare_f01fa554a6ebef45,
        mid_compareTo_6d924570985d7d5d,
        mid_compareUnsigned_f01fa554a6ebef45,
        mid_decode_98470824f485db2e,
        mid_divideUnsigned_2614435c62c39e05,
        mid_doubleValue_409d010a7a53d0d1,
        mid_equals_6084f78e09b6c0c3,
        mid_floatValue_15cd8574741b1394,
        mid_getLong_98470824f485db2e,
        mid_getLong_2bb8e6163835655e,
        mid_getLong_990f7ef8fbaf861a,
        mid_hashCode_15aa3d485e96b665,
        mid_hashCode_0b5d0387e68ead8f,
        mid_highestOneBit_df4b83f9c1b9d174,
        mid_intValue_15aa3d485e96b665,
        mid_longValue_058f5911dcf5d8a4,
        mid_lowestOneBit_df4b83f9c1b9d174,
        mid_max_2614435c62c39e05,
        mid_min_2614435c62c39e05,
        mid_numberOfLeadingZeros_0b5d0387e68ead8f,
        mid_numberOfTrailingZeros_0b5d0387e68ead8f,
        mid_parseLong_f9e0f284a35cbac5,
        mid_parseLong_06515e410e76c9a7,
        mid_parseLong_69c711e2073a0a37,
        mid_parseUnsignedLong_f9e0f284a35cbac5,
        mid_parseUnsignedLong_06515e410e76c9a7,
        mid_parseUnsignedLong_69c711e2073a0a37,
        mid_remainderUnsigned_2614435c62c39e05,
        mid_reverse_df4b83f9c1b9d174,
        mid_reverseBytes_df4b83f9c1b9d174,
        mid_rotateLeft_df21ac30c0f304d1,
        mid_rotateRight_df21ac30c0f304d1,
        mid_shortValue_b83f3c5fe3ec2a58,
        mid_signum_0b5d0387e68ead8f,
        mid_sum_2614435c62c39e05,
        mid_toBinaryString_23522a84630bd8fe,
        mid_toHexString_23522a84630bd8fe,
        mid_toOctalString_23522a84630bd8fe,
        mid_toString_dc633f13a47328a8,
        mid_toString_23522a84630bd8fe,
        mid_toString_fc6d65c326a7e7c5,
        mid_toUnsignedString_23522a84630bd8fe,
        mid_toUnsignedString_fc6d65c326a7e7c5,
        mid_valueOf_98470824f485db2e,
        mid_valueOf_d1e4f9da1bd5989c,
        mid_valueOf_10fd2ff89cbd3a59,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Long(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Long(const Long& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jlong MAX_VALUE;
      static jlong MIN_VALUE;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Long(const ::java::lang::String &);
      Long(jlong);

      static jint bitCount(jlong);
      jbyte byteValue() const;
      static jint compare(jlong, jlong);
      jint compareTo(const Long &) const;
      static jint compareUnsigned(jlong, jlong);
      static Long decode(const ::java::lang::String &);
      static jlong divideUnsigned(jlong, jlong);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      static Long getLong(const ::java::lang::String &);
      static Long getLong(const ::java::lang::String &, const Long &);
      static Long getLong(const ::java::lang::String &, jlong);
      jint hashCode() const;
      static jint hashCode(jlong);
      static jlong highestOneBit(jlong);
      jint intValue() const;
      jlong longValue() const;
      static jlong lowestOneBit(jlong);
      static jlong max$(jlong, jlong);
      static jlong min$(jlong, jlong);
      static jint numberOfLeadingZeros(jlong);
      static jint numberOfTrailingZeros(jlong);
      static jlong parseLong(const ::java::lang::String &);
      static jlong parseLong(const ::java::lang::String &, jint);
      static jlong parseLong(const ::java::lang::CharSequence &, jint, jint, jint);
      static jlong parseUnsignedLong(const ::java::lang::String &);
      static jlong parseUnsignedLong(const ::java::lang::String &, jint);
      static jlong parseUnsignedLong(const ::java::lang::CharSequence &, jint, jint, jint);
      static jlong remainderUnsigned(jlong, jlong);
      static jlong reverse(jlong);
      static jlong reverseBytes(jlong);
      static jlong rotateLeft(jlong, jint);
      static jlong rotateRight(jlong, jint);
      jshort shortValue() const;
      static jint signum(jlong);
      static jlong sum(jlong, jlong);
      static ::java::lang::String toBinaryString(jlong);
      static ::java::lang::String toHexString(jlong);
      static ::java::lang::String toOctalString(jlong);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jlong);
      static ::java::lang::String toString(jlong, jint);
      static ::java::lang::String toUnsignedString(jlong);
      static ::java::lang::String toUnsignedString(jlong, jint);
      static Long valueOf(const ::java::lang::String &);
      static Long valueOf(jlong);
      static Long valueOf(const ::java::lang::String &, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Long);
    extern PyTypeObject *PY_TYPE(Long);

    class t_Long {
    public:
      PyObject_HEAD
      Long object;
      static PyObject *wrap_Object(const Long&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
