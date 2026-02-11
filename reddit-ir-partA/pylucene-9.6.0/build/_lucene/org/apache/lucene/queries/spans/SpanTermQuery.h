#ifndef org_apache_lucene_queries_spans_SpanTermQuery_H
#define org_apache_lucene_queries_spans_SpanTermQuery_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class ScoreMode;
        class QueryVisitor;
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

          class SpanTermQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_init$_62e0fe03f75a3264,
              mid_init$_36884fb6b6735c47,
              mid_createWeight_18b5d04a7c3e57b6,
              mid_equals_6084f78e09b6c0c3,
              mid_getField_dc633f13a47328a8,
              mid_getTerm_5b4d4f9d26b4f48d,
              mid_getTermStates_55d5dc0a0dc2d7da,
              mid_hashCode_15aa3d485e96b665,
              mid_toString_04612c8360f09496,
              mid_visit_fddfa57e96928ffc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanTermQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanTermQuery(const SpanTermQuery& obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {}

            SpanTermQuery(const ::org::apache::lucene::index::Term &);
            SpanTermQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::index::TermStates &);

            ::org::apache::lucene::queries::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::index::Term getTerm() const;
            ::org::apache::lucene::index::TermStates getTermStates() const;
            jint hashCode() const;
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
          extern PyType_Def PY_TYPE_DEF(SpanTermQuery);
          extern PyTypeObject *PY_TYPE(SpanTermQuery);

          class t_SpanTermQuery {
          public:
            PyObject_HEAD
            SpanTermQuery object;
            static PyObject *wrap_Object(const SpanTermQuery&);
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
