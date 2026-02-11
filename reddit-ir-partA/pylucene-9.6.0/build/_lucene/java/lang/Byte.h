#ifndef java_lang_Byte_H
#define java_lang_Byte_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class NumberFormatException;
    class Class;
    class Object;
    class Byte;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Byte : public ::java::lang::Number {
     public:
      enum {
        mid_init$_4a883f7810d2effa,
        mid_init$_34c1f13335999aeb,
        mid_byteValue_9fe2c7e31d2bc1ae,
        mid_compare_bbc71546d43730a7,
        mid_compareTo_5e6c338e937be6de,
        mid_compareUnsigned_bbc71546d43730a7,
        mid_decode_66b2c5958741fc25,
        mid_doubleValue_409d010a7a53d0d1,
        mid_equals_6084f78e09b6c0c3,
        mid_floatValue_15cd8574741b1394,
        mid_hashCode_15aa3d485e96b665,
        mid_hashCode_130f81254b661ea8,
        mid_intValue_15aa3d485e96b665,
        mid_longValue_058f5911dcf5d8a4,
        mid_parseByte_9f27ee8b19cc5299,
        mid_parseByte_e1befdcca30f1e6e,
        mid_shortValue_b83f3c5fe3ec2a58,
        mid_toString_dc633f13a47328a8,
        mid_toString_cf775ed5f8b9c17c,
        mid_toUnsignedInt_130f81254b661ea8,
        mid_toUnsignedLong_51dae069f41305e4,
        mid_valueOf_66b2c5958741fc25,
        mid_valueOf_778460106bb144f2,
        mid_valueOf_bcdac8b98a16a208,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Byte(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Byte(const Byte& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jbyte MAX_VALUE;
      static jbyte MIN_VALUE;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Byte(const ::java::lang::String &);
      Byte(jbyte);

      jbyte byteValue() const;
      static jint compare(jbyte, jbyte);
      jint compareTo(const Byte &) const;
      static jint compareUnsigned(jbyte, jbyte);
      static Byte decode(const ::java::lang::String &);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jbyte);
      jint intValue() const;
      jlong longValue() const;
      static jbyte parseByte(const ::java::lang::String &);
      static jbyte parseByte(const ::java::lang::String &, jint);
      jshort shortValue() const;
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jbyte);
      static jint toUnsignedInt(jbyte);
      static jlong toUnsignedLong(jbyte);
      static Byte valueOf(const ::java::lang::String &);
      static Byte valueOf(jbyte);
      static Byte valueOf(const ::java::lang::String &, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Byte);
    extern PyTypeObject *PY_TYPE(Byte);

    class t_Byte {
    public:
      PyObject_HEAD
      Byte object;
      static PyObject *wrap_Object(const Byte&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
