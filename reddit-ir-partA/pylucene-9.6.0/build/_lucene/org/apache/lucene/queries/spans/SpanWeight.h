#ifndef org_apache_lucene_queries_spans_SpanWeight_H
#define org_apache_lucene_queries_spans_SpanWeight_H

#include "org/apache/lucene/search/Weight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Matches;
        class IndexSearcher;
        class Explanation;
        class LeafSimScorer;
      }
      namespace queries {
        namespace spans {
          class SpanQuery;
          class Spans;
          class SpanWeight$Postings;
          class SpanScorer;
        }
      }
      namespace index {
        class TermStates;
        class Term;
        class LeafReaderContext;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanWeight : public ::org::apache::lucene::search::Weight {
           public:
            enum {
              mid_init$_024ff1975dad5625,
              mid_explain_36f8550bdb83cd3a,
              mid_extractTermStates_62c0fdc62292ffbf,
              mid_getSimScorer_440a53c118162f81,
              mid_getSpans_87889f1c7f252c4d,
              mid_matches_ea51d1aa7ef1abf6,
              mid_scorer_635dd7df6b4e51ff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanWeight(jobject obj) : ::org::apache::lucene::search::Weight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanWeight(const SpanWeight& obj) : ::org::apache::lucene::search::Weight(obj) {}

            SpanWeight(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, jfloat);

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
            void extractTermStates(const ::java::util::Map &) const;
            ::org::apache::lucene::search::LeafSimScorer getSimScorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::queries::spans::Spans getSpans(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::queries::spans::SpanWeight$Postings &) const;
            ::org::apache::lucene::search::Matches matches(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
            ::org::apache::lucene::queries::spans::SpanScorer scorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(SpanWeight);
          extern PyTypeObject *PY_TYPE(SpanWeight);

          class t_SpanWeight {
          public:
            PyObject_HEAD
            SpanWeight object;
            static PyObject *wrap_Object(const SpanWeight&);
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
