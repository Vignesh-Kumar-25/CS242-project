#ifndef org_apache_lucene_store_FSLockFactory_H
#define org_apache_lucene_store_FSLockFactory_H

#include "org/apache/lucene/store/LockFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Lock;
        class FSLockFactory;
        class Directory;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class FSLockFactory : public ::org::apache::lucene::store::LockFactory {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_getDefault_bf3f887876434f30,
            mid_obtainLock_5788284c06459086,
            mid_obtainFSLock_5b71a96c087fb164,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FSLockFactory(jobject obj) : ::org::apache::lucene::store::LockFactory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FSLockFactory(const FSLockFactory& obj) : ::org::apache::lucene::store::LockFactory(obj) {}

          FSLockFactory();

          static FSLockFactory getDefault();
          ::org::apache::lucene::store::Lock obtainLock(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(FSLockFactory);
        extern PyTypeObject *PY_TYPE(FSLockFactory);

        class t_FSLockFactory {
        public:
          PyObject_HEAD
          FSLockFactory object;
          static PyObject *wrap_Object(const FSLockFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
