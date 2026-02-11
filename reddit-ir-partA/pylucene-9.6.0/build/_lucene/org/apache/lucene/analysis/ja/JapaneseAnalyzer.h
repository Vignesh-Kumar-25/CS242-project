#ifndef org_apache_lucene_analysis_ja_JapaneseAnalyzer_H
#define org_apache_lucene_analysis_ja_JapaneseAnalyzer_H

#include "org/apache/lucene/analysis/StopwordAnalyzerBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class UserDictionary;
          }
          class JapaneseTokenizer$Mode;
        }
        class CharArraySet;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {

          class JapaneseAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_08d45019ee82865c,
              mid_getDefaultStopSet_cbabc13c6309e190,
              mid_getDefaultStopTags_9a625d56b67c7390,
              mid_createComponents_ecc168e883a13e3a,
              mid_initReader_40892a63dfcc19ab,
              mid_initReaderForNormalization_40892a63dfcc19ab,
              mid_normalize_36f7d93b7e95e69a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseAnalyzer(const JapaneseAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            JapaneseAnalyzer();
            JapaneseAnalyzer(const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &, const ::org::apache::lucene::analysis::CharArraySet &, const ::java::util::Set &);

            static ::org::apache::lucene::analysis::CharArraySet getDefaultStopSet();
            static ::java::util::Set getDefaultStopTags();
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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseAnalyzer);
          extern PyTypeObject *PY_TYPE(JapaneseAnalyzer);

          class t_JapaneseAnalyzer {
          public:
            PyObject_HEAD
            JapaneseAnalyzer object;
            static PyObject *wrap_Object(const JapaneseAnalyzer&);
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
