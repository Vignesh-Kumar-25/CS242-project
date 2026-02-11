#ifndef org_apache_lucene_queries_spans_Spans_H
#define org_apache_lucene_queries_spans_Spans_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          class SpanCollector;
        }
      }
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class Spans : public ::org::apache::lucene::search::DocIdSetIterator {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_asTwoPhaseIterator_b714ea10d46684c5,
              mid_collect_3ea492d5abd85e03,
              mid_endPosition_15aa3d485e96b665,
              mid_nextStartPosition_15aa3d485e96b665,
              mid_positionsCost_15cd8574741b1394,
              mid_startPosition_15aa3d485e96b665,
              mid_toString_dc633f13a47328a8,
              mid_width_15aa3d485e96b665,
              mid_doStartCurrentDoc_3353d9f14bbfd91a,
              mid_doCurrentSpans_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Spans(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Spans(const Spans& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

            static jint NO_MORE_POSITIONS;

            Spans();

            ::org::apache::lucene::search::TwoPhaseIterator asTwoPhaseIterator() const;
            void collect(const ::org::apache::lucene::queries::spans::SpanCollector &) const;
            jint endPosition() const;
            jint nextStartPosition() const;
            jfloat positionsCost() const;
            jint startPosition() const;
            ::java::lang::String toString() const;
            jint width() const;
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
          extern PyType_Def PY_TYPE_DEF(Spans);
          extern PyTypeObject *PY_TYPE(Spans);

          class t_Spans {
          public:
            PyObject_HEAD
            Spans object;
            static PyObject *wrap_Object(const Spans&);
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
