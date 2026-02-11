#ifndef org_apache_lucene_queries_spans_SpanContainingQuery_H
#define org_apache_lucene_queries_spans_SpanContainingQuery_H

#include "org/apache/lucene/queries/spans/SpanContainQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class ScoreMode;
      }
      namespace queries {
        namespace spans {
          class SpanQuery;
          class SpanWeight;
        }
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

          class SpanContainingQuery : public ::org::apache::lucene::queries::spans::SpanContainQuery {
           public:
            enum {
              mid_init$_9ca197c3f727388d,
              mid_createWeight_18b5d04a7c3e57b6,
              mid_toString_04612c8360f09496,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanContainingQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanContainQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanContainingQuery(const SpanContainingQuery& obj) : ::org::apache::lucene::queries::spans::SpanContainQuery(obj) {}

            SpanContainingQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::org::apache::lucene::queries::spans::SpanQuery &);

            ::org::apache::lucene::queries::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanContainingQuery);
          extern PyTypeObject *PY_TYPE(SpanContainingQuery);

          class t_SpanContainingQuery {
          public:
            PyObject_HEAD
            SpanContainingQuery object;
            static PyObject *wrap_Object(const SpanContainingQuery&);
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
