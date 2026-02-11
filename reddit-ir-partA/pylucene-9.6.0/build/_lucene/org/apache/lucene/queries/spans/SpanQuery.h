#ifndef org_apache_lucene_queries_spans_SpanQuery_H
#define org_apache_lucene_queries_spans_SpanQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class ScoreMode;
      }
      namespace index {
        class TermStates;
        class Term;
      }
      namespace queries {
        namespace spans {
          class SpanWeight;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Collection;
  }
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

          class SpanQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_createWeight_18b5d04a7c3e57b6,
              mid_getField_dc633f13a47328a8,
              mid_getTermStates_a82342a53a563afb,
              mid_getTermStates_39a1c986bbe3b83a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanQuery(const SpanQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            SpanQuery();

            ::org::apache::lucene::queries::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            ::java::lang::String getField() const;
            static ::java::util::Map getTermStates(const JArray< ::org::apache::lucene::queries::spans::SpanWeight > &);
            static ::java::util::Map getTermStates(const ::java::util::Collection &);
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
          extern PyType_Def PY_TYPE_DEF(SpanQuery);
          extern PyTypeObject *PY_TYPE(SpanQuery);

          class t_SpanQuery {
          public:
            PyObject_HEAD
            SpanQuery object;
            static PyObject *wrap_Object(const SpanQuery&);
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
