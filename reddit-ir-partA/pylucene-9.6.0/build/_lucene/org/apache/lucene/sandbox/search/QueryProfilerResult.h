#ifndef org_apache_lucene_sandbox_search_QueryProfilerResult_H
#define org_apache_lucene_sandbox_search_QueryProfilerResult_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          class QueryProfilerResult;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Map;
  }
  namespace lang {
    class Class;
    class Long;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class QueryProfilerResult : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7f9ba22a64f94d18,
              mid_getDescription_dc633f13a47328a8,
              mid_getProfiledChildren_0bc66e960964b70a,
              mid_getQueryName_dc633f13a47328a8,
              mid_getTimeBreakdown_19f838df22aacf85,
              mid_getTotalTime_058f5911dcf5d8a4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryProfilerResult(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryProfilerResult(const QueryProfilerResult& obj) : ::java::lang::Object(obj) {}

            QueryProfilerResult(const ::java::lang::String &, const ::java::lang::String &, const ::java::util::Map &, jlong, const ::java::util::List &);

            ::java::lang::String getDescription() const;
            ::java::util::List getProfiledChildren() const;
            ::java::lang::String getQueryName() const;
            ::java::util::Map getTimeBreakdown() const;
            jlong getTotalTime() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(QueryProfilerResult);
          extern PyTypeObject *PY_TYPE(QueryProfilerResult);

          class t_QueryProfilerResult {
          public:
            PyObject_HEAD
            QueryProfilerResult object;
            static PyObject *wrap_Object(const QueryProfilerResult&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
