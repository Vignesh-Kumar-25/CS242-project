#ifndef org_apache_lucene_analysis_miscellaneous_KeywordRepeatFilter_H
#define org_apache_lucene_analysis_miscellaneous_KeywordRepeatFilter_H

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

          class KeywordRepeatFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_ceb0c1d5a3508f22,
              mid_incrementToken_ee8b0a5fa521ddac,
              mid_reset_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KeywordRepeatFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KeywordRepeatFilter(const KeywordRepeatFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            KeywordRepeatFilter(const ::org::apache::lucene::analysis::TokenStream &);

            jboolean incrementToken() const;
            void reset() const;
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
          extern PyType_Def PY_TYPE_DEF(KeywordRepeatFilter);
          extern PyTypeObject *PY_TYPE(KeywordRepeatFilter);

          class t_KeywordRepeatFilter {
          public:
            PyObject_HEAD
            KeywordRepeatFilter object;
            static PyObject *wrap_Object(const KeywordRepeatFilter&);
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
