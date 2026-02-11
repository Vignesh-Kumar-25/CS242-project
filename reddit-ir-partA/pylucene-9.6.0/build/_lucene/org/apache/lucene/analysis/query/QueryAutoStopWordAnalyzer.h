#ifndef org_apache_lucene_analysis_query_QueryAutoStopWordAnalyzer_H
#define org_apache_lucene_analysis_query_QueryAutoStopWordAnalyzer_H

#include "org/apache/lucene/analysis/AnalyzerWrapper.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace index {
        class Term;
        class IndexReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace query {

          class QueryAutoStopWordAnalyzer : public ::org::apache::lucene::analysis::AnalyzerWrapper {
           public:
            enum {
              mid_init$_1fc55bd947f7d873,
              mid_init$_633521dbfad9829b,
              mid_init$_6e28eb42d1f0bc2f,
              mid_init$_70a42f566e824d4f,
              mid_init$_7051b863b0d635bf,
              mid_getStopWords_c5952cebe9400945,
              mid_getStopWords_5dfe22b47e50fb54,
              mid_getWrappedAnalyzer_50c72b41f1379565,
              mid_wrapComponents_92412671c044cea7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryAutoStopWordAnalyzer(jobject obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryAutoStopWordAnalyzer(const QueryAutoStopWordAnalyzer& obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {}

            static jfloat defaultMaxDocFreqPercent;

            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &);
            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &, jfloat);
            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &, jint);
            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &, const ::java::util::Collection &, jfloat);
            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &, const ::java::util::Collection &, jint);

            JArray< ::org::apache::lucene::index::Term > getStopWords() const;
            JArray< ::java::lang::String > getStopWords(const ::java::lang::String &) const;
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
        namespace query {
          extern PyType_Def PY_TYPE_DEF(QueryAutoStopWordAnalyzer);
          extern PyTypeObject *PY_TYPE(QueryAutoStopWordAnalyzer);

          class t_QueryAutoStopWordAnalyzer {
          public:
            PyObject_HEAD
            QueryAutoStopWordAnalyzer object;
            static PyObject *wrap_Object(const QueryAutoStopWordAnalyzer&);
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
