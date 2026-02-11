#ifndef org_apache_lucene_util_Unwrappable_H
#define org_apache_lucene_util_Unwrappable_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class Unwrappable : public ::java::lang::Object {
         public:
          enum {
            mid_unwrap_bdd51648087bae52,
            mid_unwrapAll_73b517fb00cf5d09,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Unwrappable(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Unwrappable(const Unwrappable& obj) : ::java::lang::Object(obj) {}

          ::java::lang::Object unwrap() const;
          static ::java::lang::Object unwrapAll(const ::java::lang::Object &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(Unwrappable);
        extern PyTypeObject *PY_TYPE(Unwrappable);

        class t_Unwrappable {
        public:
          PyObject_HEAD
          Unwrappable object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Unwrappable *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Unwrappable&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Unwrappable&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
