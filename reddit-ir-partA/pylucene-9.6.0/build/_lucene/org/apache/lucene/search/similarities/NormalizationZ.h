#ifndef org_apache_lucene_search_similarities_NormalizationZ_H
#define org_apache_lucene_search_similarities_NormalizationZ_H

#include "org/apache/lucene/search/similarities/Normalization.h"

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

          class NormalizationZ : public ::org::apache::lucene::search::similarities::Normalization {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_354c036766ff84b4,
              mid_explain_c6f8137fe771c218,
              mid_getZ_15cd8574741b1394,
              mid_tfn_be35337652c82dfe,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NormalizationZ(jobject obj) : ::org::apache::lucene::search::similarities::Normalization(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NormalizationZ(const NormalizationZ& obj) : ::org::apache::lucene::search::similarities::Normalization(obj) {}

            NormalizationZ();
            NormalizationZ(jfloat);

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::similarities::BasicStats &, jdouble, jdouble) const;
            jfloat getZ() const;
            jdouble tfn(const ::org::apache::lucene::search::similarities::BasicStats &, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(NormalizationZ);
          extern PyTypeObject *PY_TYPE(NormalizationZ);

          class t_NormalizationZ {
          public:
            PyObject_HEAD
            NormalizationZ object;
            static PyObject *wrap_Object(const NormalizationZ&);
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
