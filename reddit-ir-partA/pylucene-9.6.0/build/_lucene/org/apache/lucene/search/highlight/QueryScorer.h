#ifndef org_apache_lucene_search_highlight_QueryScorer_H
#define org_apache_lucene_search_highlight_QueryScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace highlight {
          class Scorer;
          class WeightedSpanTerm;
          class TextFragment;
        }
      }
      namespace analysis {
        class TokenStream;
      }
      namespace index {
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
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
      namespace search {
        namespace highlight {

          class QueryScorer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_840beebfc6e756d2,
              mid_init$_60638ee06ec0416b,
              mid_init$_93b96c8b14ec99bd,
              mid_init$_57e410ed25c8930f,
              mid_init$_d4d7def7ff622422,
              mid_init$_3efe87a2561e6eac,
              mid_getFragmentScore_15cd8574741b1394,
              mid_getMaxTermWeight_15cd8574741b1394,
              mid_getTokenScore_15cd8574741b1394,
              mid_getWeightedSpanTerm_e95981466dc4a2a6,
              mid_init_879ac71ff4d4fee2,
              mid_isExpandMultiTermQuery_ee8b0a5fa521ddac,
              mid_isUsePayloads_ee8b0a5fa521ddac,
              mid_setExpandMultiTermQuery_4f96af910856b303,
              mid_setMaxDocCharsToAnalyze_da425451c8de636b,
              mid_setUsePayloads_4f96af910856b303,
              mid_setWrapIfNotCachingTokenFilter_4f96af910856b303,
              mid_startFragment_9d6a693cd43dcd24,
              mid_newTermExtractor_cffb2c05289e550c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryScorer(const QueryScorer& obj) : ::java::lang::Object(obj) {}

            QueryScorer(const JArray< ::org::apache::lucene::search::highlight::WeightedSpanTerm > &);
            QueryScorer(const ::org::apache::lucene::search::Query &);
            QueryScorer(const ::org::apache::lucene::search::Query &, const ::java::lang::String &);
            QueryScorer(const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const ::java::lang::String &);
            QueryScorer(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
            QueryScorer(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::java::lang::String &);

            jfloat getFragmentScore() const;
            jfloat getMaxTermWeight() const;
            jfloat getTokenScore() const;
            ::org::apache::lucene::search::highlight::WeightedSpanTerm getWeightedSpanTerm(const ::java::lang::String &) const;
            ::org::apache::lucene::analysis::TokenStream init(const ::org::apache::lucene::analysis::TokenStream &) const;
            jboolean isExpandMultiTermQuery() const;
            jboolean isUsePayloads() const;
            void setExpandMultiTermQuery(jboolean) const;
            void setMaxDocCharsToAnalyze(jint) const;
            void setUsePayloads(jboolean) const;
            void setWrapIfNotCachingTokenFilter(jboolean) const;
            void startFragment(const ::org::apache::lucene::search::highlight::TextFragment &) const;
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
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(QueryScorer);
          extern PyTypeObject *PY_TYPE(QueryScorer);

          class t_QueryScorer {
          public:
            PyObject_HEAD
            QueryScorer object;
            static PyObject *wrap_Object(const QueryScorer&);
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
