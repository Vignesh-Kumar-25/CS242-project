#ifndef org_apache_lucene_util_IntroSorter_H
#define org_apache_lucene_util_IntroSorter_H

#include "org/apache/lucene/util/Sorter.h"

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

        class IntroSorter : public ::org::apache::lucene::util::Sorter {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_sort_078cef180abf5351,
            mid_setPivot_da425451c8de636b,
            mid_comparePivot_58b165b57740feff,
            mid_compare_cd4894667d94f4d3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntroSorter(jobject obj) : ::org::apache::lucene::util::Sorter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntroSorter(const IntroSorter& obj) : ::org::apache::lucene::util::Sorter(obj) {}

          IntroSorter();

          void sort(jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(IntroSorter);
        extern PyTypeObject *PY_TYPE(IntroSorter);

        class t_IntroSorter {
        public:
          PyObject_HEAD
          IntroSorter object;
          static PyObject *wrap_Object(const IntroSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
