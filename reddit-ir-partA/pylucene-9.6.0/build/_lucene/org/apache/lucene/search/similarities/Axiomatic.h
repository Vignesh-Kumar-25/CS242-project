#ifndef org_apache_lucene_search_similarities_Axiomatic_H
#define org_apache_lucene_search_similarities_Axiomatic_H

#include "org/apache/lucene/search/similarities/SimilarityBase.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class BasicStats;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class Axiomatic : public ::org::apache::lucene::search::similarities::SimilarityBase {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_354c036766ff84b4,
              mid_init$_fabc4ac83c35fe74,
              mid_init$_f0699b063a2911ce,
              mid_score_be35337652c82dfe,
              mid_toString_dc633f13a47328a8,
              mid_explain_47bf8a0edfcdca9f,
              mid_explain_5a7a052126cad006,
              mid_idf_be35337652c82dfe,
              mid_tf_be35337652c82dfe,
              mid_gamma_be35337652c82dfe,
              mid_tfln_be35337652c82dfe,
              mid_tfExplain_c6f8137fe771c218,
              mid_lnExplain_c6f8137fe771c218,
              mid_tflnExplain_c6f8137fe771c218,
              mid_idfExplain_c6f8137fe771c218,
              mid_ln_be35337652c82dfe,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Axiomatic(jobject obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Axiomatic(const Axiomatic& obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {}

            Axiomatic();
            Axiomatic(jfloat);
            Axiomatic(jfloat, jint);
            Axiomatic(jfloat, jint, jfloat);

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
          extern PyType_Def PY_TYPE_DEF(Axiomatic);
          extern PyTypeObject *PY_TYPE(Axiomatic);

          class t_Axiomatic {
          public:
            PyObject_HEAD
            Axiomatic object;
            static PyObject *wrap_Object(const Axiomatic&);
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
