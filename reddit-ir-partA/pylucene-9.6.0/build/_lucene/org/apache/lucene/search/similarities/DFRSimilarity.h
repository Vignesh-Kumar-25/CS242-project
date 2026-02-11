#ifndef org_apache_lucene_search_similarities_DFRSimilarity_H
#define org_apache_lucene_search_similarities_DFRSimilarity_H

#include "org/apache/lucene/search/similarities/SimilarityBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class BasicModel;
          class Normalization;
          class AfterEffect;
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

          class DFRSimilarity : public ::org::apache::lucene::search::similarities::SimilarityBase {
           public:
            enum {
              mid_init$_b7270f30ebc9050f,
              mid_getAfterEffect_a6bd0a2c4c22c149,
              mid_getBasicModel_bac5e420cceb4adb,
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

            explicit DFRSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DFRSimilarity(const DFRSimilarity& obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {}

            DFRSimilarity(const ::org::apache::lucene::search::similarities::BasicModel &, const ::org::apache::lucene::search::similarities::AfterEffect &, const ::org::apache::lucene::search::similarities::Normalization &);

            ::org::apache::lucene::search::similarities::AfterEffect getAfterEffect() const;
            ::org::apache::lucene::search::similarities::BasicModel getBasicModel() const;
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
          extern PyType_Def PY_TYPE_DEF(DFRSimilarity);
          extern PyTypeObject *PY_TYPE(DFRSimilarity);

          class t_DFRSimilarity {
          public:
            PyObject_HEAD
            DFRSimilarity object;
            static PyObject *wrap_Object(const DFRSimilarity&);
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
