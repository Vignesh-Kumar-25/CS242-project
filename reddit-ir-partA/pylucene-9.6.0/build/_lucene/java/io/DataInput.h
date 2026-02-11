#ifndef java_io_DataInput_H
#define java_io_DataInput_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class DataInput : public ::java::lang::Object {
     public:
      enum {
        mid_readBoolean_ee8b0a5fa521ddac,
        mid_readByte_9fe2c7e31d2bc1ae,
        mid_readChar_b2ab5238d4cbdf34,
        mid_readDouble_409d010a7a53d0d1,
        mid_readFloat_15cd8574741b1394,
        mid_readFully_e11791089a78895a,
        mid_readFully_411019d3e65b5a2d,
        mid_readInt_15aa3d485e96b665,
        mid_readLine_dc633f13a47328a8,
        mid_readLong_058f5911dcf5d8a4,
        mid_readShort_b83f3c5fe3ec2a58,
        mid_readUTF_dc633f13a47328a8,
        mid_readUnsignedByte_15aa3d485e96b665,
        mid_readUnsignedShort_15aa3d485e96b665,
        mid_skipBytes_58b165b57740feff,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit DataInput(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      DataInput(const DataInput& obj) : ::java::lang::Object(obj) {}

      jboolean readBoolean() const;
      jbyte readByte() const;
      jchar readChar() const;
      jdouble readDouble() const;
      jfloat readFloat() const;
      void readFully(const JArray< jbyte > &) const;
      void readFully(const JArray< jbyte > &, jint, jint) const;
      jint readInt() const;
      ::java::lang::String readLine() const;
      jlong readLong() const;
      jshort readShort() const;
      ::java::lang::String readUTF() const;
      jint readUnsignedByte() const;
      jint readUnsignedShort() const;
      jint skipBytes(jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(DataInput);
    extern PyTypeObject *PY_TYPE(DataInput);

    class t_DataInput {
    public:
      PyObject_HEAD
      DataInput object;
      static PyObject *wrap_Object(const DataInput&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
