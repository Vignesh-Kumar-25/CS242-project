#ifndef org_apache_lucene_monitor_MonitorUpdateListener_H
#define org_apache_lucene_monitor_MonitorUpdateListener_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class MonitorQuery;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class MonitorUpdateListener : public ::java::lang::Object {
         public:
          enum {
            mid_afterClear_3353d9f14bbfd91a,
            mid_afterDelete_1a2e28000748bc88,
            mid_afterUpdate_1a2e28000748bc88,
            mid_onPurge_3353d9f14bbfd91a,
            mid_onPurgeError_923f33f8220e0899,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MonitorUpdateListener(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MonitorUpdateListener(const MonitorUpdateListener& obj) : ::java::lang::Object(obj) {}

          void afterClear() const;
          void afterDelete(const ::java::util::List &) const;
          void afterUpdate(const ::java::util::List &) const;
          void onPurge() const;
          void onPurgeError(const ::java::lang::Throwable &) const;
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
        extern PyType_Def PY_TYPE_DEF(MonitorUpdateListener);
        extern PyTypeObject *PY_TYPE(MonitorUpdateListener);

        class t_MonitorUpdateListener {
        public:
          PyObject_HEAD
          MonitorUpdateListener object;
          static PyObject *wrap_Object(const MonitorUpdateListener&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
