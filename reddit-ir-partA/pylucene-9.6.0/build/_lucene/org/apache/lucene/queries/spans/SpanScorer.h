#ifndef org_apache_lucene_queries_spans_SpanScorer_H
#define org_apache_lucene_queries_spans_SpanScorer_H

#include "org/apache/lucene/search/Scorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          class Spans;
          class SpanWeight;
        }
      }
      namespace search {
        class TwoPhaseIterator;
        class LeafSimScorer;
        class DocIdSetIterator;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanScorer : public ::org::apache::lucene::search::Scorer {
           public:
            enum {
              mid_init$_50bb215113991d80,
              mid_docID_15aa3d485e96b665,
              mid_getMaxScore_cc3c9b7e666e88d5,
              mid_getSpans_724c9a5c0135474d,
              mid_iterator_4d173fc78d956ba9,
              mid_score_15cd8574741b1394,
              mid_twoPhaseIterator_b714ea10d46684c5,
              mid_setFreqCurrentDoc_3353d9f14bbfd91a,
              mid_scoreCurrentDoc_15cd8574741b1394,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanScorer(const SpanScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

            SpanScorer(const ::org::apache::lucene::queries::spans::SpanWeight &, const ::org::apache::lucene::queries::spans::Spans &, const ::org::apache::lucene::search::LeafSimScorer &);

            jint docID() const;
            jfloat getMaxScore(jint) const;
            ::org::apache::lucene::queries::spans::Spans getSpans() const;
            ::org::apache::lucene::search::DocIdSetIterator iterator() const;
            jfloat score() const;
            ::org::apache::lucene::search::TwoPhaseIterator twoPhaseIterator() const;
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
          extern PyType_Def PY_TYPE_DEF(SpanScorer);
          extern PyTypeObject *PY_TYPE(SpanScorer);

          class t_SpanScorer {
          public:
            PyObject_HEAD
            SpanScorer object;
            static PyObject *wrap_Object(const SpanScorer&);
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
