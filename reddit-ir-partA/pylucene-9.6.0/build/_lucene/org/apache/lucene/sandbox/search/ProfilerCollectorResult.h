#ifndef org_apache_lucene_sandbox_search_ProfilerCollectorResult_H
#define org_apache_lucene_sandbox_search_ProfilerCollectorResult_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class Long;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          class ProfilerCollectorResult;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class ProfilerCollectorResult : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a782fce361ddeec0,
              mid_getName_dc633f13a47328a8,
              mid_getProfiledChildren_0bc66e960964b70a,
              mid_getReason_dc633f13a47328a8,
              mid_getTime_058f5911dcf5d8a4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ProfilerCollectorResult(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ProfilerCollectorResult(const ProfilerCollectorResult& obj) : ::java::lang::Object(obj) {}

            ProfilerCollectorResult(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::Long &, const ::java::util::List &);

            ::java::lang::String getName() const;
            ::java::util::List getProfiledChildren() const;
            ::java::lang::String getReason() const;
            jlong getTime() const;
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
          extern PyType_Def PY_TYPE_DEF(ProfilerCollectorResult);
          extern PyTypeObject *PY_TYPE(ProfilerCollectorResult);

          class t_ProfilerCollectorResult {
          public:
            PyObject_HEAD
            ProfilerCollectorResult object;
            static PyObject *wrap_Object(const ProfilerCollectorResult&);
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
