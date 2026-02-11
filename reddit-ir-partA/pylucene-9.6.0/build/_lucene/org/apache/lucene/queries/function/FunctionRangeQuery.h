#ifndef org_apache_lucene_queries_function_FunctionRangeQuery_H
#define org_apache_lucene_queries_function_FunctionRangeQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class ScoreMode;
        class Weight;
        class QueryVisitor;
      }
      namespace queries {
        namespace function {
          class ValueSource;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Number;
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

          class FunctionRangeQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_2a6991298f0c9482,
              mid_init$_23ec393c3832a656,
              mid_createWeight_9d45be3ef0fc5210,
              mid_equals_6084f78e09b6c0c3,
              mid_getLowerVal_dc633f13a47328a8,
              mid_getUpperVal_dc633f13a47328a8,
              mid_getValueSource_b3193c9e8bb1d15a,
              mid_hashCode_15aa3d485e96b665,
              mid_isIncludeLower_ee8b0a5fa521ddac,
              mid_isIncludeUpper_ee8b0a5fa521ddac,
              mid_toString_04612c8360f09496,
              mid_visit_fddfa57e96928ffc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FunctionRangeQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FunctionRangeQuery(const FunctionRangeQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            FunctionRangeQuery(const ::org::apache::lucene::queries::function::ValueSource &, const ::java::lang::Number &, const ::java::lang::Number &, jboolean, jboolean);
            FunctionRangeQuery(const ::org::apache::lucene::queries::function::ValueSource &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getLowerVal() const;
            ::java::lang::String getUpperVal() const;
            ::org::apache::lucene::queries::function::ValueSource getValueSource() const;
            jint hashCode() const;
            jboolean isIncludeLower() const;
            jboolean isIncludeUpper() const;
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
          extern PyType_Def PY_TYPE_DEF(FunctionRangeQuery);
          extern PyTypeObject *PY_TYPE(FunctionRangeQuery);

          class t_FunctionRangeQuery {
          public:
            PyObject_HEAD
            FunctionRangeQuery object;
            static PyObject *wrap_Object(const FunctionRangeQuery&);
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
