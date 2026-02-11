#ifndef org_apache_lucene_monitor_QueryTimeListener_H
#define org_apache_lucene_monitor_QueryTimeListener_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class QueryTimeListener;
        class MatcherFactory;
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
      namespace monitor {

        class QueryTimeListener : public ::java::lang::Object {
         public:
          enum {
            mid_logQueryTime_0b8e13bc82520de1,
            mid_timingMatcher_d2fd5d9fdd700f07,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryTimeListener(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryTimeListener(const QueryTimeListener& obj) : ::java::lang::Object(obj) {}

          void logQueryTime(const ::java::lang::String &, jlong) const;
          static ::org::apache::lucene::monitor::MatcherFactory timingMatcher(const ::org::apache::lucene::monitor::MatcherFactory &, const QueryTimeListener &);
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
        extern PyType_Def PY_TYPE_DEF(QueryTimeListener);
        extern PyTypeObject *PY_TYPE(QueryTimeListener);

        class t_QueryTimeListener {
        public:
          PyObject_HEAD
          QueryTimeListener object;
          static PyObject *wrap_Object(const QueryTimeListener&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
