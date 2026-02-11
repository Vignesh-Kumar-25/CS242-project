#ifndef org_apache_lucene_queries_spans_TermSpans_H
#define org_apache_lucene_queries_spans_TermSpans_H

#include "org/apache/lucene/queries/spans/Spans.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          class SpanCollector;
        }
      }
      namespace index {
        class Term;
        class PostingsEnum;
      }
      namespace search {
        class LeafSimScorer;
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

          class TermSpans : public ::org::apache::lucene::queries::spans::Spans {
           public:
            enum {
              mid_init$_134c1b112c644fa3,
              mid_advance_58b165b57740feff,
              mid_collect_3ea492d5abd85e03,
              mid_cost_058f5911dcf5d8a4,
              mid_docID_15aa3d485e96b665,
              mid_endPosition_15aa3d485e96b665,
              mid_getPostings_8fa3c095726b079c,
              mid_nextDoc_15aa3d485e96b665,
              mid_nextStartPosition_15aa3d485e96b665,
              mid_positionsCost_15cd8574741b1394,
              mid_startPosition_15aa3d485e96b665,
              mid_toString_dc633f13a47328a8,
              mid_width_15aa3d485e96b665,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermSpans(jobject obj) : ::org::apache::lucene::queries::spans::Spans(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermSpans(const TermSpans& obj) : ::org::apache::lucene::queries::spans::Spans(obj) {}

            TermSpans(const ::org::apache::lucene::search::LeafSimScorer &, const ::org::apache::lucene::index::PostingsEnum &, const ::org::apache::lucene::index::Term &, jfloat);

            jint advance(jint) const;
            void collect(const ::org::apache::lucene::queries::spans::SpanCollector &) const;
            jlong cost() const;
            jint docID() const;
            jint endPosition() const;
            ::org::apache::lucene::index::PostingsEnum getPostings() const;
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
          extern PyType_Def PY_TYPE_DEF(TermSpans);
          extern PyTypeObject *PY_TYPE(TermSpans);

          class t_TermSpans {
          public:
            PyObject_HEAD
            TermSpans object;
            static PyObject *wrap_Object(const TermSpans&);
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
