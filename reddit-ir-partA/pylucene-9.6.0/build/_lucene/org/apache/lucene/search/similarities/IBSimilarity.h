#ifndef org_apache_lucene_search_similarities_IBSimilarity_H
#define org_apache_lucene_search_similarities_IBSimilarity_H

#include "org/apache/lucene/search/similarities/SimilarityBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class Lambda;
          class Distribution;
          class Normalization;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class IBSimilarity : public ::org::apache::lucene::search::similarities::SimilarityBase {
           public:
            enum {
              mid_init$_c62790e89b7897e5,
              mid_getDistribution_9b29e6a7bcf2b8d1,
              mid_getLambda_350ce955a6639d13,
              mid_getNormalization_c880adefa62dc2cc,
              mid_toString_dc633f13a47328a8,
              mid_explain_47bf8a0edfcdca9f,
              mid_explain_5a7a052126cad006,
              mid_score_be35337652c82dfe,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IBSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IBSimilarity(const IBSimilarity& obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {}

            IBSimilarity(const ::org::apache::lucene::search::similarities::Distribution &, const ::org::apache::lucene::search::similarities::Lambda &, const ::org::apache::lucene::search::similarities::Normalization &);

            ::org::apache::lucene::search::similarities::Distribution getDistribution() const;
            ::org::apache::lucene::search::similarities::Lambda getLambda() const;
            ::org::apache::lucene::search::similarities::Normalization getNormalization() const;
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
          extern PyType_Def PY_TYPE_DEF(IBSimilarity);
          extern PyTypeObject *PY_TYPE(IBSimilarity);

          class t_IBSimilarity {
          public:
            PyObject_HEAD
            IBSimilarity object;
            static PyObject *wrap_Object(const IBSimilarity&);
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
