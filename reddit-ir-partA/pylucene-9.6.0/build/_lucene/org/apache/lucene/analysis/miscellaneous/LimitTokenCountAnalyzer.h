#ifndef org_apache_lucene_analysis_miscellaneous_LimitTokenCountAnalyzer_H
#define org_apache_lucene_analysis_miscellaneous_LimitTokenCountAnalyzer_H

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
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class LimitTokenCountAnalyzer : public ::org::apache::lucene::analysis::AnalyzerWrapper {
           public:
            enum {
              mid_init$_ff26fecf5704133d,
              mid_init$_fed3a50ecfc0e37d,
              mid_toString_dc633f13a47328a8,
              mid_getWrappedAnalyzer_50c72b41f1379565,
              mid_wrapComponents_92412671c044cea7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LimitTokenCountAnalyzer(jobject obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LimitTokenCountAnalyzer(const LimitTokenCountAnalyzer& obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {}

            LimitTokenCountAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, jint);
            LimitTokenCountAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, jint, jboolean);

            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(LimitTokenCountAnalyzer);
          extern PyTypeObject *PY_TYPE(LimitTokenCountAnalyzer);

          class t_LimitTokenCountAnalyzer {
          public:
            PyObject_HEAD
            LimitTokenCountAnalyzer object;
            static PyObject *wrap_Object(const LimitTokenCountAnalyzer&);
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
