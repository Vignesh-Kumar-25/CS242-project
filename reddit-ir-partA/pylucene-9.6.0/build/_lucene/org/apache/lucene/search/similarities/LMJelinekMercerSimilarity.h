#ifndef org_apache_lucene_search_similarities_LMJelinekMercerSimilarity_H
#define org_apache_lucene_search_similarities_LMJelinekMercerSimilarity_H

#include "org/apache/lucene/search/similarities/LMSimilarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class LMSimilarity$CollectionModel;
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

          class LMJelinekMercerSimilarity : public ::org::apache::lucene::search::similarities::LMSimilarity {
           public:
            enum {
              mid_init$_354c036766ff84b4,
              mid_init$_b188b6210a7b5b19,
              mid_getLambda_15cd8574741b1394,
              mid_getName_dc633f13a47328a8,
              mid_explain_5a7a052126cad006,
              mid_explain_47bf8a0edfcdca9f,
              mid_score_be35337652c82dfe,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LMJelinekMercerSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::LMSimilarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LMJelinekMercerSimilarity(const LMJelinekMercerSimilarity& obj) : ::org::apache::lucene::search::similarities::LMSimilarity(obj) {}

            LMJelinekMercerSimilarity(jfloat);
            LMJelinekMercerSimilarity(const ::org::apache::lucene::search::similarities::LMSimilarity$CollectionModel &, jfloat);

            jfloat getLambda() const;
            ::java::lang::String getName() const;
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
          extern PyType_Def PY_TYPE_DEF(LMJelinekMercerSimilarity);
          extern PyTypeObject *PY_TYPE(LMJelinekMercerSimilarity);

          class t_LMJelinekMercerSimilarity {
          public:
            PyObject_HEAD
            LMJelinekMercerSimilarity object;
            static PyObject *wrap_Object(const LMJelinekMercerSimilarity&);
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
