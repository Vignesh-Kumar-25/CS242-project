#ifndef org_apache_lucene_util_Accountable_H
#define org_apache_lucene_util_Accountable_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class Accountable : public ::java::lang::Object {
         public:
          enum {
            mid_getChildResources_b47b7eaa8124fb60,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Accountable(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Accountable(const Accountable& obj) : ::java::lang::Object(obj) {}

          static Accountable *NULL_ACCOUNTABLE;

          ::java::util::Collection getChildResources() const;
          jlong ramBytesUsed() const;
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
        extern PyType_Def PY_TYPE_DEF(Accountable);
        extern PyTypeObject *PY_TYPE(Accountable);

        class t_Accountable {
        public:
          PyObject_HEAD
          Accountable object;
          static PyObject *wrap_Object(const Accountable&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
