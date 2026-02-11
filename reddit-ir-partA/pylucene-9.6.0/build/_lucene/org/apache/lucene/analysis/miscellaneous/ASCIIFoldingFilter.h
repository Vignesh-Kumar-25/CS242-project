#ifndef org_apache_lucene_analysis_miscellaneous_ASCIIFoldingFilter_H
#define org_apache_lucene_analysis_miscellaneous_ASCIIFoldingFilter_H

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

          class ASCIIFoldingFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_ceb0c1d5a3508f22,
              mid_init$_8b773a4339cc1b79,
              mid_foldToASCII_8077910d0b141c99,
              mid_foldToASCII_7efc12aec827cd02,
              mid_incrementToken_ee8b0a5fa521ddac,
              mid_isPreserveOriginal_ee8b0a5fa521ddac,
              mid_reset_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ASCIIFoldingFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ASCIIFoldingFilter(const ASCIIFoldingFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            ASCIIFoldingFilter(const ::org::apache::lucene::analysis::TokenStream &);
            ASCIIFoldingFilter(const ::org::apache::lucene::analysis::TokenStream &, jboolean);

            void foldToASCII(const JArray< jchar > &, jint) const;
            static jint foldToASCII(const JArray< jchar > &, jint, const JArray< jchar > &, jint, jint);
            jboolean incrementToken() const;
            jboolean isPreserveOriginal() const;
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
          extern PyType_Def PY_TYPE_DEF(ASCIIFoldingFilter);
          extern PyTypeObject *PY_TYPE(ASCIIFoldingFilter);

          class t_ASCIIFoldingFilter {
          public:
            PyObject_HEAD
            ASCIIFoldingFilter object;
            static PyObject *wrap_Object(const ASCIIFoldingFilter&);
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
