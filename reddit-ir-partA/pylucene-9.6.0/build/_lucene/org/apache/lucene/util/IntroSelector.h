#ifndef org_apache_lucene_util_IntroSelector_H
#define org_apache_lucene_util_IntroSelector_H

#include "org/apache/lucene/util/Selector.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class IntroSelector : public ::org::apache::lucene::util::Selector {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_select_324f62b85ee857be,
            mid_setPivot_da425451c8de636b,
            mid_comparePivot_58b165b57740feff,
            mid_compare_cd4894667d94f4d3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntroSelector(jobject obj) : ::org::apache::lucene::util::Selector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntroSelector(const IntroSelector& obj) : ::org::apache::lucene::util::Selector(obj) {}

          IntroSelector();

          void select(jint, jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(IntroSelector);
        extern PyTypeObject *PY_TYPE(IntroSelector);

        class t_IntroSelector {
        public:
          PyObject_HEAD
          IntroSelector object;
          static PyObject *wrap_Object(const IntroSelector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
