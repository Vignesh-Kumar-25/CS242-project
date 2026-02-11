#ifndef java_lang_IllegalArgumentException_H
#define java_lang_IllegalArgumentException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class IllegalArgumentException : public ::java::lang::RuntimeException {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_4a883f7810d2effa,
        mid_init$_923f33f8220e0899,
        mid_init$_7a1edd5721f87dd0,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit IllegalArgumentException(jobject obj) : ::java::lang::RuntimeException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      IllegalArgumentException(const IllegalArgumentException& obj) : ::java::lang::RuntimeException(obj) {}

      IllegalArgumentException();
      IllegalArgumentException(const ::java::lang::String &);
      IllegalArgumentException(const ::java::lang::Throwable &);
      IllegalArgumentException(const ::java::lang::String &, const ::java::lang::Throwable &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(IllegalArgumentException);
    extern PyTypeObject *PY_TYPE(IllegalArgumentException);

    class t_IllegalArgumentException {
    public:
      PyObject_HEAD
      IllegalArgumentException object;
      static PyObject *wrap_Object(const IllegalArgumentException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
