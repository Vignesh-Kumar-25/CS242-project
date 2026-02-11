#ifndef org_apache_lucene_search_FilterScorer_H
#define org_apache_lucene_search_FilterScorer_H

#include "org/apache/lucene/search/Scorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TwoPhaseIterator;
        class Weight;
        class DocIdSetIterator;
      }
      namespace util {
        class Unwrappable;
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

        class FilterScorer : public ::org::apache::lucene::search::Scorer {
         public:
          enum {
            mid_init$_b253c44e7d6665e1,
            mid_init$_17b1e5de57c2440d,
            mid_docID_15aa3d485e96b665,
            mid_iterator_4d173fc78d956ba9,
            mid_score_15cd8574741b1394,
            mid_twoPhaseIterator_b714ea10d46684c5,
            mid_unwrap_50e01765254391c2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterScorer(const FilterScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

          FilterScorer(const ::org::apache::lucene::search::Scorer &);
          FilterScorer(const ::org::apache::lucene::search::Scorer &, const ::org::apache::lucene::search::Weight &);

          jint docID() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jfloat score() const;
          ::org::apache::lucene::search::TwoPhaseIterator twoPhaseIterator() const;
          ::org::apache::lucene::search::Scorer unwrap() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterScorer);
        extern PyTypeObject *PY_TYPE(FilterScorer);

        class t_FilterScorer {
        public:
          PyObject_HEAD
          FilterScorer object;
          static PyObject *wrap_Object(const FilterScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
