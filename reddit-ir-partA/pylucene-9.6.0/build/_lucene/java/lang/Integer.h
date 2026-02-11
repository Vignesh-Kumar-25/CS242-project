#ifndef java_lang_Integer_H
#define java_lang_Integer_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class NumberFormatException;
    class Integer;
    class CharSequence;
    class Class;
    class Object;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Integer : public ::java::lang::Number {
     public:
      enum {
        mid_init$_4a883f7810d2effa,
        mid_init$_da425451c8de636b,
        mid_bitCount_58b165b57740feff,
        mid_byteValue_9fe2c7e31d2bc1ae,
        mid_compare_cd4894667d94f4d3,
        mid_compareTo_091356eb8b508fec,
        mid_compareUnsigned_cd4894667d94f4d3,
        mid_decode_54d1c2eeba910b98,
        mid_divideUnsigned_cd4894667d94f4d3,
        mid_doubleValue_409d010a7a53d0d1,
        mid_equals_6084f78e09b6c0c3,
        mid_floatValue_15cd8574741b1394,
        mid_getInteger_54d1c2eeba910b98,
        mid_getInteger_4d755692e0d46ee3,
        mid_getInteger_34b613598b8aea8e,
        mid_hashCode_15aa3d485e96b665,
        mid_hashCode_58b165b57740feff,
        mid_highestOneBit_58b165b57740feff,
        mid_intValue_15aa3d485e96b665,
        mid_longValue_058f5911dcf5d8a4,
        mid_lowestOneBit_58b165b57740feff,
        mid_max_cd4894667d94f4d3,
        mid_min_cd4894667d94f4d3,
        mid_numberOfLeadingZeros_58b165b57740feff,
        mid_numberOfTrailingZeros_58b165b57740feff,
        mid_parseInt_08c5dabd7f8f1590,
        mid_parseInt_386534c7af1bb368,
        mid_parseInt_722a153e560652f9,
        mid_parseUnsignedInt_08c5dabd7f8f1590,
        mid_parseUnsignedInt_386534c7af1bb368,
        mid_parseUnsignedInt_722a153e560652f9,
        mid_remainderUnsigned_cd4894667d94f4d3,
        mid_reverse_58b165b57740feff,
        mid_reverseBytes_58b165b57740feff,
        mid_rotateLeft_cd4894667d94f4d3,
        mid_rotateRight_cd4894667d94f4d3,
        mid_shortValue_b83f3c5fe3ec2a58,
        mid_signum_58b165b57740feff,
        mid_sum_cd4894667d94f4d3,
        mid_toBinaryString_78a7b318cefaee15,
        mid_toHexString_78a7b318cefaee15,
        mid_toOctalString_78a7b318cefaee15,
        mid_toString_dc633f13a47328a8,
        mid_toString_78a7b318cefaee15,
        mid_toString_e98b2080aaec4364,
        mid_toUnsignedLong_70b2a956d0e32bc7,
        mid_toUnsignedString_78a7b318cefaee15,
        mid_toUnsignedString_e98b2080aaec4364,
        mid_valueOf_54d1c2eeba910b98,
        mid_valueOf_a13241095a519edb,
        mid_valueOf_34b613598b8aea8e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Integer(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Integer(const Integer& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jint MAX_VALUE;
      static jint MIN_VALUE;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Integer(const ::java::lang::String &);
      Integer(jint);

      static jint bitCount(jint);
      jbyte byteValue() const;
      static jint compare(jint, jint);
      jint compareTo(const Integer &) const;
      static jint compareUnsigned(jint, jint);
      static Integer decode(const ::java::lang::String &);
      static jint divideUnsigned(jint, jint);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      static Integer getInteger(const ::java::lang::String &);
      static Integer getInteger(const ::java::lang::String &, const Integer &);
      static Integer getInteger(const ::java::lang::String &, jint);
      jint hashCode() const;
      static jint hashCode(jint);
      static jint highestOneBit(jint);
      jint intValue() const;
      jlong longValue() const;
      static jint lowestOneBit(jint);
      static jint max$(jint, jint);
      static jint min$(jint, jint);
      static jint numberOfLeadingZeros(jint);
      static jint numberOfTrailingZeros(jint);
      static jint parseInt(const ::java::lang::String &);
      static jint parseInt(const ::java::lang::String &, jint);
      static jint parseInt(const ::java::lang::CharSequence &, jint, jint, jint);
      static jint parseUnsignedInt(const ::java::lang::String &);
      static jint parseUnsignedInt(const ::java::lang::String &, jint);
      static jint parseUnsignedInt(const ::java::lang::CharSequence &, jint, jint, jint);
      static jint remainderUnsigned(jint, jint);
      static jint reverse(jint);
      static jint reverseBytes(jint);
      static jint rotateLeft(jint, jint);
      static jint rotateRight(jint, jint);
      jshort shortValue() const;
      static jint signum(jint);
      static jint sum(jint, jint);
      static ::java::lang::String toBinaryString(jint);
      static ::java::lang::String toHexString(jint);
      static ::java::lang::String toOctalString(jint);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jint);
      static ::java::lang::String toString(jint, jint);
      static jlong toUnsignedLong(jint);
      static ::java::lang::String toUnsignedString(jint);
      static ::java::lang::String toUnsignedString(jint, jint);
      static Integer valueOf(const ::java::lang::String &);
      static Integer valueOf(jint);
      static Integer valueOf(const ::java::lang::String &, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Integer);
    extern PyTypeObject *PY_TYPE(Integer);

    class t_Integer {
    public:
      PyObject_HEAD
      Integer object;
      static PyObject *wrap_Object(const Integer&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
