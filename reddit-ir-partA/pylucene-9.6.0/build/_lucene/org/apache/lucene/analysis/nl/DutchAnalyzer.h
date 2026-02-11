#ifndef org_apache_lucene_analysis_nl_DutchAnalyzer_H
#define org_apache_lucene_analysis_nl_DutchAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArraySet;
        class CharArrayMap;
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
        namespace nl {

          class DutchAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_d4d7809eb73d632e,
              mid_init$_6fbb54d57755786f,
              mid_init$_8d6c3b9b7ec9433a,
              mid_getDefaultStopSet_cbabc13c6309e190,
              mid_createComponents_ecc168e883a13e3a,
              mid_normalize_36f7d93b7e95e69a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DutchAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DutchAnalyzer(const DutchAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

            static ::java::lang::String *DEFAULT_STOPWORD_FILE;

            DutchAnalyzer();
            DutchAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            DutchAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &, const ::org::apache::lucene::analysis::CharArraySet &);
            DutchAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &, const ::org::apache::lucene::analysis::CharArraySet &, const ::org::apache::lucene::analysis::CharArrayMap &);

            static ::org::apache::lucene::analysis::CharArraySet getDefaultStopSet();
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
        namespace nl {
          extern PyType_Def PY_TYPE_DEF(DutchAnalyzer);
          extern PyTypeObject *PY_TYPE(DutchAnalyzer);

          class t_DutchAnalyzer {
          public:
            PyObject_HEAD
            DutchAnalyzer object;
            static PyObject *wrap_Object(const DutchAnalyzer&);
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
