#ifndef org_apache_lucene_index_TermState_H
#define org_apache_lucene_index_TermState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermState;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Cloneable;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class TermState : public ::java::lang::Object {
         public:
          enum {
            mid_clone_5d53046b0d72b0fe,
            mid_copyFrom_04ccf35d61a091e3,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermState(const TermState& obj) : ::java::lang::Object(obj) {}

          TermState clone() const;
          void copyFrom(const TermState &) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(TermState);
        extern PyTypeObject *PY_TYPE(TermState);

        class t_TermState {
        public:
          PyObject_HEAD
          TermState object;
          static PyObject *wrap_Object(const TermState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
