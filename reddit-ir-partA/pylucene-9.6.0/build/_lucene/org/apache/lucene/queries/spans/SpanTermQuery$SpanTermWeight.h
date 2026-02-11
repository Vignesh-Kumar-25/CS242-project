#ifndef org_apache_lucene_queries_spans_SpanTermQuery$SpanTermWeight_H
#define org_apache_lucene_queries_spans_SpanTermQuery$SpanTermWeight_H

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
          class SpanTermQuery;
          class SpanWeight$Postings;
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

          class SpanTermQuery$SpanTermWeight : public ::org::apache::lucene::queries::spans::SpanWeight {
           public:
            enum {
              mid_init$_019f3cf54d61dc5f,
              mid_extractTermStates_62c0fdc62292ffbf,
              mid_getSpans_87889f1c7f252c4d,
              mid_isCacheable_7f6d289efb1f533f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanTermQuery$SpanTermWeight(jobject obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanTermQuery$SpanTermWeight(const SpanTermQuery$SpanTermWeight& obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {}

            SpanTermQuery$SpanTermWeight(const ::org::apache::lucene::queries::spans::SpanTermQuery &, const ::org::apache::lucene::index::TermStates &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, jfloat);

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
          extern PyType_Def PY_TYPE_DEF(SpanTermQuery$SpanTermWeight);
          extern PyTypeObject *PY_TYPE(SpanTermQuery$SpanTermWeight);

          class t_SpanTermQuery$SpanTermWeight {
          public:
            PyObject_HEAD
            SpanTermQuery$SpanTermWeight object;
            static PyObject *wrap_Object(const SpanTermQuery$SpanTermWeight&);
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
