#ifndef org_apache_lucene_analysis_sinks_TeeSinkTokenFilter_H
#define org_apache_lucene_analysis_sinks_TeeSinkTokenFilter_H

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
        namespace sinks {

          class TeeSinkTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_ceb0c1d5a3508f22,
              mid_consumeAllTokens_3353d9f14bbfd91a,
              mid_end_3353d9f14bbfd91a,
              mid_incrementToken_ee8b0a5fa521ddac,
              mid_newSinkTokenStream_5e6c3f11ccc6eb07,
              mid_reset_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TeeSinkTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TeeSinkTokenFilter(const TeeSinkTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            TeeSinkTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);

            void consumeAllTokens() const;
            void end() const;
            jboolean incrementToken() const;
            ::org::apache::lucene::analysis::TokenStream newSinkTokenStream() const;
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
        namespace sinks {
          extern PyType_Def PY_TYPE_DEF(TeeSinkTokenFilter);
          extern PyTypeObject *PY_TYPE(TeeSinkTokenFilter);

          class t_TeeSinkTokenFilter {
          public:
            PyObject_HEAD
            TeeSinkTokenFilter object;
            static PyObject *wrap_Object(const TeeSinkTokenFilter&);
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
