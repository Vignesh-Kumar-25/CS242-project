#ifndef org_apache_lucene_search_uhighlight_UnifiedHighlighter$Builder_H
#define org_apache_lucene_search_uhighlight_UnifiedHighlighter$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        namespace uhighlight {
          class UnifiedHighlighter$Builder;
          class UnifiedHighlighter;
          class PassageFormatter;
          class PassageScorer;
          class UnifiedHighlighter$HighlightFlag;
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
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace text {
    class BreakIterator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class UnifiedHighlighter$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_571a407c22d09814,
              mid_build_18476f046a75f6a8,
              mid_getFlags_9a625d56b67c7390,
              mid_getIndexAnalyzer_2e5841967e4c0700,
              mid_getIndexSearcher_b11d3688f1db7801,
              mid_withBreakIterator_be1a756d5cea6075,
              mid_withCacheFieldValCharsThreshold_9a0a950daa9feb82,
              mid_withFieldMatcher_ff463e333bc1b011,
              mid_withFlags_dd01ea1ba98dbdef,
              mid_withFormatter_d0dac5a2b770c258,
              mid_withHandleMultiTermQuery_91d99543e4dcc560,
              mid_withHighlightPhrasesStrictly_91d99543e4dcc560,
              mid_withMaxLength_9a0a950daa9feb82,
              mid_withMaxNoHighlightPassages_9a0a950daa9feb82,
              mid_withPassageRelevancyOverSpeed_91d99543e4dcc560,
              mid_withScorer_c134e99e218671f0,
              mid_withWeightMatches_91d99543e4dcc560,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UnifiedHighlighter$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UnifiedHighlighter$Builder(const UnifiedHighlighter$Builder& obj) : ::java::lang::Object(obj) {}

            UnifiedHighlighter$Builder(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::analysis::Analyzer &);

            ::org::apache::lucene::search::uhighlight::UnifiedHighlighter build() const;
            ::java::util::Set getFlags() const;
            ::org::apache::lucene::analysis::Analyzer getIndexAnalyzer() const;
            ::org::apache::lucene::search::IndexSearcher getIndexSearcher() const;
            UnifiedHighlighter$Builder withBreakIterator(const ::java::util::function::Supplier &) const;
            UnifiedHighlighter$Builder withCacheFieldValCharsThreshold(jint) const;
            UnifiedHighlighter$Builder withFieldMatcher(const ::java::util::function::Predicate &) const;
            UnifiedHighlighter$Builder withFlags(const ::java::util::Set &) const;
            UnifiedHighlighter$Builder withFormatter(const ::org::apache::lucene::search::uhighlight::PassageFormatter &) const;
            UnifiedHighlighter$Builder withHandleMultiTermQuery(jboolean) const;
            UnifiedHighlighter$Builder withHighlightPhrasesStrictly(jboolean) const;
            UnifiedHighlighter$Builder withMaxLength(jint) const;
            UnifiedHighlighter$Builder withMaxNoHighlightPassages(jint) const;
            UnifiedHighlighter$Builder withPassageRelevancyOverSpeed(jboolean) const;
            UnifiedHighlighter$Builder withScorer(const ::org::apache::lucene::search::uhighlight::PassageScorer &) const;
            UnifiedHighlighter$Builder withWeightMatches(jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(UnifiedHighlighter$Builder);
          extern PyTypeObject *PY_TYPE(UnifiedHighlighter$Builder);

          class t_UnifiedHighlighter$Builder {
          public:
            PyObject_HEAD
            UnifiedHighlighter$Builder object;
            static PyObject *wrap_Object(const UnifiedHighlighter$Builder&);
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
