#ifndef org_apache_lucene_monitor_MonitorQuery_H
#define org_apache_lucene_monitor_MonitorQuery_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
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
      namespace monitor {

        class MonitorQuery : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1ce1ca365b187703,
            mid_init$_7e5fecb6f2fc686f,
            mid_equals_6084f78e09b6c0c3,
            mid_getId_dc633f13a47328a8,
            mid_getMetadata_19f838df22aacf85,
            mid_getQuery_0b32ec998a0c18fa,
            mid_getQueryString_dc633f13a47328a8,
            mid_hashCode_15aa3d485e96b665,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MonitorQuery(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MonitorQuery(const MonitorQuery& obj) : ::java::lang::Object(obj) {}

          MonitorQuery(const ::java::lang::String &, const ::org::apache::lucene::search::Query &);
          MonitorQuery(const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const ::java::util::Map &);

          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getId() const;
          ::java::util::Map getMetadata() const;
          ::org::apache::lucene::search::Query getQuery() const;
          ::java::lang::String getQueryString() const;
          jint hashCode() const;
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
      namespace monitor {
        extern PyType_Def PY_TYPE_DEF(MonitorQuery);
        extern PyTypeObject *PY_TYPE(MonitorQuery);

        class t_MonitorQuery {
        public:
          PyObject_HEAD
          MonitorQuery object;
          static PyObject *wrap_Object(const MonitorQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
