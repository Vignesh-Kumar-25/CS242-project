#ifndef org_apache_lucene_monitor_Monitor$QueryCacheStats_H
#define org_apache_lucene_monitor_Monitor$QueryCacheStats_H

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
      namespace monitor {

        class Monitor$QueryCacheStats : public ::java::lang::Object {
         public:
          enum {
            mid_init$_149e3c231100e68d,
            max_mid
          };

          enum {
            fid_cachedQueries,
            fid_lastPurged,
            fid_queries,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Monitor$QueryCacheStats(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Monitor$QueryCacheStats(const Monitor$QueryCacheStats& obj) : ::java::lang::Object(obj) {}

          jint _get_cachedQueries() const;
          jlong _get_lastPurged() const;
          jint _get_queries() const;

          Monitor$QueryCacheStats(jint, jint, jlong);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        extern PyType_Def PY_TYPE_DEF(Monitor$QueryCacheStats);
        extern PyTypeObject *PY_TYPE(Monitor$QueryCacheStats);

        class t_Monitor$QueryCacheStats {
        public:
          PyObject_HEAD
          Monitor$QueryCacheStats object;
          static PyObject *wrap_Object(const Monitor$QueryCacheStats&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
