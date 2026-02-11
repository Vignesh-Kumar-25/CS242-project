#ifndef org_apache_lucene_search_similarities_AxiomaticF1EXP_H
#define org_apache_lucene_search_similarities_AxiomaticF1EXP_H

#include "org/apache/lucene/search/similarities/Axiomatic.h"

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

          class AxiomaticF1EXP : public ::org::apache::lucene::search::similarities::Axiomatic {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_354c036766ff84b4,
              mid_init$_798c1353e7b22f8d,
              mid_toString_dc633f13a47328a8,
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

            explicit AxiomaticF1EXP(jobject obj) : ::org::apache::lucene::search::similarities::Axiomatic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AxiomaticF1EXP(const AxiomaticF1EXP& obj) : ::org::apache::lucene::search::similarities::Axiomatic(obj) {}

            AxiomaticF1EXP();
            AxiomaticF1EXP(jfloat);
            AxiomaticF1EXP(jfloat, jfloat);

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
          extern PyType_Def PY_TYPE_DEF(AxiomaticF1EXP);
          extern PyTypeObject *PY_TYPE(AxiomaticF1EXP);

          class t_AxiomaticF1EXP {
          public:
            PyObject_HEAD
            AxiomaticF1EXP object;
            static PyObject *wrap_Object(const AxiomaticF1EXP&);
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
