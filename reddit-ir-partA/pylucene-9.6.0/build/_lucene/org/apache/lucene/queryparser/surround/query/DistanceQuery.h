#ifndef org_apache_lucene_queryparser_surround_query_DistanceQuery_H
#define org_apache_lucene_queryparser_surround_query_DistanceQuery_H

#include "org/apache/lucene/queryparser/surround/query/ComposedQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            class DistanceSubQuery;
            class SrndQuery;
            class BasicQueryFactory;
            class SpanNearClauseFactory;
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
  namespace util {
    class List;
  }
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

            class DistanceQuery : public ::org::apache::lucene::queryparser::surround::query::ComposedQuery {
             public:
              enum {
                mid_init$_39c98951550e95a5,
                mid_addSpanQueries_7783267546efce65,
                mid_distanceSubQueryNotAllowed_dc633f13a47328a8,
                mid_getOpDistance_15aa3d485e96b665,
                mid_getSpanNearQuery_f160b11d1328ea97,
                mid_makeLuceneQueryFieldNoBoost_75a2ee89a74eef95,
                mid_subQueriesOrdered_ee8b0a5fa521ddac,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DistanceQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DistanceQuery(const DistanceQuery& obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {}

              DistanceQuery(const ::java::util::List &, jboolean, jint, const ::java::lang::String &, jboolean);

              void addSpanQueries(const ::org::apache::lucene::queryparser::surround::query::SpanNearClauseFactory &) const;
              ::java::lang::String distanceSubQueryNotAllowed() const;
              jint getOpDistance() const;
              ::org::apache::lucene::search::Query getSpanNearQuery(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              jboolean subQueriesOrdered() const;
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
            extern PyType_Def PY_TYPE_DEF(DistanceQuery);
            extern PyTypeObject *PY_TYPE(DistanceQuery);

            class t_DistanceQuery {
            public:
              PyObject_HEAD
              DistanceQuery object;
              static PyObject *wrap_Object(const DistanceQuery&);
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
