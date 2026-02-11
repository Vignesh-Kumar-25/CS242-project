#ifndef java_lang_ClassNotFoundException_H
#define java_lang_ClassNotFoundException_H

#include "java/lang/ReflectiveOperationException.h"

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

    class ClassNotFoundException : public ::java::lang::ReflectiveOperationException {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_4a883f7810d2effa,
        mid_init$_7a1edd5721f87dd0,
        mid_getCause_810f7ff0a8f0e46f,
        mid_getException_810f7ff0a8f0e46f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ClassNotFoundException(jobject obj) : ::java::lang::ReflectiveOperationException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ClassNotFoundException(const ClassNotFoundException& obj) : ::java::lang::ReflectiveOperationException(obj) {}

      ClassNotFoundException();
      ClassNotFoundException(const ::java::lang::String &);
      ClassNotFoundException(const ::java::lang::String &, const ::java::lang::Throwable &);

      ::java::lang::Throwable getCause() const;
      ::java::lang::Throwable getException() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ClassNotFoundException);
    extern PyTypeObject *PY_TYPE(ClassNotFoundException);

    class t_ClassNotFoundException {
    public:
      PyObject_HEAD
      ClassNotFoundException object;
      static PyObject *wrap_Object(const ClassNotFoundException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
