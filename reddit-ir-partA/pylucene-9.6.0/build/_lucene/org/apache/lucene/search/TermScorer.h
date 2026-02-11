#ifndef org_apache_lucene_search_TermScorer_H
#define org_apache_lucene_search_TermScorer_H

#include "org/apache/lucene/search/Scorer.h"

namespace java {
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
      namespace search {
        class LeafSimScorer;
        class Weight;
        class DocIdSetIterator;
      }
      namespace index {
        class PostingsEnum;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TermScorer : public ::org::apache::lucene::search::Scorer {
         public:
          enum {
            mid_init$_6bbef9e7c0ea097b,
            mid_advanceShallow_58b165b57740feff,
            mid_docID_15aa3d485e96b665,
            mid_freq_15aa3d485e96b665,
            mid_getMaxScore_cc3c9b7e666e88d5,
            mid_iterator_4d173fc78d956ba9,
            mid_score_15cd8574741b1394,
            mid_setMinCompetitiveScore_354c036766ff84b4,
            mid_smoothingScore_cc3c9b7e666e88d5,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermScorer(const TermScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

          TermScorer(const ::org::apache::lucene::search::Weight &, const ::org::apache::lucene::index::PostingsEnum &, const ::org::apache::lucene::search::LeafSimScorer &);

          jint advanceShallow(jint) const;
          jint docID() const;
          jint freq() const;
          jfloat getMaxScore(jint) const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jfloat score() const;
          void setMinCompetitiveScore(jfloat) const;
          jfloat smoothingScore(jint) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(TermScorer);
        extern PyTypeObject *PY_TYPE(TermScorer);

        class t_TermScorer {
        public:
          PyObject_HEAD
          TermScorer object;
          static PyObject *wrap_Object(const TermScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
