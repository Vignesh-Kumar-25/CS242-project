#ifndef org_apache_lucene_queries_mlt_MoreLikeThis_H
#define org_apache_lucene_queries_mlt_MoreLikeThis_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class TFIDFSimilarity;
        }
        class Query;
      }
      namespace analysis {
        class Analyzer;
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
    class Collection;
    class Set;
  }
  namespace io {
    class Reader;
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
      namespace queries {
        namespace mlt {

          class MoreLikeThis : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f48a27e209678b8f,
              mid_init$_2cffedf512340f43,
              mid_describeParams_dc633f13a47328a8,
              mid_getAnalyzer_2e5841967e4c0700,
              mid_getBoostFactor_15cd8574741b1394,
              mid_getFieldNames_995db70818ff4363,
              mid_getMaxDocFreq_15aa3d485e96b665,
              mid_getMaxNumTokensParsed_15aa3d485e96b665,
              mid_getMaxQueryTerms_15aa3d485e96b665,
              mid_getMaxWordLen_15aa3d485e96b665,
              mid_getMinDocFreq_15aa3d485e96b665,
              mid_getMinTermFreq_15aa3d485e96b665,
              mid_getMinWordLen_15aa3d485e96b665,
              mid_getSimilarity_c2f9f791977e26c0,
              mid_getStopWords_9a625d56b67c7390,
              mid_isBoost_ee8b0a5fa521ddac,
              mid_like_644e19b257847bf8,
              mid_like_f47eeca7f076649f,
              mid_like_7f6cc96e0c7d5b1e,
              mid_retrieveInterestingTerms_902044642a8b8f7e,
              mid_retrieveInterestingTerms_24f0d68baaaa70a6,
              mid_setAnalyzer_cea12a5ff05f6816,
              mid_setBoost_4f96af910856b303,
              mid_setBoostFactor_354c036766ff84b4,
              mid_setFieldNames_a43828b01cd19e9d,
              mid_setMaxDocFreq_da425451c8de636b,
              mid_setMaxDocFreqPct_da425451c8de636b,
              mid_setMaxNumTokensParsed_da425451c8de636b,
              mid_setMaxQueryTerms_da425451c8de636b,
              mid_setMaxWordLen_da425451c8de636b,
              mid_setMinDocFreq_da425451c8de636b,
              mid_setMinTermFreq_da425451c8de636b,
              mid_setMinWordLen_da425451c8de636b,
              mid_setSimilarity_5cf97caa8bf525f8,
              mid_setStopWords_d0cb68c4009fd1b5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MoreLikeThis(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MoreLikeThis(const MoreLikeThis& obj) : ::java::lang::Object(obj) {}

            static jboolean DEFAULT_BOOST;
            static JArray< ::java::lang::String > *DEFAULT_FIELD_NAMES;
            static jint DEFAULT_MAX_DOC_FREQ;
            static jint DEFAULT_MAX_NUM_TOKENS_PARSED;
            static jint DEFAULT_MAX_QUERY_TERMS;
            static jint DEFAULT_MAX_WORD_LENGTH;
            static jint DEFAULT_MIN_DOC_FREQ;
            static jint DEFAULT_MIN_TERM_FREQ;
            static jint DEFAULT_MIN_WORD_LENGTH;
            static ::java::util::Set *DEFAULT_STOP_WORDS;

            MoreLikeThis(const ::org::apache::lucene::index::IndexReader &);
            MoreLikeThis(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::similarities::TFIDFSimilarity &);

            ::java::lang::String describeParams() const;
            ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
            jfloat getBoostFactor() const;
            JArray< ::java::lang::String > getFieldNames() const;
            jint getMaxDocFreq() const;
            jint getMaxNumTokensParsed() const;
            jint getMaxQueryTerms() const;
            jint getMaxWordLen() const;
            jint getMinDocFreq() const;
            jint getMinTermFreq() const;
            jint getMinWordLen() const;
            ::org::apache::lucene::search::similarities::TFIDFSimilarity getSimilarity() const;
            ::java::util::Set getStopWords() const;
            jboolean isBoost() const;
            ::org::apache::lucene::search::Query like(jint) const;
            ::org::apache::lucene::search::Query like(const ::java::util::Map &) const;
            ::org::apache::lucene::search::Query like(const ::java::lang::String &, const JArray< ::java::io::Reader > &) const;
            JArray< ::java::lang::String > retrieveInterestingTerms(jint) const;
            JArray< ::java::lang::String > retrieveInterestingTerms(const ::java::io::Reader &, const ::java::lang::String &) const;
            void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
            void setBoost(jboolean) const;
            void setBoostFactor(jfloat) const;
            void setFieldNames(const JArray< ::java::lang::String > &) const;
            void setMaxDocFreq(jint) const;
            void setMaxDocFreqPct(jint) const;
            void setMaxNumTokensParsed(jint) const;
            void setMaxQueryTerms(jint) const;
            void setMaxWordLen(jint) const;
            void setMinDocFreq(jint) const;
            void setMinTermFreq(jint) const;
            void setMinWordLen(jint) const;
            void setSimilarity(const ::org::apache::lucene::search::similarities::TFIDFSimilarity &) const;
            void setStopWords(const ::java::util::Set &) const;
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
      namespace queries {
        namespace mlt {
          extern PyType_Def PY_TYPE_DEF(MoreLikeThis);
          extern PyTypeObject *PY_TYPE(MoreLikeThis);

          class t_MoreLikeThis {
          public:
            PyObject_HEAD
            MoreLikeThis object;
            static PyObject *wrap_Object(const MoreLikeThis&);
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
