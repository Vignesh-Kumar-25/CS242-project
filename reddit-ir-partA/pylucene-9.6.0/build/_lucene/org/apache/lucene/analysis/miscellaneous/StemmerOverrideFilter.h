#ifndef org_apache_lucene_analysis_miscellaneous_StemmerOverrideFilter_H
#define org_apache_lucene_analysis_miscellaneous_StemmerOverrideFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {
          class StemmerOverrideFilter$StemmerOverrideMap;
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
        namespace miscellaneous {

          class StemmerOverrideFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_cde6b24e7895dbe6,
              mid_incrementToken_ee8b0a5fa521ddac,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StemmerOverrideFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StemmerOverrideFilter(const StemmerOverrideFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            StemmerOverrideFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::miscellaneous::StemmerOverrideFilter$StemmerOverrideMap &);

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
          extern PyType_Def PY_TYPE_DEF(StemmerOverrideFilter);
          extern PyTypeObject *PY_TYPE(StemmerOverrideFilter);

          class t_StemmerOverrideFilter {
          public:
            PyObject_HEAD
            StemmerOverrideFilter object;
            static PyObject *wrap_Object(const StemmerOverrideFilter&);
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
