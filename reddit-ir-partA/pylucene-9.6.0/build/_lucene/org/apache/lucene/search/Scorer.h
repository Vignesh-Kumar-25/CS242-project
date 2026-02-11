#ifndef org_apache_lucene_search_Scorer_H
#define org_apache_lucene_search_Scorer_H

#include "org/apache/lucene/search/Scorable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TwoPhaseIterator;
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

        class Scorer : public ::org::apache::lucene::search::Scorable {
         public:
          enum {
            mid_advanceShallow_58b165b57740feff,
            mid_getMaxScore_cc3c9b7e666e88d5,
            mid_getWeight_9b02c1072ecc5bbb,
            mid_iterator_4d173fc78d956ba9,
            mid_twoPhaseIterator_b714ea10d46684c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Scorer(jobject obj) : ::org::apache::lucene::search::Scorable(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Scorer(const Scorer& obj) : ::org::apache::lucene::search::Scorable(obj) {}

          jint advanceShallow(jint) const;
          jfloat getMaxScore(jint) const;
          ::org::apache::lucene::search::Weight getWeight() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
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
        extern PyType_Def PY_TYPE_DEF(Scorer);
        extern PyTypeObject *PY_TYPE(Scorer);

        class t_Scorer {
        public:
          PyObject_HEAD
          Scorer object;
          static PyObject *wrap_Object(const Scorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
