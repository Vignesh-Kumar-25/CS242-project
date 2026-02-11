#ifndef org_apache_lucene_index_Impacts_H
#define org_apache_lucene_index_Impacts_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Impact;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class Impacts : public ::java::lang::Object {
         public:
          enum {
            mid_getDocIdUpTo_58b165b57740feff,
            mid_getImpacts_eec93c559a36079a,
            mid_numLevels_15aa3d485e96b665,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Impacts(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Impacts(const Impacts& obj) : ::java::lang::Object(obj) {}

          jint getDocIdUpTo(jint) const;
          ::java::util::List getImpacts(jint) const;
          jint numLevels() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(Impacts);
        extern PyTypeObject *PY_TYPE(Impacts);

        class t_Impacts {
        public:
          PyObject_HEAD
          Impacts object;
          static PyObject *wrap_Object(const Impacts&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
