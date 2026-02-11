#ifndef org_apache_lucene_monitor_QueryMatch_H
#define org_apache_lucene_monitor_QueryMatch_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class QueryMatch;
        class MatcherFactory;
      }
    }
  }
}
namespace java {
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

        class QueryMatch : public ::java::lang::Object {
         public:
          enum {
            mid_init$_4a883f7810d2effa,
            mid_equals_6084f78e09b6c0c3,
            mid_getQueryId_dc633f13a47328a8,
            mid_hashCode_15aa3d485e96b665,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryMatch(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryMatch(const QueryMatch& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::monitor::MatcherFactory *SIMPLE_MATCHER;

          QueryMatch(const ::java::lang::String &);

          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getQueryId() const;
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
        extern PyType_Def PY_TYPE_DEF(QueryMatch);
        extern PyTypeObject *PY_TYPE(QueryMatch);

        class t_QueryMatch {
        public:
          PyObject_HEAD
          QueryMatch object;
          static PyObject *wrap_Object(const QueryMatch&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
