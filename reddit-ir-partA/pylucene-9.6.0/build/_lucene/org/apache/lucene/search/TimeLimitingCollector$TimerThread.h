#ifndef org_apache_lucene_search_TimeLimitingCollector$TimerThread_H
#define org_apache_lucene_search_TimeLimitingCollector$TimerThread_H

#include "java/lang/Thread.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Counter;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TimeLimitingCollector$TimerThread : public ::java::lang::Thread {
         public:
          enum {
            mid_init$_40d8bf87115e049e,
            mid_init$_5140ed877d2acf88,
            mid_getMilliseconds_058f5911dcf5d8a4,
            mid_getResolution_058f5911dcf5d8a4,
            mid_run_3353d9f14bbfd91a,
            mid_setResolution_db2028ac45cd5b77,
            mid_stopTimer_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TimeLimitingCollector$TimerThread(jobject obj) : ::java::lang::Thread(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TimeLimitingCollector$TimerThread(const TimeLimitingCollector$TimerThread& obj) : ::java::lang::Thread(obj) {}

          static jint DEFAULT_RESOLUTION;
          static ::java::lang::String *THREAD_NAME;

          TimeLimitingCollector$TimerThread(const ::org::apache::lucene::util::Counter &);
          TimeLimitingCollector$TimerThread(jlong, const ::org::apache::lucene::util::Counter &);

          jlong getMilliseconds() const;
          jlong getResolution() const;
          void run() const;
          void setResolution(jlong) const;
          void stopTimer() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(TimeLimitingCollector$TimerThread);
        extern PyTypeObject *PY_TYPE(TimeLimitingCollector$TimerThread);

        class t_TimeLimitingCollector$TimerThread {
        public:
          PyObject_HEAD
          TimeLimitingCollector$TimerThread object;
          static PyObject *wrap_Object(const TimeLimitingCollector$TimerThread&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
