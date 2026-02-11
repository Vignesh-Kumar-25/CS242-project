#ifndef org_apache_lucene_analysis_miscellaneous_DelimitedTermFrequencyTokenFilter_H
#define org_apache_lucene_analysis_miscellaneous_DelimitedTermFrequencyTokenFilter_H

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
        namespace miscellaneous {

          class DelimitedTermFrequencyTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_ceb0c1d5a3508f22,
              mid_init$_a21705060c47d3ad,
              mid_incrementToken_ee8b0a5fa521ddac,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DelimitedTermFrequencyTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DelimitedTermFrequencyTokenFilter(const DelimitedTermFrequencyTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jchar DEFAULT_DELIMITER;

            DelimitedTermFrequencyTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);
            DelimitedTermFrequencyTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, jchar);

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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(DelimitedTermFrequencyTokenFilter);
          extern PyTypeObject *PY_TYPE(DelimitedTermFrequencyTokenFilter);

          class t_DelimitedTermFrequencyTokenFilter {
          public:
            PyObject_HEAD
            DelimitedTermFrequencyTokenFilter object;
            static PyObject *wrap_Object(const DelimitedTermFrequencyTokenFilter&);
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
