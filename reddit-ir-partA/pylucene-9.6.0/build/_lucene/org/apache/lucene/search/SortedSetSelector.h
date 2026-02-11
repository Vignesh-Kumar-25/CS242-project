#ifndef org_apache_lucene_search_SortedSetSelector_H
#define org_apache_lucene_search_SortedSetSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedDocValues;
        class SortedSetDocValues;
      }
      namespace search {
        class SortedSetSelector$Type;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class SortedSetSelector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_wrap_69206eed753f3abf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedSetSelector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedSetSelector(const SortedSetSelector& obj) : ::java::lang::Object(obj) {}

          SortedSetSelector();

          static ::org::apache::lucene::index::SortedDocValues wrap(const ::org::apache::lucene::index::SortedSetDocValues &, const ::org::apache::lucene::search::SortedSetSelector$Type &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(SortedSetSelector);
        extern PyTypeObject *PY_TYPE(SortedSetSelector);

        class t_SortedSetSelector {
        public:
          PyObject_HEAD
          SortedSetSelector object;
          static PyObject *wrap_Object(const SortedSetSelector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
