#ifndef org_apache_lucene_search_similarities_IndependenceChiSquared_H
#define org_apache_lucene_search_similarities_IndependenceChiSquared_H

#include "org/apache/lucene/search/similarities/Independence.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class IndependenceChiSquared : public ::org::apache::lucene::search::similarities::Independence {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_score_f1b2ed450bf62d32,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndependenceChiSquared(jobject obj) : ::org::apache::lucene::search::similarities::Independence(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndependenceChiSquared(const IndependenceChiSquared& obj) : ::org::apache::lucene::search::similarities::Independence(obj) {}

            IndependenceChiSquared();

            jdouble score(jdouble, jdouble) const;
            ::java::lang::String toString() const;
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
      namespace search {
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(IndependenceChiSquared);
          extern PyTypeObject *PY_TYPE(IndependenceChiSquared);

          class t_IndependenceChiSquared {
          public:
            PyObject_HEAD
            IndependenceChiSquared object;
            static PyObject *wrap_Object(const IndependenceChiSquared&);
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
