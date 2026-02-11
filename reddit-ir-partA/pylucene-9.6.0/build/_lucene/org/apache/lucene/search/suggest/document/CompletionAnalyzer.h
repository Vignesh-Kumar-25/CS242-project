#ifndef org_apache_lucene_search_suggest_document_CompletionAnalyzer_H
#define org_apache_lucene_search_suggest_document_CompletionAnalyzer_H

#include "org/apache/lucene/analysis/AnalyzerWrapper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class CompletionAnalyzer : public ::org::apache::lucene::analysis::AnalyzerWrapper {
             public:
              enum {
                mid_init$_cea12a5ff05f6816,
                mid_init$_ff26fecf5704133d,
                mid_init$_4c59f4b4511416f3,
                mid_init$_474c376af5deccd2,
                mid_preservePositionIncrements_ee8b0a5fa521ddac,
                mid_preserveSep_ee8b0a5fa521ddac,
                mid_getWrappedAnalyzer_50c72b41f1379565,
                mid_wrapComponents_92412671c044cea7,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CompletionAnalyzer(jobject obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CompletionAnalyzer(const CompletionAnalyzer& obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {}

              CompletionAnalyzer(const ::org::apache::lucene::analysis::Analyzer &);
              CompletionAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, jint);
              CompletionAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, jboolean, jboolean);
              CompletionAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, jboolean, jboolean, jint);

              jboolean preservePositionIncrements() const;
              jboolean preserveSep() const;
            };
          }
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
        namespace suggest {
          namespace document {
            extern PyType_Def PY_TYPE_DEF(CompletionAnalyzer);
            extern PyTypeObject *PY_TYPE(CompletionAnalyzer);

            class t_CompletionAnalyzer {
            public:
              PyObject_HEAD
              CompletionAnalyzer object;
              static PyObject *wrap_Object(const CompletionAnalyzer&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
