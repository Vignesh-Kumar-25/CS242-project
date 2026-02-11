#ifndef org_apache_lucene_index_CheckIndex$Status$SoftDeletsStatus_H
#define org_apache_lucene_index_CheckIndex$Status$SoftDeletsStatus_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CheckIndex$Status$SoftDeletsStatus : public ::java::lang::Object {
         public:

          enum {
            fid_error,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex$Status$SoftDeletsStatus(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CheckIndex$Status$SoftDeletsStatus(const CheckIndex$Status$SoftDeletsStatus& obj) : ::java::lang::Object(obj) {}

          ::java::lang::Throwable _get_error() const;
          void _set_error(const ::java::lang::Throwable &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(CheckIndex$Status$SoftDeletsStatus);
        extern PyTypeObject *PY_TYPE(CheckIndex$Status$SoftDeletsStatus);

        class t_CheckIndex$Status$SoftDeletsStatus {
        public:
          PyObject_HEAD
          CheckIndex$Status$SoftDeletsStatus object;
          static PyObject *wrap_Object(const CheckIndex$Status$SoftDeletsStatus&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
