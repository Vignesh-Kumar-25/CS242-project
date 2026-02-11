#ifndef org_apache_lucene_util_MSBRadixSorter_H
#define org_apache_lucene_util_MSBRadixSorter_H

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

        class MSBRadixSorter : public ::org::apache::lucene::util::Sorter {
         public:
          enum {
            mid_sort_078cef180abf5351,
            mid_byteAt_cd4894667d94f4d3,
            mid_getFallbackSorter_429e955eceed43df,
            mid_getBucket_cd4894667d94f4d3,
            mid_reorder_c71dd00b0bcb4fd9,
            mid_compare_cd4894667d94f4d3,
            mid_sort_dfabecda8fb9b5ea,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MSBRadixSorter(jobject obj) : ::org::apache::lucene::util::Sorter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MSBRadixSorter(const MSBRadixSorter& obj) : ::org::apache::lucene::util::Sorter(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(MSBRadixSorter);
        extern PyTypeObject *PY_TYPE(MSBRadixSorter);

        class t_MSBRadixSorter {
        public:
          PyObject_HEAD
          MSBRadixSorter object;
          static PyObject *wrap_Object(const MSBRadixSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
