#ifndef org_apache_lucene_search_similarities_BasicModelIn_H
#define org_apache_lucene_search_similarities_BasicModelIn_H

#include "org/apache/lucene/search/similarities/BasicModel.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
        namespace similarities {
          class BasicStats;
        }
      }
    }
  }
}
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

          class BasicModelIn : public ::org::apache::lucene::search::similarities::BasicModel {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_explain_c6f8137fe771c218,
              mid_score_be35337652c82dfe,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BasicModelIn(jobject obj) : ::org::apache::lucene::search::similarities::BasicModel(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BasicModelIn(const BasicModelIn& obj) : ::org::apache::lucene::search::similarities::BasicModel(obj) {}

            BasicModelIn();

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::similarities::BasicStats &, jdouble, jdouble) const;
            jdouble score(const ::org::apache::lucene::search::similarities::BasicStats &, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(BasicModelIn);
          extern PyTypeObject *PY_TYPE(BasicModelIn);

          class t_BasicModelIn {
          public:
            PyObject_HEAD
            BasicModelIn object;
            static PyObject *wrap_Object(const BasicModelIn&);
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
