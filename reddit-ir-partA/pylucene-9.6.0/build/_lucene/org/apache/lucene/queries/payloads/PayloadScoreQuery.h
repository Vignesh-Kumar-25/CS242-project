#ifndef org_apache_lucene_queries_payloads_PayloadScoreQuery_H
#define org_apache_lucene_queries_payloads_PayloadScoreQuery_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {
          class PayloadDecoder;
          class PayloadFunction;
        }
        namespace spans {
          class SpanWeight;
        }
      }
      namespace search {
        class IndexSearcher;
        class Query;
        class ScoreMode;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {

          class PayloadScoreQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_init$_07aab261ac510943,
              mid_init$_c50ccf320bfbbffa,
              mid_createWeight_18b5d04a7c3e57b6,
              mid_equals_6084f78e09b6c0c3,
              mid_getField_dc633f13a47328a8,
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

            explicit PayloadScoreQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PayloadScoreQuery(const PayloadScoreQuery& obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {}

            PayloadScoreQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::org::apache::lucene::queries::payloads::PayloadFunction &, const ::org::apache::lucene::queries::payloads::PayloadDecoder &);
            PayloadScoreQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::org::apache::lucene::queries::payloads::PayloadFunction &, const ::org::apache::lucene::queries::payloads::PayloadDecoder &, jboolean);

            ::org::apache::lucene::queries::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
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
        namespace payloads {
          extern PyType_Def PY_TYPE_DEF(PayloadScoreQuery);
          extern PyTypeObject *PY_TYPE(PayloadScoreQuery);

          class t_PayloadScoreQuery {
          public:
            PyObject_HEAD
            PayloadScoreQuery object;
            static PyObject *wrap_Object(const PayloadScoreQuery&);
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
