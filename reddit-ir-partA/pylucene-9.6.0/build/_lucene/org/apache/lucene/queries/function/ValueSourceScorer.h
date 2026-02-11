#ifndef org_apache_lucene_queries_function_ValueSourceScorer_H
#define org_apache_lucene_queries_function_ValueSourceScorer_H

#include "org/apache/lucene/search/Scorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TwoPhaseIterator;
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
        namespace function {

          class ValueSourceScorer : public ::org::apache::lucene::search::Scorer {
           public:
            enum {
              mid_docID_15aa3d485e96b665,
              mid_getMaxScore_cc3c9b7e666e88d5,
              mid_iterator_4d173fc78d956ba9,
              mid_matches_92eccba87b045bbc,
              mid_score_15cd8574741b1394,
              mid_twoPhaseIterator_b714ea10d46684c5,
              mid_matchCost_15cd8574741b1394,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ValueSourceScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ValueSourceScorer(const ValueSourceScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

            jint docID() const;
            jfloat getMaxScore(jint) const;
            ::org::apache::lucene::search::DocIdSetIterator iterator() const;
            jboolean matches(jint) const;
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
        namespace function {
          extern PyType_Def PY_TYPE_DEF(ValueSourceScorer);
          extern PyTypeObject *PY_TYPE(ValueSourceScorer);

          class t_ValueSourceScorer {
          public:
            PyObject_HEAD
            ValueSourceScorer object;
            static PyObject *wrap_Object(const ValueSourceScorer&);
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
