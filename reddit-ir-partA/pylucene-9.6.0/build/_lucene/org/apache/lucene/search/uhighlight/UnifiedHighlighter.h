#ifndef org_apache_lucene_search_uhighlight_UnifiedHighlighter_H
#define org_apache_lucene_search_uhighlight_UnifiedHighlighter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class IndexSearcher;
        class TopDocs;
        namespace uhighlight {
          class UnifiedHighlighter$Builder;
          class PassageScorer;
          class PassageFormatter;
        }
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class Supplier;
      class Predicate;
    }
    class Map;
  }
  namespace text {
    class BreakIterator;
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
        namespace uhighlight {

          class UnifiedHighlighter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_fc8f71d9a5cc9cb8,
              mid_init$_571a407c22d09814,
              mid_builder_4feb7410b1781670,
              mid_builderWithoutSearcher_d32e50e2dedf581d,
              mid_getCacheFieldValCharsThreshold_15aa3d485e96b665,
              mid_getIndexAnalyzer_2e5841967e4c0700,
              mid_getIndexSearcher_b11d3688f1db7801,
              mid_getMaxLength_15aa3d485e96b665,
              mid_highlight_925ea9dfd84c15bd,
              mid_highlight_9f02726c75ee5e62,
              mid_highlightFields_8f73f5010e43533f,
              mid_highlightFields_2110aa5abfd1f445,
              mid_highlightFields_15d8714842de0b99,
              mid_highlightWithoutSearcher_258ec4a5c0d979c0,
              mid_setBreakIterator_cfafd7139439f7ca,
              mid_setCacheFieldValCharsThreshold_da425451c8de636b,
              mid_setFieldMatcher_af98e98519cb05d8,
              mid_setFormatter_aa3ad9c0008c1ed7,
              mid_setHandleMultiTermQuery_4f96af910856b303,
              mid_setHighlightPhrasesStrictly_4f96af910856b303,
              mid_setMaxLength_da425451c8de636b,
              mid_setMaxNoHighlightPassages_da425451c8de636b,
              mid_setPassageRelevancyOverSpeed_4f96af910856b303,
              mid_setScorer_4c088b9dd11d18f5,
              mid_setWeightMatches_4f96af910856b303,
              mid_getScorer_2c5d357060011924,
              mid_getFieldInfo_20f875c4c9ece1cd,
              mid_getAutomata_bcf7439da5841b1b,
              mid_getOffsetSource_9d900b862fb70d84,
              mid_getPhraseHelper_2411c23121ea1913,
              mid_getFieldMatcher_48e9ed863ed742d8,
              mid_hasUnrecognizedQuery_73dbd7b24ccef859,
              mid_shouldHandleMultiTermQuery_77e0b5c3eb1962ba,
              mid_shouldHighlightPhrasesStrictly_77e0b5c3eb1962ba,
              mid_shouldPreferPassageRelevancyOverSpeed_77e0b5c3eb1962ba,
              mid_extractTerms_7a8cd9e94329b0eb,
              mid_evaluateFlags_8a70fd7cfe604793,
              mid_evaluateFlags_aab89febd51b2e43,
              mid_evaluateFlags_0f7e85fc39a58bc6,
              mid_getBreakIterator_54aab09446fedf5e,
              mid_getMaxNoHighlightPassages_08c5dabd7f8f1590,
              mid_highlightFieldsAsObjects_2110aa5abfd1f445,
              mid_getFieldHighlighter_ff9214113779449e,
              mid_newFieldHighlighter_2ab44f20f0f5b343,
              mid_getHighlightComponents_d7c9e79ccb7838a8,
              mid_filterExtractedTerms_8dc89d421ee7f3f1,
              mid_getOptimizedOffsetSource_538c60b740ac39c9,
              mid_getOffsetStrategy_99413f103223a3ce,
              mid_requiresRewrite_9bd1e6cc6aa99eec,
              mid_preSpanQueryRewrite_8835853d6fc590ba,
              mid_loadFieldValues_27557cffaf44e411,
              mid_newLimitedStoredFieldsVisitor_4ff86356a595344e,
              mid_getFormatter_41746d4de122cd95,
              mid_getFlags_11f63dad356ab0e0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UnifiedHighlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UnifiedHighlighter(const UnifiedHighlighter& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_CACHE_CHARS_THRESHOLD;
            static jint DEFAULT_MAX_LENGTH;

            UnifiedHighlighter(const ::org::apache::lucene::search::uhighlight::UnifiedHighlighter$Builder &);
            UnifiedHighlighter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::analysis::Analyzer &);

            static ::org::apache::lucene::search::uhighlight::UnifiedHighlighter$Builder builder(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::search::uhighlight::UnifiedHighlighter$Builder builderWithoutSearcher(const ::org::apache::lucene::analysis::Analyzer &);
            jint getCacheFieldValCharsThreshold() const;
            ::org::apache::lucene::analysis::Analyzer getIndexAnalyzer() const;
            ::org::apache::lucene::search::IndexSearcher getIndexSearcher() const;
            jint getMaxLength() const;
            JArray< ::java::lang::String > highlight(const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::TopDocs &) const;
            JArray< ::java::lang::String > highlight(const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::TopDocs &, jint) const;
            ::java::util::Map highlightFields(const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::TopDocs &) const;
            ::java::util::Map highlightFields(const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::Query &, const JArray< jint > &, const JArray< jint > &) const;
            ::java::util::Map highlightFields(const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::TopDocs &, const JArray< jint > &) const;
            ::java::lang::Object highlightWithoutSearcher(const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::java::lang::String &, jint) const;
            void setBreakIterator(const ::java::util::function::Supplier &) const;
            void setCacheFieldValCharsThreshold(jint) const;
            void setFieldMatcher(const ::java::util::function::Predicate &) const;
            void setFormatter(const ::org::apache::lucene::search::uhighlight::PassageFormatter &) const;
            void setHandleMultiTermQuery(jboolean) const;
            void setHighlightPhrasesStrictly(jboolean) const;
            void setMaxLength(jint) const;
            void setMaxNoHighlightPassages(jint) const;
            void setPassageRelevancyOverSpeed(jboolean) const;
            void setScorer(const ::org::apache::lucene::search::uhighlight::PassageScorer &) const;
            void setWeightMatches(jboolean) const;
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
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(UnifiedHighlighter);
          extern PyTypeObject *PY_TYPE(UnifiedHighlighter);

          class t_UnifiedHighlighter {
          public:
            PyObject_HEAD
            UnifiedHighlighter object;
            static PyObject *wrap_Object(const UnifiedHighlighter&);
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
