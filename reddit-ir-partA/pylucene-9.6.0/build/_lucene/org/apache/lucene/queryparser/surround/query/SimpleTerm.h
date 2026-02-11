#ifndef org_apache_lucene_queryparser_surround_query_SimpleTerm_H
#define org_apache_lucene_queryparser_surround_query_SimpleTerm_H

#include "org/apache/lucene/queryparser/surround/query/SrndQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            class DistanceSubQuery;
            class BasicQueryFactory;
            class SpanNearClauseFactory;
            class SimpleTerm$MatchingTermVisitor;
          }
        }
      }
      namespace search {
        class Query;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {

            class SimpleTerm : public ::org::apache::lucene::queryparser::surround::query::SrndQuery {
             public:
              enum {
                mid_init$_4f96af910856b303,
                mid_addSpanQueries_7783267546efce65,
                mid_distanceSubQueryNotAllowed_dc633f13a47328a8,
                mid_getFieldOperator_dc633f13a47328a8,
                mid_getQuote_dc633f13a47328a8,
                mid_makeLuceneQueryFieldNoBoost_75a2ee89a74eef95,
                mid_toString_dc633f13a47328a8,
                mid_toStringUnquoted_dc633f13a47328a8,
                mid_visitMatchingTerms_dd7b542637c4f987,
                mid_suffixToString_94e20f3c4a3e724b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SimpleTerm(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SimpleTerm(const SimpleTerm& obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {}

              SimpleTerm(jboolean);

              void addSpanQueries(const ::org::apache::lucene::queryparser::surround::query::SpanNearClauseFactory &) const;
              ::java::lang::String distanceSubQueryNotAllowed() const;
              ::java::lang::String getFieldOperator() const;
              ::java::lang::String getQuote() const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::java::lang::String toString() const;
              ::java::lang::String toStringUnquoted() const;
              void visitMatchingTerms(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::SimpleTerm$MatchingTermVisitor &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            extern PyType_Def PY_TYPE_DEF(SimpleTerm);
            extern PyTypeObject *PY_TYPE(SimpleTerm);

            class t_SimpleTerm {
            public:
              PyObject_HEAD
              SimpleTerm object;
              static PyObject *wrap_Object(const SimpleTerm&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
