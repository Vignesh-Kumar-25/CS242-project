#ifndef org_apache_lucene_queries_spans_SpanPositionCheckQuery$SpanPositionCheckWeight_H
#define org_apache_lucene_queries_spans_SpanPositionCheckQuery$SpanPositionCheckWeight_H

#include "org/apache/lucene/queries/spans/SpanWeight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          class SpanPositionCheckQuery;
          class Spans;
          class SpanWeight$Postings;
        }
      }
      namespace search {
        class IndexSearcher;
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
        namespace spans {

          class SpanPositionCheckQuery$SpanPositionCheckWeight : public ::org::apache::lucene::queries::spans::SpanWeight {
           public:
            enum {
              mid_init$_5a2fcd27c0f08b60,
              mid_extractTermStates_62c0fdc62292ffbf,
              mid_getSpans_87889f1c7f252c4d,
              mid_isCacheable_7f6d289efb1f533f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanPositionCheckQuery$SpanPositionCheckWeight(jobject obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanPositionCheckQuery$SpanPositionCheckWeight(const SpanPositionCheckQuery$SpanPositionCheckWeight& obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {}

            SpanPositionCheckQuery$SpanPositionCheckWeight(const ::org::apache::lucene::queries::spans::SpanPositionCheckQuery &, const ::org::apache::lucene::queries::spans::SpanWeight &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, jfloat);

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
          extern PyType_Def PY_TYPE_DEF(SpanPositionCheckQuery$SpanPositionCheckWeight);
          extern PyTypeObject *PY_TYPE(SpanPositionCheckQuery$SpanPositionCheckWeight);

          class t_SpanPositionCheckQuery$SpanPositionCheckWeight {
          public:
            PyObject_HEAD
            SpanPositionCheckQuery$SpanPositionCheckWeight object;
            static PyObject *wrap_Object(const SpanPositionCheckQuery$SpanPositionCheckWeight&);
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
