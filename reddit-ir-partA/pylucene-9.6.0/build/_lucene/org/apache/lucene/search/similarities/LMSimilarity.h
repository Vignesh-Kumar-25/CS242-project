#ifndef org_apache_lucene_search_similarities_LMSimilarity_H
#define org_apache_lucene_search_similarities_LMSimilarity_H

#include "org/apache/lucene/search/similarities/SimilarityBase.h"

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

          class LMSimilarity : public ::org::apache::lucene::search::similarities::SimilarityBase {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_706a6b6b694759ff,
              mid_getName_dc633f13a47328a8,
              mid_toString_dc633f13a47328a8,
              mid_explain_47bf8a0edfcdca9f,
              mid_newStats_76df2825d84ca171,
              mid_fillBasicStats_fcc6da876ae00bdd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LMSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LMSimilarity(const LMSimilarity& obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {}

            LMSimilarity();
            LMSimilarity(const ::org::apache::lucene::search::similarities::LMSimilarity$CollectionModel &);

            ::java::lang::String getName() const;
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
          extern PyType_Def PY_TYPE_DEF(LMSimilarity);
          extern PyTypeObject *PY_TYPE(LMSimilarity);

          class t_LMSimilarity {
          public:
            PyObject_HEAD
            LMSimilarity object;
            static PyObject *wrap_Object(const LMSimilarity&);
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
