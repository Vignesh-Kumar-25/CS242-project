#ifndef java_util_Dictionary_H
#define java_util_Dictionary_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Enumeration;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Dictionary : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_elements_1c290dc3d4f44086,
        mid_get_73b517fb00cf5d09,
        mid_isEmpty_ee8b0a5fa521ddac,
        mid_keys_1c290dc3d4f44086,
        mid_put_eed45094c70976e5,
        mid_remove_73b517fb00cf5d09,
        mid_size_15aa3d485e96b665,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Dictionary(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Dictionary(const Dictionary& obj) : ::java::lang::Object(obj) {}

      Dictionary();

      ::java::util::Enumeration elements() const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Enumeration keys() const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jint size() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Dictionary);
    extern PyTypeObject *PY_TYPE(Dictionary);

    class t_Dictionary {
    public:
      PyObject_HEAD
      Dictionary object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_Dictionary *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Dictionary&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Dictionary&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
