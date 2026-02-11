#ifndef org_apache_lucene_queryparser_surround_query_ComposedQuery_H
#define org_apache_lucene_queryparser_surround_query_ComposedQuery_H

#include "org/apache/lucene/queryparser/surround/query/SrndQuery.h"

namespace java {
  namespace util {
    class Iterator;
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace surround {
          namespace query {
            class BasicQueryFactory;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {

            class ComposedQuery : public ::org::apache::lucene::queryparser::surround::query::SrndQuery {
             public:
              enum {
                mid_init$_c989328ad20a3e17,
                mid_getNrSubQueries_15aa3d485e96b665,
                mid_getOperatorName_dc633f13a47328a8,
                mid_getSubQueriesIterator_7c74834ad8788f5d,
                mid_getSubQuery_b539729128e325f8,
                mid_isFieldsSubQueryAcceptable_ee8b0a5fa521ddac,
                mid_isOperatorInfix_ee8b0a5fa521ddac,
                mid_makeLuceneSubQueriesField_bc57dd009d14032f,
                mid_toString_dc633f13a47328a8,
                mid_recompose_1a2e28000748bc88,
                mid_getPrefixSeparator_dc633f13a47328a8,
                mid_getBracketOpen_dc633f13a47328a8,
                mid_getBracketClose_dc633f13a47328a8,
                mid_infixToString_94e20f3c4a3e724b,
                mid_prefixToString_94e20f3c4a3e724b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ComposedQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ComposedQuery(const ComposedQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {}

              ComposedQuery(const ::java::util::List &, jboolean, const ::java::lang::String &);

              jint getNrSubQueries() const;
              ::java::lang::String getOperatorName() const;
              ::java::util::Iterator getSubQueriesIterator() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery getSubQuery(jint) const;
              jboolean isFieldsSubQueryAcceptable() const;
              jboolean isOperatorInfix() const;
              ::java::util::List makeLuceneSubQueriesField(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::java::lang::String toString() const;
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
            extern PyType_Def PY_TYPE_DEF(ComposedQuery);
            extern PyTypeObject *PY_TYPE(ComposedQuery);

            class t_ComposedQuery {
            public:
              PyObject_HEAD
              ComposedQuery object;
              static PyObject *wrap_Object(const ComposedQuery&);
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
