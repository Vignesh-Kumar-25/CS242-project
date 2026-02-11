#ifndef org_apache_lucene_search_ConstantScoreScorer_H
#define org_apache_lucene_search_ConstantScoreScorer_H

#include "org/apache/lucene/search/Scorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TwoPhaseIterator;
        class ScoreMode;
        class Weight;
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
      namespace search {

        class ConstantScoreScorer : public ::org::apache::lucene::search::Scorer {
         public:
          enum {
            mid_init$_d67c85ed6683287c,
            mid_init$_54e0061feb9de348,
            mid_docID_15aa3d485e96b665,
            mid_getMaxScore_cc3c9b7e666e88d5,
            mid_iterator_4d173fc78d956ba9,
            mid_score_15cd8574741b1394,
            mid_setMinCompetitiveScore_354c036766ff84b4,
            mid_twoPhaseIterator_b714ea10d46684c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConstantScoreScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConstantScoreScorer(const ConstantScoreScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

          ConstantScoreScorer(const ::org::apache::lucene::search::Weight &, jfloat, const ::org::apache::lucene::search::ScoreMode &, const ::org::apache::lucene::search::DocIdSetIterator &);
          ConstantScoreScorer(const ::org::apache::lucene::search::Weight &, jfloat, const ::org::apache::lucene::search::ScoreMode &, const ::org::apache::lucene::search::TwoPhaseIterator &);

          jint docID() const;
          jfloat getMaxScore(jint) const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jfloat score() const;
          void setMinCompetitiveScore(jfloat) const;
          ::org::apache::lucene::search::TwoPhaseIterator twoPhaseIterator() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(ConstantScoreScorer);
        extern PyTypeObject *PY_TYPE(ConstantScoreScorer);

        class t_ConstantScoreScorer {
        public:
          PyObject_HEAD
          ConstantScoreScorer object;
          static PyObject *wrap_Object(const ConstantScoreScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
