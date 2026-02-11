#ifndef org_apache_lucene_search_similarities_LMDirichletSimilarity_H
#define org_apache_lucene_search_similarities_LMDirichletSimilarity_H

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

          class LMDirichletSimilarity : public ::org::apache::lucene::search::similarities::LMSimilarity {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_354c036766ff84b4,
              mid_init$_706a6b6b694759ff,
              mid_init$_b188b6210a7b5b19,
              mid_getMu_15cd8574741b1394,
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

            explicit LMDirichletSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::LMSimilarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LMDirichletSimilarity(const LMDirichletSimilarity& obj) : ::org::apache::lucene::search::similarities::LMSimilarity(obj) {}

            LMDirichletSimilarity();
            LMDirichletSimilarity(jfloat);
            LMDirichletSimilarity(const ::org::apache::lucene::search::similarities::LMSimilarity$CollectionModel &);
            LMDirichletSimilarity(const ::org::apache::lucene::search::similarities::LMSimilarity$CollectionModel &, jfloat);

            jfloat getMu() const;
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
          extern PyType_Def PY_TYPE_DEF(LMDirichletSimilarity);
          extern PyTypeObject *PY_TYPE(LMDirichletSimilarity);

          class t_LMDirichletSimilarity {
          public:
            PyObject_HEAD
            LMDirichletSimilarity object;
            static PyObject *wrap_Object(const LMDirichletSimilarity&);
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
