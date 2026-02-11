#ifndef org_apache_lucene_queries_function_FunctionMatchQuery_H
#define org_apache_lucene_queries_function_FunctionMatchQuery_H

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
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class DoublePredicate;
    }
  }
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
        namespace function {

          class FunctionMatchQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_75116be5bc60b042,
              mid_init$_80d63836dba1a8d6,
              mid_createWeight_9d45be3ef0fc5210,
              mid_equals_6084f78e09b6c0c3,
              mid_hashCode_15aa3d485e96b665,
              mid_toString_04612c8360f09496,
              mid_visit_fddfa57e96928ffc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FunctionMatchQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FunctionMatchQuery(const FunctionMatchQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            FunctionMatchQuery(const ::org::apache::lucene::search::DoubleValuesSource &, const ::java::util::function::DoublePredicate &);
            FunctionMatchQuery(const ::org::apache::lucene::search::DoubleValuesSource &, const ::java::util::function::DoublePredicate &, jfloat);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
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
        namespace function {
          extern PyType_Def PY_TYPE_DEF(FunctionMatchQuery);
          extern PyTypeObject *PY_TYPE(FunctionMatchQuery);

          class t_FunctionMatchQuery {
          public:
            PyObject_HEAD
            FunctionMatchQuery object;
            static PyObject *wrap_Object(const FunctionMatchQuery&);
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
