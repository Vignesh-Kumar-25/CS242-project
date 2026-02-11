#ifndef org_apache_lucene_analysis_miscellaneous_CapitalizationFilter_H
#define org_apache_lucene_analysis_miscellaneous_CapitalizationFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class CharArraySet;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class CapitalizationFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_ceb0c1d5a3508f22,
              mid_init$_a2468bed2c23e156,
              mid_incrementToken_ee8b0a5fa521ddac,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CapitalizationFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CapitalizationFilter(const CapitalizationFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jint DEFAULT_MAX_TOKEN_LENGTH;
            static jint DEFAULT_MAX_WORD_COUNT;

            CapitalizationFilter(const ::org::apache::lucene::analysis::TokenStream &);
            CapitalizationFilter(const ::org::apache::lucene::analysis::TokenStream &, jboolean, const ::org::apache::lucene::analysis::CharArraySet &, jboolean, const ::java::util::Collection &, jint, jint, jint);

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
          extern PyType_Def PY_TYPE_DEF(CapitalizationFilter);
          extern PyTypeObject *PY_TYPE(CapitalizationFilter);

          class t_CapitalizationFilter {
          public:
            PyObject_HEAD
            CapitalizationFilter object;
            static PyObject *wrap_Object(const CapitalizationFilter&);
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
