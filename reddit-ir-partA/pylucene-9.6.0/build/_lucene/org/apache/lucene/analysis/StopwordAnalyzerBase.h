#ifndef org_apache_lucene_analysis_StopwordAnalyzerBase_H
#define org_apache_lucene_analysis_StopwordAnalyzerBase_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArraySet;
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
      namespace analysis {

        class StopwordAnalyzerBase : public ::org::apache::lucene::analysis::Analyzer {
         public:
          enum {
            mid_getStopwordSet_cbabc13c6309e190,
            mid_loadStopwordSet_22ff100f9c5f1738,
            mid_loadStopwordSet_3659ec439af7a842,
            mid_loadStopwordSet_b19a8734e9f25ec6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StopwordAnalyzerBase(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StopwordAnalyzerBase(const StopwordAnalyzerBase& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

          ::org::apache::lucene::analysis::CharArraySet getStopwordSet() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(StopwordAnalyzerBase);
        extern PyTypeObject *PY_TYPE(StopwordAnalyzerBase);

        class t_StopwordAnalyzerBase {
        public:
          PyObject_HEAD
          StopwordAnalyzerBase object;
          static PyObject *wrap_Object(const StopwordAnalyzerBase&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
