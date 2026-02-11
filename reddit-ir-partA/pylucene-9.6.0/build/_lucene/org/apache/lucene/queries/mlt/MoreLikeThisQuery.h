#ifndef org_apache_lucene_queries_mlt_MoreLikeThisQuery_H
#define org_apache_lucene_queries_mlt_MoreLikeThisQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace index {
        class IndexReader;
      }
      namespace search {
        class QueryVisitor;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace mlt {

          class MoreLikeThisQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_ee15d8eea8a8860a,
              mid_equals_6084f78e09b6c0c3,
              mid_getAnalyzer_2e5841967e4c0700,
              mid_getLikeText_dc633f13a47328a8,
              mid_getMaxQueryTerms_15aa3d485e96b665,
              mid_getMinDocFreq_15aa3d485e96b665,
              mid_getMinTermFrequency_15aa3d485e96b665,
              mid_getMoreLikeFields_995db70818ff4363,
              mid_getPercentTermsToMatch_15cd8574741b1394,
              mid_getStopWords_9a625d56b67c7390,
              mid_hashCode_15aa3d485e96b665,
              mid_rewrite_7da87bae82c9c483,
              mid_setAnalyzer_cea12a5ff05f6816,
              mid_setLikeText_4a883f7810d2effa,
              mid_setMaxQueryTerms_da425451c8de636b,
              mid_setMinDocFreq_da425451c8de636b,
              mid_setMinTermFrequency_da425451c8de636b,
              mid_setMoreLikeFields_a43828b01cd19e9d,
              mid_setPercentTermsToMatch_354c036766ff84b4,
              mid_setStopWords_d0cb68c4009fd1b5,
              mid_toString_04612c8360f09496,
              mid_visit_fddfa57e96928ffc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MoreLikeThisQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MoreLikeThisQuery(const MoreLikeThisQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            MoreLikeThisQuery(const ::java::lang::String &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
            ::java::lang::String getLikeText() const;
            jint getMaxQueryTerms() const;
            jint getMinDocFreq() const;
            jint getMinTermFrequency() const;
            JArray< ::java::lang::String > getMoreLikeFields() const;
            jfloat getPercentTermsToMatch() const;
            ::java::util::Set getStopWords() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
            void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
            void setLikeText(const ::java::lang::String &) const;
            void setMaxQueryTerms(jint) const;
            void setMinDocFreq(jint) const;
            void setMinTermFrequency(jint) const;
            void setMoreLikeFields(const JArray< ::java::lang::String > &) const;
            void setPercentTermsToMatch(jfloat) const;
            void setStopWords(const ::java::util::Set &) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
          extern PyType_Def PY_TYPE_DEF(MoreLikeThisQuery);
          extern PyTypeObject *PY_TYPE(MoreLikeThisQuery);

          class t_MoreLikeThisQuery {
          public:
            PyObject_HEAD
            MoreLikeThisQuery object;
            static PyObject *wrap_Object(const MoreLikeThisQuery&);
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
