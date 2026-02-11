#ifndef org_apache_lucene_analysis_shingle_ShingleFilter_H
#define org_apache_lucene_analysis_shingle_ShingleFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace shingle {

          class ShingleFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_ceb0c1d5a3508f22,
              mid_init$_9baabffbf360828c,
              mid_init$_f6bdf5faaee8b1ed,
              mid_init$_3e472f69324f184c,
              mid_end_3353d9f14bbfd91a,
              mid_incrementToken_ee8b0a5fa521ddac,
              mid_reset_3353d9f14bbfd91a,
              mid_setFillerToken_4a883f7810d2effa,
              mid_setMaxShingleSize_da425451c8de636b,
              mid_setMinShingleSize_da425451c8de636b,
              mid_setOutputUnigrams_4f96af910856b303,
              mid_setOutputUnigramsIfNoShingles_4f96af910856b303,
              mid_setTokenSeparator_4a883f7810d2effa,
              mid_setTokenType_4a883f7810d2effa,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ShingleFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ShingleFilter(const ShingleFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static ::java::lang::String *DEFAULT_FILLER_TOKEN;
            static jint DEFAULT_MAX_SHINGLE_SIZE;
            static jint DEFAULT_MIN_SHINGLE_SIZE;
            static ::java::lang::String *DEFAULT_TOKEN_SEPARATOR;
            static ::java::lang::String *DEFAULT_TOKEN_TYPE;

            ShingleFilter(const ::org::apache::lucene::analysis::TokenStream &);
            ShingleFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &);
            ShingleFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);
            ShingleFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, jint);

            void end() const;
            jboolean incrementToken() const;
            void reset() const;
            void setFillerToken(const ::java::lang::String &) const;
            void setMaxShingleSize(jint) const;
            void setMinShingleSize(jint) const;
            void setOutputUnigrams(jboolean) const;
            void setOutputUnigramsIfNoShingles(jboolean) const;
            void setTokenSeparator(const ::java::lang::String &) const;
            void setTokenType(const ::java::lang::String &) const;
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
        namespace shingle {
          extern PyType_Def PY_TYPE_DEF(ShingleFilter);
          extern PyTypeObject *PY_TYPE(ShingleFilter);

          class t_ShingleFilter {
          public:
            PyObject_HEAD
            ShingleFilter object;
            static PyObject *wrap_Object(const ShingleFilter&);
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
