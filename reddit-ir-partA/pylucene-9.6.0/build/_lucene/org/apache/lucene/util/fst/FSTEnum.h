#ifndef org_apache_lucene_util_fst_FSTEnum_H
#define org_apache_lucene_util_fst_FSTEnum_H

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
        namespace fst {

          class FSTEnum : public ::java::lang::Object {
           public:
            enum {
              mid_doNext_3353d9f14bbfd91a,
              mid_getCurrentLabel_15aa3d485e96b665,
              mid_setCurrentLabel_da425451c8de636b,
              mid_doSeekCeil_3353d9f14bbfd91a,
              mid_getTargetLabel_15aa3d485e96b665,
              mid_grow_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTEnum(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FSTEnum(const FSTEnum& obj) : ::java::lang::Object(obj) {}
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(FSTEnum);
          extern PyTypeObject *PY_TYPE(FSTEnum);

          class t_FSTEnum {
          public:
            PyObject_HEAD
            FSTEnum object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FSTEnum *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FSTEnum&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FSTEnum&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
