#ifndef org_apache_lucene_store_BaseDirectory_H
#define org_apache_lucene_store_BaseDirectory_H

#include "org/apache/lucene/store/Directory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Lock;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class BaseDirectory : public ::org::apache::lucene::store::Directory {
         public:
          enum {
            mid_obtainLock_dd5331b0e34099ce,
            mid_toString_dc633f13a47328a8,
            mid_ensureOpen_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BaseDirectory(jobject obj) : ::org::apache::lucene::store::Directory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BaseDirectory(const BaseDirectory& obj) : ::org::apache::lucene::store::Directory(obj) {}

          ::org::apache::lucene::store::Lock obtainLock(const ::java::lang::String &) const;
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
      namespace store {
        extern PyType_Def PY_TYPE_DEF(BaseDirectory);
        extern PyTypeObject *PY_TYPE(BaseDirectory);

        class t_BaseDirectory {
        public:
          PyObject_HEAD
          BaseDirectory object;
          static PyObject *wrap_Object(const BaseDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
