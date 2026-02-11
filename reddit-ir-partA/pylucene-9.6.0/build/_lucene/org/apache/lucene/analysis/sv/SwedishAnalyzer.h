#ifndef org_apache_lucene_analysis_sv_SwedishAnalyzer_H
#define org_apache_lucene_analysis_sv_SwedishAnalyzer_H

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
        namespace sv {

          class SwedishAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
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

            explicit SwedishAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SwedishAnalyzer(const SwedishAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            static ::java::lang::String *DEFAULT_STOPWORD_FILE;

            SwedishAnalyzer();
            SwedishAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            SwedishAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &, const ::org::apache::lucene::analysis::CharArraySet &);

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
        namespace sv {
          extern PyType_Def PY_TYPE_DEF(SwedishAnalyzer);
          extern PyTypeObject *PY_TYPE(SwedishAnalyzer);

          class t_SwedishAnalyzer {
          public:
            PyObject_HEAD
            SwedishAnalyzer object;
            static PyObject *wrap_Object(const SwedishAnalyzer&);
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
