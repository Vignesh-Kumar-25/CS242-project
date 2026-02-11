#ifndef java_lang_Short_H
#define java_lang_Short_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class NumberFormatException;
    class Short;
    class Class;
    class Object;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Short : public ::java::lang::Number {
     public:
      enum {
        mid_init$_4a883f7810d2effa,
        mid_init$_aa54184a742ad854,
        mid_byteValue_9fe2c7e31d2bc1ae,
        mid_compare_f8374e8e8f083b3a,
        mid_compareTo_789e8735558cca3a,
        mid_compareUnsigned_f8374e8e8f083b3a,
        mid_decode_cb04a7f8c983ee97,
        mid_doubleValue_409d010a7a53d0d1,
        mid_equals_6084f78e09b6c0c3,
        mid_floatValue_15cd8574741b1394,
        mid_hashCode_15aa3d485e96b665,
        mid_hashCode_b2464a0412a5f920,
        mid_intValue_15aa3d485e96b665,
        mid_longValue_058f5911dcf5d8a4,
        mid_parseShort_a150840bcca6dadd,
        mid_parseShort_128724f67699710d,
        mid_reverseBytes_a9a817f64ae86bed,
        mid_shortValue_b83f3c5fe3ec2a58,
        mid_toString_dc633f13a47328a8,
        mid_toString_0727260c4e34eee3,
        mid_toUnsignedInt_b2464a0412a5f920,
        mid_toUnsignedLong_1e04fc8574fd35be,
        mid_valueOf_cb04a7f8c983ee97,
        mid_valueOf_14ff06f8760dfd75,
        mid_valueOf_56c3806ab73fd24e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Short(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Short(const Short& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jshort MAX_VALUE;
      static jshort MIN_VALUE;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Short(const ::java::lang::String &);
      Short(jshort);

      jbyte byteValue() const;
      static jint compare(jshort, jshort);
      jint compareTo(const Short &) const;
      static jint compareUnsigned(jshort, jshort);
      static Short decode(const ::java::lang::String &);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jshort);
      jint intValue() const;
      jlong longValue() const;
      static jshort parseShort(const ::java::lang::String &);
      static jshort parseShort(const ::java::lang::String &, jint);
      static jshort reverseBytes(jshort);
      jshort shortValue() const;
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jshort);
      static jint toUnsignedInt(jshort);
      static jlong toUnsignedLong(jshort);
      static Short valueOf(const ::java::lang::String &);
      static Short valueOf(jshort);
      static Short valueOf(const ::java::lang::String &, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Short);
    extern PyTypeObject *PY_TYPE(Short);

    class t_Short {
    public:
      PyObject_HEAD
      Short object;
      static PyObject *wrap_Object(const Short&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
