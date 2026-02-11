#ifndef java_lang_Float_H
#define java_lang_Float_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Float;
    class NumberFormatException;
    class Class;
    class Object;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Float : public ::java::lang::Number {
     public:
      enum {
        mid_init$_4a883f7810d2effa,
        mid_init$_c1f7206c104d501e,
        mid_init$_354c036766ff84b4,
        mid_byteValue_9fe2c7e31d2bc1ae,
        mid_compare_2bd50d05303cb3cc,
        mid_compareTo_50f2ccdf90e9f0e7,
        mid_doubleValue_409d010a7a53d0d1,
        mid_equals_6084f78e09b6c0c3,
        mid_floatToIntBits_4472f45646b3744c,
        mid_floatToRawIntBits_4472f45646b3744c,
        mid_floatValue_15cd8574741b1394,
        mid_hashCode_15aa3d485e96b665,
        mid_hashCode_4472f45646b3744c,
        mid_intBitsToFloat_cc3c9b7e666e88d5,
        mid_intValue_15aa3d485e96b665,
        mid_isFinite_af4e4c1b0afbe569,
        mid_isInfinite_ee8b0a5fa521ddac,
        mid_isInfinite_af4e4c1b0afbe569,
        mid_isNaN_ee8b0a5fa521ddac,
        mid_isNaN_af4e4c1b0afbe569,
        mid_longValue_058f5911dcf5d8a4,
        mid_max_ee4110fd5a96b256,
        mid_min_ee4110fd5a96b256,
        mid_parseFloat_f583783004843512,
        mid_shortValue_b83f3c5fe3ec2a58,
        mid_sum_ee4110fd5a96b256,
        mid_toHexString_c8e40c7484e79ae2,
        mid_toString_dc633f13a47328a8,
        mid_toString_c8e40c7484e79ae2,
        mid_valueOf_822ebdd8b41c8619,
        mid_valueOf_8f8665a48a0b77ab,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Float(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Float(const Float& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jint MAX_EXPONENT;
      static jfloat MAX_VALUE;
      static jint MIN_EXPONENT;
      static jfloat MIN_NORMAL;
      static jfloat MIN_VALUE;
      static jfloat NEGATIVE_INFINITY;
      static jfloat NaN;
      static jfloat POSITIVE_INFINITY;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Float(const ::java::lang::String &);
      Float(jdouble);
      Float(jfloat);

      jbyte byteValue() const;
      static jint compare(jfloat, jfloat);
      jint compareTo(const Float &) const;
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      static jint floatToIntBits(jfloat);
      static jint floatToRawIntBits(jfloat);
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jfloat);
      static jfloat intBitsToFloat(jint);
      jint intValue() const;
      static jboolean isFinite(jfloat);
      jboolean isInfinite() const;
      static jboolean isInfinite(jfloat);
      jboolean isNaN() const;
      static jboolean isNaN(jfloat);
      jlong longValue() const;
      static jfloat max$(jfloat, jfloat);
      static jfloat min$(jfloat, jfloat);
      static jfloat parseFloat(const ::java::lang::String &);
      jshort shortValue() const;
      static jfloat sum(jfloat, jfloat);
      static ::java::lang::String toHexString(jfloat);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jfloat);
      static Float valueOf(const ::java::lang::String &);
      static Float valueOf(jfloat);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Float);
    extern PyTypeObject *PY_TYPE(Float);

    class t_Float {
    public:
      PyObject_HEAD
      Float object;
      static PyObject *wrap_Object(const Float&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
