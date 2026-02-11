#ifndef org_apache_lucene_search_similarities_LambdaDF_H
#define org_apache_lucene_search_similarities_LambdaDF_H

#include "org/apache/lucene/search/similarities/Lambda.h"

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

          class LambdaDF : public ::org::apache::lucene::search::similarities::Lambda {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_explain_6a1358439adaa48e,
              mid_lambda_6d61ec9cc7403f06,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LambdaDF(jobject obj) : ::org::apache::lucene::search::similarities::Lambda(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LambdaDF(const LambdaDF& obj) : ::org::apache::lucene::search::similarities::Lambda(obj) {}

            LambdaDF();

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::similarities::BasicStats &) const;
            jfloat lambda(const ::org::apache::lucene::search::similarities::BasicStats &) const;
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
          extern PyType_Def PY_TYPE_DEF(LambdaDF);
          extern PyTypeObject *PY_TYPE(LambdaDF);

          class t_LambdaDF {
          public:
            PyObject_HEAD
            LambdaDF object;
            static PyObject *wrap_Object(const LambdaDF&);
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
