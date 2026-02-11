#ifndef org_apache_lucene_queries_function_FunctionScoreQuery_H
#define org_apache_lucene_queries_function_FunctionScoreQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class DoubleValuesSource;
        class ScoreMode;
        class Weight;
        class QueryVisitor;
      }
      namespace queries {
        namespace function {
          class FunctionScoreQuery;
        }
      }
      namespace index {
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {

          class FunctionScoreQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_3994bf00a186540d,
              mid_boostByQuery_c9bb6b4ddd9fb2df,
              mid_boostByValue_67d794a031df7119,
              mid_createWeight_9d45be3ef0fc5210,
              mid_equals_6084f78e09b6c0c3,
              mid_getSource_a1ec38fd305e2f49,
              mid_getWrappedQuery_0b32ec998a0c18fa,
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

            explicit FunctionScoreQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FunctionScoreQuery(const FunctionScoreQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            FunctionScoreQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::DoubleValuesSource &);

            static FunctionScoreQuery boostByQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Query &, jfloat);
            static FunctionScoreQuery boostByValue(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::DoubleValuesSource &);
            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::DoubleValuesSource getSource() const;
            ::org::apache::lucene::search::Query getWrappedQuery() const;
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
        namespace function {
          extern PyType_Def PY_TYPE_DEF(FunctionScoreQuery);
          extern PyTypeObject *PY_TYPE(FunctionScoreQuery);

          class t_FunctionScoreQuery {
          public:
            PyObject_HEAD
            FunctionScoreQuery object;
            static PyObject *wrap_Object(const FunctionScoreQuery&);
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
