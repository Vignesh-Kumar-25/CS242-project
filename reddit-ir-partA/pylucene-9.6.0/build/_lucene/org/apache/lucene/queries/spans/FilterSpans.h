#ifndef org_apache_lucene_queries_spans_FilterSpans_H
#define org_apache_lucene_queries_spans_FilterSpans_H

#include "org/apache/lucene/queries/spans/Spans.h"

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

          class FilterSpans : public ::org::apache::lucene::queries::spans::Spans {
           public:
            enum {
              mid_advance_58b165b57740feff,
              mid_asTwoPhaseIterator_b714ea10d46684c5,
              mid_collect_3ea492d5abd85e03,
              mid_cost_058f5911dcf5d8a4,
              mid_docID_15aa3d485e96b665,
              mid_endPosition_15aa3d485e96b665,
              mid_nextDoc_15aa3d485e96b665,
              mid_nextStartPosition_15aa3d485e96b665,
              mid_positionsCost_15cd8574741b1394,
              mid_startPosition_15aa3d485e96b665,
              mid_toString_dc633f13a47328a8,
              mid_width_15aa3d485e96b665,
              mid_accept_cf767f52747a2417,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FilterSpans(jobject obj) : ::org::apache::lucene::queries::spans::Spans(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FilterSpans(const FilterSpans& obj) : ::org::apache::lucene::queries::spans::Spans(obj) {}

            jint advance(jint) const;
            ::org::apache::lucene::search::TwoPhaseIterator asTwoPhaseIterator() const;
            void collect(const ::org::apache::lucene::queries::spans::SpanCollector &) const;
            jlong cost() const;
            jint docID() const;
            jint endPosition() const;
            jint nextDoc() const;
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
          extern PyType_Def PY_TYPE_DEF(FilterSpans);
          extern PyTypeObject *PY_TYPE(FilterSpans);

          class t_FilterSpans {
          public:
            PyObject_HEAD
            FilterSpans object;
            static PyObject *wrap_Object(const FilterSpans&);
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
