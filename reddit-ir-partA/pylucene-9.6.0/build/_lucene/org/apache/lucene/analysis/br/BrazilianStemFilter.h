#ifndef org_apache_lucene_analysis_br_BrazilianStemFilter_H
#define org_apache_lucene_analysis_br_BrazilianStemFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace br {

          class BrazilianStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_ceb0c1d5a3508f22,
              mid_incrementToken_ee8b0a5fa521ddac,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BrazilianStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BrazilianStemFilter(const BrazilianStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            BrazilianStemFilter(const ::org::apache::lucene::analysis::TokenStream &);

            jboolean incrementToken() const;
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
      namespace analysis {
        namespace br {
          extern PyType_Def PY_TYPE_DEF(BrazilianStemFilter);
          extern PyTypeObject *PY_TYPE(BrazilianStemFilter);

          class t_BrazilianStemFilter {
          public:
            PyObject_HEAD
            BrazilianStemFilter object;
            static PyObject *wrap_Object(const BrazilianStemFilter&);
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
