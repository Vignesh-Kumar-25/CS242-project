#ifndef org_apache_lucene_analysis_pattern_PatternTypingFilter_H
#define org_apache_lucene_analysis_pattern_PatternTypingFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {
          class PatternTypingFilter$PatternTypingRule;
        }
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
        namespace pattern {

          class PatternTypingFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_e7d5a76570305d5e,
              mid_incrementToken_ee8b0a5fa521ddac,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternTypingFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PatternTypingFilter(const PatternTypingFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            PatternTypingFilter(const ::org::apache::lucene::analysis::TokenStream &, const JArray< ::org::apache::lucene::analysis::pattern::PatternTypingFilter$PatternTypingRule > &);

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
        namespace pattern {
          extern PyType_Def PY_TYPE_DEF(PatternTypingFilter);
          extern PyTypeObject *PY_TYPE(PatternTypingFilter);

          class t_PatternTypingFilter {
          public:
            PyObject_HEAD
            PatternTypingFilter object;
            static PyObject *wrap_Object(const PatternTypingFilter&);
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
