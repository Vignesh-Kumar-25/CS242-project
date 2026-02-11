#ifndef org_apache_lucene_store_RateLimiter$SimpleRateLimiter_H
#define org_apache_lucene_store_RateLimiter$SimpleRateLimiter_H

#include "org/apache/lucene/store/RateLimiter.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class RateLimiter$SimpleRateLimiter : public ::org::apache::lucene::store::RateLimiter {
         public:
          enum {
            mid_init$_c1f7206c104d501e,
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

          explicit RateLimiter$SimpleRateLimiter(jobject obj) : ::org::apache::lucene::store::RateLimiter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RateLimiter$SimpleRateLimiter(const RateLimiter$SimpleRateLimiter& obj) : ::org::apache::lucene::store::RateLimiter(obj) {}

          RateLimiter$SimpleRateLimiter(jdouble);

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
        extern PyType_Def PY_TYPE_DEF(RateLimiter$SimpleRateLimiter);
        extern PyTypeObject *PY_TYPE(RateLimiter$SimpleRateLimiter);

        class t_RateLimiter$SimpleRateLimiter {
        public:
          PyObject_HEAD
          RateLimiter$SimpleRateLimiter object;
          static PyObject *wrap_Object(const RateLimiter$SimpleRateLimiter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
