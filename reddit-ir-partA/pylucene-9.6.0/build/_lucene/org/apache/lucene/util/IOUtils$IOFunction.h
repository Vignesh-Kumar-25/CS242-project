#ifndef org_apache_lucene_util_IOUtils$IOFunction_H
#define org_apache_lucene_util_IOUtils$IOFunction_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class IOUtils$IOFunction : public ::java::lang::Object {
         public:
          enum {
            mid_apply_73b517fb00cf5d09,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IOUtils$IOFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IOUtils$IOFunction(const IOUtils$IOFunction& obj) : ::java::lang::Object(obj) {}

          ::java::lang::Object apply(const ::java::lang::Object &) const;
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
        extern PyType_Def PY_TYPE_DEF(IOUtils$IOFunction);
        extern PyTypeObject *PY_TYPE(IOUtils$IOFunction);

        class t_IOUtils$IOFunction {
        public:
          PyObject_HEAD
          IOUtils$IOFunction object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_IOUtils$IOFunction *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const IOUtils$IOFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const IOUtils$IOFunction&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
