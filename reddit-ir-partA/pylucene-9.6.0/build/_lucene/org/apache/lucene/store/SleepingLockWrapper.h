#ifndef org_apache_lucene_store_SleepingLockWrapper_H
#define org_apache_lucene_store_SleepingLockWrapper_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Lock;
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

        class SleepingLockWrapper : public ::org::apache::lucene::store::FilterDirectory {
         public:
          enum {
            mid_init$_6d135c84114c1294,
            mid_init$_f6f5c625671308d5,
            mid_obtainLock_dd5331b0e34099ce,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SleepingLockWrapper(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SleepingLockWrapper(const SleepingLockWrapper& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

          static jlong DEFAULT_POLL_INTERVAL;
          static jlong LOCK_OBTAIN_WAIT_FOREVER;

          SleepingLockWrapper(const ::org::apache::lucene::store::Directory &, jlong);
          SleepingLockWrapper(const ::org::apache::lucene::store::Directory &, jlong, jlong);

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
        extern PyType_Def PY_TYPE_DEF(SleepingLockWrapper);
        extern PyTypeObject *PY_TYPE(SleepingLockWrapper);

        class t_SleepingLockWrapper {
        public:
          PyObject_HEAD
          SleepingLockWrapper object;
          static PyObject *wrap_Object(const SleepingLockWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
