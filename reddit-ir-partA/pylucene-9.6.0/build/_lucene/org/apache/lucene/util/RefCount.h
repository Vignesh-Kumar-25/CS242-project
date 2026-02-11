#ifndef org_apache_lucene_util_RefCount_H
#define org_apache_lucene_util_RefCount_H

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

        class RefCount : public ::java::lang::Object {
         public:
          enum {
            mid_init$_301632c741f5d054,
            mid_decRef_3353d9f14bbfd91a,
            mid_get_bdd51648087bae52,
            mid_getRefCount_15aa3d485e96b665,
            mid_incRef_3353d9f14bbfd91a,
            mid_release_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RefCount(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RefCount(const RefCount& obj) : ::java::lang::Object(obj) {}

          RefCount(const ::java::lang::Object &);

          void decRef() const;
          ::java::lang::Object get() const;
          jint getRefCount() const;
          void incRef() const;
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
        extern PyType_Def PY_TYPE_DEF(RefCount);
        extern PyTypeObject *PY_TYPE(RefCount);

        class t_RefCount {
        public:
          PyObject_HEAD
          RefCount object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_RefCount *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const RefCount&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const RefCount&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
