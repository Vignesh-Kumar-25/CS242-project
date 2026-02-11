#ifndef org_apache_lucene_queries_spans_SpanContainingQuery$SpanContainingWeight_H
#define org_apache_lucene_queries_spans_SpanContainingQuery$SpanContainingWeight_H

#include "org/apache/lucene/queries/spans/SpanContainQuery$SpanContainWeight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
      }
      namespace index {
        class TermStates;
        class Term;
        class LeafReaderContext;
      }
      namespace queries {
        namespace spans {
          class Spans;
          class SpanWeight;
          class SpanWeight$Postings;
          class SpanContainingQuery;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
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

          class SpanContainingQuery$SpanContainingWeight : public ::org::apache::lucene::queries::spans::SpanContainQuery$SpanContainWeight {
           public:
            enum {
              mid_init$_02391097c01817fd,
              mid_getSpans_87889f1c7f252c4d,
              mid_isCacheable_7f6d289efb1f533f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanContainingQuery$SpanContainingWeight(jobject obj) : ::org::apache::lucene::queries::spans::SpanContainQuery$SpanContainWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanContainingQuery$SpanContainingWeight(const SpanContainingQuery$SpanContainingWeight& obj) : ::org::apache::lucene::queries::spans::SpanContainQuery$SpanContainWeight(obj) {}

            SpanContainingQuery$SpanContainingWeight(const ::org::apache::lucene::queries::spans::SpanContainingQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, const ::org::apache::lucene::queries::spans::SpanWeight &, const ::org::apache::lucene::queries::spans::SpanWeight &, jfloat);

            ::org::apache::lucene::queries::spans::Spans getSpans(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::queries::spans::SpanWeight$Postings &) const;
            jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanContainingQuery$SpanContainingWeight);
          extern PyTypeObject *PY_TYPE(SpanContainingQuery$SpanContainingWeight);

          class t_SpanContainingQuery$SpanContainingWeight {
          public:
            PyObject_HEAD
            SpanContainingQuery$SpanContainingWeight object;
            static PyObject *wrap_Object(const SpanContainingQuery$SpanContainingWeight&);
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
