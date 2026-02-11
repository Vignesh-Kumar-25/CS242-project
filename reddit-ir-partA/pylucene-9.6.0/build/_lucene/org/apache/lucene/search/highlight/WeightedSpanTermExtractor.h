#ifndef org_apache_lucene_search_highlight_WeightedSpanTermExtractor_H
#define org_apache_lucene_search_highlight_WeightedSpanTermExtractor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace highlight {
          class WeightedSpanTerm;
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
  namespace util {
    class Map;
  }
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

          class WeightedSpanTermExtractor : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_4a883f7810d2effa,
              mid_getExpandMultiTermQuery_ee8b0a5fa521ddac,
              mid_getTokenStream_5e6c3f11ccc6eb07,
              mid_getWeightedSpanTerms_8ecbe50534350ae3,
              mid_getWeightedSpanTerms_d25eb74cfc231003,
              mid_getWeightedSpanTermsWithScores_16fd8c119d43f5bc,
              mid_isCachedTokenStream_ee8b0a5fa521ddac,
              mid_isUsePayloads_ee8b0a5fa521ddac,
              mid_setExpandMultiTermQuery_4f96af910856b303,
              mid_setUsePayloads_4f96af910856b303,
              mid_setWrapIfNotCachingTokenFilter_4f96af910856b303,
              mid_extract_a07854a25c145944,
              mid_isQueryUnsupported_b192f4d73bfa9825,
              mid_extractWeightedTerms_a1e34a3ed8ae8e85,
              mid_extractWeightedSpanTerms_461991c8f4d32ff7,
              mid_mustRewriteQuery_13857ac583abc91b,
              mid_collectSpanQueryFields_9f722afd3aaaeff4,
              mid_extractUnknownQuery_b876f236955ed9fa,
              mid_fieldNameComparator_77e0b5c3eb1962ba,
              mid_getLeafContext_7325a9b9ba995f59,
              mid_setMaxDocCharsToAnalyze_da425451c8de636b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WeightedSpanTermExtractor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WeightedSpanTermExtractor(const WeightedSpanTermExtractor& obj) : ::java::lang::Object(obj) {}

            WeightedSpanTermExtractor();
            WeightedSpanTermExtractor(const ::java::lang::String &);

            jboolean getExpandMultiTermQuery() const;
            ::org::apache::lucene::analysis::TokenStream getTokenStream() const;
            ::java::util::Map getWeightedSpanTerms(const ::org::apache::lucene::search::Query &, jfloat, const ::org::apache::lucene::analysis::TokenStream &) const;
            ::java::util::Map getWeightedSpanTerms(const ::org::apache::lucene::search::Query &, jfloat, const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &) const;
            ::java::util::Map getWeightedSpanTermsWithScores(const ::org::apache::lucene::search::Query &, jfloat, const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, const ::org::apache::lucene::index::IndexReader &) const;
            jboolean isCachedTokenStream() const;
            jboolean isUsePayloads() const;
            void setExpandMultiTermQuery(jboolean) const;
            void setUsePayloads(jboolean) const;
            void setWrapIfNotCachingTokenFilter(jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(WeightedSpanTermExtractor);
          extern PyTypeObject *PY_TYPE(WeightedSpanTermExtractor);

          class t_WeightedSpanTermExtractor {
          public:
            PyObject_HEAD
            WeightedSpanTermExtractor object;
            static PyObject *wrap_Object(const WeightedSpanTermExtractor&);
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
