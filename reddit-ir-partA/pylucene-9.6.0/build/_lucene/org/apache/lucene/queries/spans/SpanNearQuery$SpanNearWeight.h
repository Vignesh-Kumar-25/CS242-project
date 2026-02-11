#ifndef org_apache_lucene_queries_spans_SpanNearQuery$SpanNearWeight_H
#define org_apache_lucene_queries_spans_SpanNearQuery$SpanNearWeight_H

#include "org/apache/lucene/queries/spans/SpanWeight.h"

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
          class SpanWeight$Postings;
          class SpanNearQuery;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
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

          class SpanNearQuery$SpanNearWeight : public ::org::apache::lucene::queries::spans::SpanWeight {
           public:
            enum {
              mid_init$_abca314281a1e684,
              mid_extractTermStates_62c0fdc62292ffbf,
              mid_getSpans_87889f1c7f252c4d,
              mid_isCacheable_7f6d289efb1f533f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanNearQuery$SpanNearWeight(jobject obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanNearQuery$SpanNearWeight(const SpanNearQuery$SpanNearWeight& obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {}

            SpanNearQuery$SpanNearWeight(const ::org::apache::lucene::queries::spans::SpanNearQuery &, const ::java::util::List &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, jfloat);

            void extractTermStates(const ::java::util::Map &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanNearQuery$SpanNearWeight);
          extern PyTypeObject *PY_TYPE(SpanNearQuery$SpanNearWeight);

          class t_SpanNearQuery$SpanNearWeight {
          public:
            PyObject_HEAD
            SpanNearQuery$SpanNearWeight object;
            static PyObject *wrap_Object(const SpanNearQuery$SpanNearWeight&);
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
