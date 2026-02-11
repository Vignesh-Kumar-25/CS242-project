#ifndef org_apache_lucene_queries_spans_SpanMultiTermQueryWrapper_H
#define org_apache_lucene_queries_spans_SpanMultiTermQueryWrapper_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class IndexSearcher;
        class MultiTermQuery;
        class ScoreMode;
        class QueryVisitor;
      }
      namespace queries {
        namespace spans {
          class SpanMultiTermQueryWrapper$SpanRewriteMethod;
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

          class SpanMultiTermQueryWrapper : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_init$_02ffc5d40114bd2f,
              mid_createWeight_18b5d04a7c3e57b6,
              mid_equals_6084f78e09b6c0c3,
              mid_getField_dc633f13a47328a8,
              mid_getRewriteMethod_05b05f6c9bccdb84,
              mid_getWrappedQuery_0b32ec998a0c18fa,
              mid_hashCode_15aa3d485e96b665,
              mid_rewrite_7da87bae82c9c483,
              mid_setRewriteMethod_2200ed85f6aae479,
              mid_toString_04612c8360f09496,
              mid_visit_fddfa57e96928ffc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanMultiTermQueryWrapper(jobject obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanMultiTermQueryWrapper(const SpanMultiTermQueryWrapper& obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {}

            static ::org::apache::lucene::queries::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod *SCORING_SPAN_QUERY_REWRITE;

            SpanMultiTermQueryWrapper(const ::org::apache::lucene::search::MultiTermQuery &);

            ::org::apache::lucene::queries::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::queries::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod getRewriteMethod() const;
            ::org::apache::lucene::search::Query getWrappedQuery() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
            void setRewriteMethod(const ::org::apache::lucene::queries::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanMultiTermQueryWrapper);
          extern PyTypeObject *PY_TYPE(SpanMultiTermQueryWrapper);

          class t_SpanMultiTermQueryWrapper {
          public:
            PyObject_HEAD
            SpanMultiTermQueryWrapper object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SpanMultiTermQueryWrapper *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
