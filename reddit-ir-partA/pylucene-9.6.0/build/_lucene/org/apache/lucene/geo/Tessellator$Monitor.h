#ifndef org_apache_lucene_geo_Tessellator$Monitor_H
#define org_apache_lucene_geo_Tessellator$Monitor_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class Tessellator$Triangle;
        class Point;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class Tessellator$Monitor : public ::java::lang::Object {
         public:
          enum {
            mid_currentState_7e0d94eaffd3c5a5,
            mid_endSplit_4a883f7810d2effa,
            mid_startSplit_7e0d94eaffd3c5a5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Tessellator$Monitor(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Tessellator$Monitor(const Tessellator$Monitor& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *COMPLETED;
          static ::java::lang::String *FAILED;

          void currentState(const ::java::lang::String &, const ::java::util::List &, const ::java::util::List &) const;
          void endSplit(const ::java::lang::String &) const;
          void startSplit(const ::java::lang::String &, const ::java::util::List &, const ::java::util::List &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        extern PyType_Def PY_TYPE_DEF(Tessellator$Monitor);
        extern PyTypeObject *PY_TYPE(Tessellator$Monitor);

        class t_Tessellator$Monitor {
        public:
          PyObject_HEAD
          Tessellator$Monitor object;
          static PyObject *wrap_Object(const Tessellator$Monitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
