#ifndef org_apache_lucene_queries_spans_SpanNearQuery_H
#define org_apache_lucene_queries_spans_SpanNearQuery_H

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
          class SpanNearQuery$Builder;
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
    class Cloneable;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanNearQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_init$_801da75afe986721,
              mid_createWeight_18b5d04a7c3e57b6,
              mid_equals_6084f78e09b6c0c3,
              mid_getClauses_7fef3dc74aaf8169,
              mid_getField_dc633f13a47328a8,
              mid_getSlop_15aa3d485e96b665,
              mid_hashCode_15aa3d485e96b665,
              mid_isInOrder_ee8b0a5fa521ddac,
              mid_newOrderedNearQuery_3423c3fc522ce5de,
              mid_newUnorderedNearQuery_3423c3fc522ce5de,
              mid_rewrite_7da87bae82c9c483,
              mid_toString_04612c8360f09496,
              mid_visit_fddfa57e96928ffc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanNearQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanNearQuery(const SpanNearQuery& obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {}

            SpanNearQuery(const JArray< ::org::apache::lucene::queries::spans::SpanQuery > &, jint, jboolean);

            ::org::apache::lucene::queries::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            JArray< ::org::apache::lucene::queries::spans::SpanQuery > getClauses() const;
            ::java::lang::String getField() const;
            jint getSlop() const;
            jint hashCode() const;
            jboolean isInOrder() const;
            static ::org::apache::lucene::queries::spans::SpanNearQuery$Builder newOrderedNearQuery(const ::java::lang::String &);
            static ::org::apache::lucene::queries::spans::SpanNearQuery$Builder newUnorderedNearQuery(const ::java::lang::String &);
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
          extern PyType_Def PY_TYPE_DEF(SpanNearQuery);
          extern PyTypeObject *PY_TYPE(SpanNearQuery);

          class t_SpanNearQuery {
          public:
            PyObject_HEAD
            SpanNearQuery object;
            static PyObject *wrap_Object(const SpanNearQuery&);
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
