#ifndef org_apache_lucene_index_CheckIndex$Options_H
#define org_apache_lucene_index_CheckIndex$Options_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class PrintStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CheckIndex$Options : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_getDirImpl_dc633f13a47328a8,
            mid_getIndexPath_dc633f13a47328a8,
            mid_setOut_b6308c09112257e7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex$Options(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CheckIndex$Options(const CheckIndex$Options& obj) : ::java::lang::Object(obj) {}

          CheckIndex$Options();

          ::java::lang::String getDirImpl() const;
          ::java::lang::String getIndexPath() const;
          void setOut(const ::java::io::PrintStream &) const;
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
        extern PyType_Def PY_TYPE_DEF(CheckIndex$Options);
        extern PyTypeObject *PY_TYPE(CheckIndex$Options);

        class t_CheckIndex$Options {
        public:
          PyObject_HEAD
          CheckIndex$Options object;
          static PyObject *wrap_Object(const CheckIndex$Options&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
