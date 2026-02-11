#ifndef org_apache_lucene_store_RateLimiter_H
#define org_apache_lucene_store_RateLimiter_H

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
      namespace store {

        class RateLimiter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_getMBPerSec_409d010a7a53d0d1,
            mid_getMinPauseCheckBytes_058f5911dcf5d8a4,
            mid_pause_df4b83f9c1b9d174,
            mid_setMBPerSec_c1f7206c104d501e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RateLimiter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RateLimiter(const RateLimiter& obj) : ::java::lang::Object(obj) {}

          RateLimiter();

          jdouble getMBPerSec() const;
          jlong getMinPauseCheckBytes() const;
          jlong pause(jlong) const;
          void setMBPerSec(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(RateLimiter);
        extern PyTypeObject *PY_TYPE(RateLimiter);

        class t_RateLimiter {
        public:
          PyObject_HEAD
          RateLimiter object;
          static PyObject *wrap_Object(const RateLimiter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
