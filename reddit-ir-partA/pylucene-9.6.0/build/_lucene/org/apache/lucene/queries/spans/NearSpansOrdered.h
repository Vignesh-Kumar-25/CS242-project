#ifndef org_apache_lucene_queries_spans_NearSpansOrdered_H
#define org_apache_lucene_queries_spans_NearSpansOrdered_H

#include "org/apache/lucene/queries/spans/ConjunctionSpans.h"

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
      namespace queries {
        namespace spans {
          class SpanCollector;
          class Spans;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class NearSpansOrdered : public ::org::apache::lucene::queries::spans::ConjunctionSpans {
           public:
            enum {
              mid_init$_bf1a59770ef43f03,
              mid_collect_3ea492d5abd85e03,
              mid_endPosition_15aa3d485e96b665,
              mid_nextStartPosition_15aa3d485e96b665,
              mid_startPosition_15aa3d485e96b665,
              mid_width_15aa3d485e96b665,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NearSpansOrdered(jobject obj) : ::org::apache::lucene::queries::spans::ConjunctionSpans(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NearSpansOrdered(const NearSpansOrdered& obj) : ::org::apache::lucene::queries::spans::ConjunctionSpans(obj) {}

            NearSpansOrdered(jint, const ::java::util::List &);

            void collect(const ::org::apache::lucene::queries::spans::SpanCollector &) const;
            jint endPosition() const;
            jint nextStartPosition() const;
            jint startPosition() const;
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
          extern PyType_Def PY_TYPE_DEF(NearSpansOrdered);
          extern PyTypeObject *PY_TYPE(NearSpansOrdered);

          class t_NearSpansOrdered {
          public:
            PyObject_HEAD
            NearSpansOrdered object;
            static PyObject *wrap_Object(const NearSpansOrdered&);
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
