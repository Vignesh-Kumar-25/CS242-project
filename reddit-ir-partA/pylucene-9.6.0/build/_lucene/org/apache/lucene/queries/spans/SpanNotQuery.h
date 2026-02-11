#ifndef org_apache_lucene_queries_spans_SpanNotQuery_H
#define org_apache_lucene_queries_spans_SpanNotQuery_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class IndexSearcher;
        class ScoreMode;
        class QueryVisitor;
      }
      namespace queries {
        namespace spans {
          class SpanWeight;
        }
      }
      namespace index {
        class IndexReader;
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
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanNotQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_init$_9ca197c3f727388d,
              mid_init$_b5fdfbc503339b98,
              mid_init$_bffffc5d37a4e1ae,
              mid_createWeight_18b5d04a7c3e57b6,
              mid_equals_6084f78e09b6c0c3,
              mid_getExclude_a238cbb523372371,
              mid_getField_dc633f13a47328a8,
              mid_getInclude_a238cbb523372371,
              mid_hashCode_15aa3d485e96b665,
              mid_rewrite_7da87bae82c9c483,
              mid_toString_04612c8360f09496,
              mid_visit_fddfa57e96928ffc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanNotQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanNotQuery(const SpanNotQuery& obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {}

            SpanNotQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::org::apache::lucene::queries::spans::SpanQuery &);
            SpanNotQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::org::apache::lucene::queries::spans::SpanQuery &, jint);
            SpanNotQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::org::apache::lucene::queries::spans::SpanQuery &, jint, jint);

            ::org::apache::lucene::queries::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::queries::spans::SpanQuery getExclude() const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::queries::spans::SpanQuery getInclude() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanNotQuery);
          extern PyTypeObject *PY_TYPE(SpanNotQuery);

          class t_SpanNotQuery {
          public:
            PyObject_HEAD
            SpanNotQuery object;
            static PyObject *wrap_Object(const SpanNotQuery&);
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
