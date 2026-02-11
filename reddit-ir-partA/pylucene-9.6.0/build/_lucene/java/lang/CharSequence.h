#ifndef java_lang_CharSequence_H
#define java_lang_CharSequence_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class CharSequence : public ::java::lang::Object {
     public:
      enum {
        mid_charAt_c36d5d142dcfe0b2,
        mid_compare_e75d5ddefe352f54,
        mid_length_15aa3d485e96b665,
        mid_subSequence_d258919c83060ac0,
        mid_toString_dc633f13a47328a8,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit CharSequence(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      CharSequence(const CharSequence& obj) : ::java::lang::Object(obj) {}

      jchar charAt(jint) const;
      static jint compare(const CharSequence &, const CharSequence &);
      jint length() const;
      CharSequence subSequence(jint, jint) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(CharSequence);
    extern PyTypeObject *PY_TYPE(CharSequence);

    class t_CharSequence {
    public:
      PyObject_HEAD
      CharSequence object;
      static PyObject *wrap_Object(const CharSequence&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
