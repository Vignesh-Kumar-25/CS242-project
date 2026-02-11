#ifndef org_apache_lucene_search_IndriDisjunctionScorer_H
#define org_apache_lucene_search_IndriDisjunctionScorer_H

#include "org/apache/lucene/search/IndriScorer.h"

namespace java {
  namespace util {
    class List;
  }
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
        class Scorer;
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

        class IndriDisjunctionScorer : public ::org::apache::lucene::search::IndriScorer {
         public:
          enum {
            mid_docID_15aa3d485e96b665,
            mid_getMaxScore_cc3c9b7e666e88d5,
            mid_getSubMatches_0bc66e960964b70a,
            mid_iterator_4d173fc78d956ba9,
            mid_score_15cd8574741b1394,
            mid_smoothingScore_cc3c9b7e666e88d5,
            mid_smoothingScore_e5112f4b7b5da4ee,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndriDisjunctionScorer(jobject obj) : ::org::apache::lucene::search::IndriScorer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndriDisjunctionScorer(const IndriDisjunctionScorer& obj) : ::org::apache::lucene::search::IndriScorer(obj) {}

          jint docID() const;
          jfloat getMaxScore(jint) const;
          ::java::util::List getSubMatches() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jfloat score() const;
          jfloat smoothingScore(jint) const;
          jfloat smoothingScore(const ::java::util::List &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(IndriDisjunctionScorer);
        extern PyTypeObject *PY_TYPE(IndriDisjunctionScorer);

        class t_IndriDisjunctionScorer {
        public:
          PyObject_HEAD
          IndriDisjunctionScorer object;
          static PyObject *wrap_Object(const IndriDisjunctionScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
