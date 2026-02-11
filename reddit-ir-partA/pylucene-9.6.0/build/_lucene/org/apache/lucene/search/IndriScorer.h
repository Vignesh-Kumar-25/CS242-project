#ifndef org_apache_lucene_search_IndriScorer_H
#define org_apache_lucene_search_IndriScorer_H

#include "org/apache/lucene/search/Scorer.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class IndriScorer : public ::org::apache::lucene::search::Scorer {
         public:
          enum {
            mid_docID_15aa3d485e96b665,
            mid_getBoost_15cd8574741b1394,
            mid_getMaxScore_cc3c9b7e666e88d5,
            mid_iterator_4d173fc78d956ba9,
            mid_score_15cd8574741b1394,
            mid_smoothingScore_cc3c9b7e666e88d5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndriScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndriScorer(const IndriScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

          jint docID() const;
          jfloat getBoost() const;
          jfloat getMaxScore(jint) const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jfloat score() const;
          jfloat smoothingScore(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(IndriScorer);
        extern PyTypeObject *PY_TYPE(IndriScorer);

        class t_IndriScorer {
        public:
          PyObject_HEAD
          IndriScorer object;
          static PyObject *wrap_Object(const IndriScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
