#ifndef org_apache_lucene_analysis_classic_ClassicAnalyzer_H
#define org_apache_lucene_analysis_classic_ClassicAnalyzer_H

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
  namespace io {
    class Reader;
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace classic {

          class ClassicAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_d4d7809eb73d632e,
              mid_init$_48be8a5844a4c6e0,
              mid_getMaxTokenLength_15aa3d485e96b665,
              mid_setMaxTokenLength_da425451c8de636b,
              mid_createComponents_ecc168e883a13e3a,
              mid_normalize_36f7d93b7e95e69a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ClassicAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ClassicAnalyzer(const ClassicAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            static jint DEFAULT_MAX_TOKEN_LENGTH;
            static ::org::apache::lucene::analysis::CharArraySet *STOP_WORDS_SET;

            ClassicAnalyzer();
            ClassicAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            ClassicAnalyzer(const ::java::io::Reader &);

            jint getMaxTokenLength() const;
            void setMaxTokenLength(jint) const;
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
        namespace classic {
          extern PyType_Def PY_TYPE_DEF(ClassicAnalyzer);
          extern PyTypeObject *PY_TYPE(ClassicAnalyzer);

          class t_ClassicAnalyzer {
          public:
            PyObject_HEAD
            ClassicAnalyzer object;
            static PyObject *wrap_Object(const ClassicAnalyzer&);
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
