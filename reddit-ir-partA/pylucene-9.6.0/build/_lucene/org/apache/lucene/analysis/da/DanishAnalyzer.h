#ifndef org_apache_lucene_analysis_da_DanishAnalyzer_H
#define org_apache_lucene_analysis_da_DanishAnalyzer_H

#include "org/apache/lucene/analysis/StopwordAnalyzerBase.h"

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
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace da {

          class DanishAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_d4d7809eb73d632e,
              mid_init$_6fbb54d57755786f,
              mid_getDefaultStopSet_cbabc13c6309e190,
              mid_createComponents_ecc168e883a13e3a,
              mid_normalize_36f7d93b7e95e69a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DanishAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DanishAnalyzer(const DanishAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            static ::java::lang::String *DEFAULT_STOPWORD_FILE;

            DanishAnalyzer();
            DanishAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            DanishAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &, const ::org::apache::lucene::analysis::CharArraySet &);

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
        namespace da {
          extern PyType_Def PY_TYPE_DEF(DanishAnalyzer);
          extern PyTypeObject *PY_TYPE(DanishAnalyzer);

          class t_DanishAnalyzer {
          public:
            PyObject_HEAD
            DanishAnalyzer object;
            static PyObject *wrap_Object(const DanishAnalyzer&);
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
