#ifndef org_apache_lucene_search_BooleanQuery$TooManyClauses_H
#define org_apache_lucene_search_BooleanQuery$TooManyClauses_H

#include "org/apache/lucene/search/IndexSearcher$TooManyClauses.h"

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

        class BooleanQuery$TooManyClauses : public ::org::apache::lucene::search::IndexSearcher$TooManyClauses {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanQuery$TooManyClauses(jobject obj) : ::org::apache::lucene::search::IndexSearcher$TooManyClauses(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BooleanQuery$TooManyClauses(const BooleanQuery$TooManyClauses& obj) : ::org::apache::lucene::search::IndexSearcher$TooManyClauses(obj) {}

          BooleanQuery$TooManyClauses();
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
        extern PyType_Def PY_TYPE_DEF(BooleanQuery$TooManyClauses);
        extern PyTypeObject *PY_TYPE(BooleanQuery$TooManyClauses);

        class t_BooleanQuery$TooManyClauses {
        public:
          PyObject_HEAD
          BooleanQuery$TooManyClauses object;
          static PyObject *wrap_Object(const BooleanQuery$TooManyClauses&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
