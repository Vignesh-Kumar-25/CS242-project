#ifndef org_apache_lucene_queryparser_surround_query_SpanNearClauseFactory_H
#define org_apache_lucene_queryparser_surround_query_SpanNearClauseFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queries {
        namespace spans {
          class SpanQuery;
        }
      }
      namespace queryparser {
        namespace surround {
          namespace query {
            class BasicQueryFactory;
          }
        }
      }
      namespace index {
        class Term;
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

            class SpanNearClauseFactory : public ::java::lang::Object {
             public:
              enum {
                mid_init$_13831e5e1421916c,
                mid_addSpanQuery_60638ee06ec0416b,
                mid_addTermWeighted_ca9b5de7f09d5e71,
                mid_clear_3353d9f14bbfd91a,
                mid_getBasicQueryFactory_1adfb874fa500f8e,
                mid_getFieldName_dc633f13a47328a8,
                mid_getIndexReader_5412d7f2b2358551,
                mid_makeSpanClause_a238cbb523372371,
                mid_size_15aa3d485e96b665,
                mid_addSpanQueryWeighted_eb668174ba8c6ca9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SpanNearClauseFactory(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SpanNearClauseFactory(const SpanNearClauseFactory& obj) : ::java::lang::Object(obj) {}

              SpanNearClauseFactory(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &);

              void addSpanQuery(const ::org::apache::lucene::search::Query &) const;
              void addTermWeighted(const ::org::apache::lucene::index::Term &, jfloat) const;
              void clear() const;
              ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory getBasicQueryFactory() const;
              ::java::lang::String getFieldName() const;
              ::org::apache::lucene::index::IndexReader getIndexReader() const;
              ::org::apache::lucene::queries::spans::SpanQuery makeSpanClause() const;
              jint size() const;
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
            extern PyType_Def PY_TYPE_DEF(SpanNearClauseFactory);
            extern PyTypeObject *PY_TYPE(SpanNearClauseFactory);

            class t_SpanNearClauseFactory {
            public:
              PyObject_HEAD
              SpanNearClauseFactory object;
              static PyObject *wrap_Object(const SpanNearClauseFactory&);
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
