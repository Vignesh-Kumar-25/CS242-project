#ifndef org_apache_lucene_queries_spans_ConjunctionSpans_H
#define org_apache_lucene_queries_spans_ConjunctionSpans_H

#include "org/apache/lucene/queries/spans/Spans.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TwoPhaseIterator;
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

          class ConjunctionSpans : public ::org::apache::lucene::queries::spans::Spans {
           public:
            enum {
              mid_advance_58b165b57740feff,
              mid_asTwoPhaseIterator_b714ea10d46684c5,
              mid_cost_058f5911dcf5d8a4,
              mid_docID_15aa3d485e96b665,
              mid_getSubSpans_ca8e701ab0488044,
              mid_nextDoc_15aa3d485e96b665,
              mid_positionsCost_15cd8574741b1394,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConjunctionSpans(jobject obj) : ::org::apache::lucene::queries::spans::Spans(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConjunctionSpans(const ConjunctionSpans& obj) : ::org::apache::lucene::queries::spans::Spans(obj) {}

            jint advance(jint) const;
            ::org::apache::lucene::search::TwoPhaseIterator asTwoPhaseIterator() const;
            jlong cost() const;
            jint docID() const;
            JArray< ::org::apache::lucene::queries::spans::Spans > getSubSpans() const;
            jint nextDoc() const;
            jfloat positionsCost() const;
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
          extern PyType_Def PY_TYPE_DEF(ConjunctionSpans);
          extern PyTypeObject *PY_TYPE(ConjunctionSpans);

          class t_ConjunctionSpans {
          public:
            PyObject_HEAD
            ConjunctionSpans object;
            static PyObject *wrap_Object(const ConjunctionSpans&);
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
