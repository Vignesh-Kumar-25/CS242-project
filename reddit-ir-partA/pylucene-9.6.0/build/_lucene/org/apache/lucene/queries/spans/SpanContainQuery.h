#ifndef org_apache_lucene_queries_spans_SpanContainQuery_H
#define org_apache_lucene_queries_spans_SpanContainQuery_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class QueryVisitor;
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

          class SpanContainQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_equals_6084f78e09b6c0c3,
              mid_getBig_a238cbb523372371,
              mid_getField_dc633f13a47328a8,
              mid_getLittle_a238cbb523372371,
              mid_hashCode_15aa3d485e96b665,
              mid_rewrite_7da87bae82c9c483,
              mid_visit_fddfa57e96928ffc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanContainQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanContainQuery(const SpanContainQuery& obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {}

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::queries::spans::SpanQuery getBig() const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::queries::spans::SpanQuery getLittle() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanContainQuery);
          extern PyTypeObject *PY_TYPE(SpanContainQuery);

          class t_SpanContainQuery {
          public:
            PyObject_HEAD
            SpanContainQuery object;
            static PyObject *wrap_Object(const SpanContainQuery&);
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
