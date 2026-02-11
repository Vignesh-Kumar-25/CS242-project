#ifndef org_apache_lucene_queries_payloads_SpanPayloadCheckQuery$SpanPayloadCheckWeight_H
#define org_apache_lucene_queries_payloads_SpanPayloadCheckQuery$SpanPayloadCheckWeight_H

#include "org/apache/lucene/queries/spans/SpanWeight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
      }
      namespace queries {
        namespace payloads {
          class SpanPayloadCheckQuery;
          class SpanPayloadCheckQuery$PayloadType;
        }
        namespace spans {
          class Spans;
          class SpanWeight$Postings;
          class SpanScorer;
        }
      }
      namespace index {
        class TermStates;
        class Term;
        class LeafReaderContext;
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
        namespace payloads {

          class SpanPayloadCheckQuery$SpanPayloadCheckWeight : public ::org::apache::lucene::queries::spans::SpanWeight {
           public:
            enum {
              mid_init$_da56e0109f0a68c4,
              mid_extractTermStates_62c0fdc62292ffbf,
              mid_getSpans_87889f1c7f252c4d,
              mid_isCacheable_7f6d289efb1f533f,
              mid_scorer_635dd7df6b4e51ff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanPayloadCheckQuery$SpanPayloadCheckWeight(jobject obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanPayloadCheckQuery$SpanPayloadCheckWeight(const SpanPayloadCheckQuery$SpanPayloadCheckWeight& obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {}

            SpanPayloadCheckQuery$SpanPayloadCheckWeight(const ::org::apache::lucene::queries::payloads::SpanPayloadCheckQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, const ::org::apache::lucene::queries::spans::SpanWeight &, jfloat, const ::org::apache::lucene::queries::payloads::SpanPayloadCheckQuery$PayloadType &);

            void extractTermStates(const ::java::util::Map &) const;
            ::org::apache::lucene::queries::spans::Spans getSpans(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::queries::spans::SpanWeight$Postings &) const;
            jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::queries::spans::SpanScorer scorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
        namespace payloads {
          extern PyType_Def PY_TYPE_DEF(SpanPayloadCheckQuery$SpanPayloadCheckWeight);
          extern PyTypeObject *PY_TYPE(SpanPayloadCheckQuery$SpanPayloadCheckWeight);

          class t_SpanPayloadCheckQuery$SpanPayloadCheckWeight {
          public:
            PyObject_HEAD
            SpanPayloadCheckQuery$SpanPayloadCheckWeight object;
            static PyObject *wrap_Object(const SpanPayloadCheckQuery$SpanPayloadCheckWeight&);
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
