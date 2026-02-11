#ifndef java_lang_Double_H
#define java_lang_Double_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class NumberFormatException;
    class Double;
    class Class;
    class Object;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Double : public ::java::lang::Number {
     public:
      enum {
        mid_init$_4a883f7810d2effa,
        mid_init$_c1f7206c104d501e,
        mid_byteValue_9fe2c7e31d2bc1ae,
        mid_compare_0fe47021b7fc608a,
        mid_compareTo_9c56bfbb713d9700,
        mid_doubleToLongBits_1dde19decfbbff0a,
        mid_doubleToRawLongBits_1dde19decfbbff0a,
        mid_doubleValue_409d010a7a53d0d1,
        mid_equals_6084f78e09b6c0c3,
        mid_floatValue_15cd8574741b1394,
        mid_hashCode_15aa3d485e96b665,
        mid_hashCode_32aa492f89a44f0c,
        mid_intValue_15aa3d485e96b665,
        mid_isFinite_46b73ddaa07396a6,
        mid_isInfinite_ee8b0a5fa521ddac,
        mid_isInfinite_46b73ddaa07396a6,
        mid_isNaN_ee8b0a5fa521ddac,
        mid_isNaN_46b73ddaa07396a6,
        mid_longBitsToDouble_8936154681cd8b8e,
        mid_longValue_058f5911dcf5d8a4,
        mid_max_f1b2ed450bf62d32,
        mid_min_f1b2ed450bf62d32,
        mid_parseDouble_36312bff0393adf3,
        mid_shortValue_b83f3c5fe3ec2a58,
        mid_sum_f1b2ed450bf62d32,
        mid_toHexString_207c881979c67b52,
        mid_toString_dc633f13a47328a8,
        mid_toString_207c881979c67b52,
        mid_valueOf_f71472da6bb4e589,
        mid_valueOf_56d1e1f3d0287a97,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Double(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Double(const Double& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jint MAX_EXPONENT;
      static jdouble MAX_VALUE;
      static jint MIN_EXPONENT;
      static jdouble MIN_NORMAL;
      static jdouble MIN_VALUE;
      static jdouble NEGATIVE_INFINITY;
      static jdouble NaN;
      static jdouble POSITIVE_INFINITY;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Double(const ::java::lang::String &);
      Double(jdouble);

      jbyte byteValue() const;
      static jint compare(jdouble, jdouble);
      jint compareTo(const Double &) const;
      static jlong doubleToLongBits(jdouble);
      static jlong doubleToRawLongBits(jdouble);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jdouble);
      jint intValue() const;
      static jboolean isFinite(jdouble);
      jboolean isInfinite() const;
      static jboolean isInfinite(jdouble);
      jboolean isNaN() const;
      static jboolean isNaN(jdouble);
      static jdouble longBitsToDouble(jlong);
      jlong longValue() const;
      static jdouble max$(jdouble, jdouble);
      static jdouble min$(jdouble, jdouble);
      static jdouble parseDouble(const ::java::lang::String &);
      jshort shortValue() const;
      static jdouble sum(jdouble, jdouble);
      static ::java::lang::String toHexString(jdouble);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jdouble);
      static Double valueOf(const ::java::lang::String &);
      static Double valueOf(jdouble);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Double);
    extern PyTypeObject *PY_TYPE(Double);

    class t_Double {
    public:
      PyObject_HEAD
      Double object;
      static PyObject *wrap_Object(const Double&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
