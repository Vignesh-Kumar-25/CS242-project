#ifndef org_apache_lucene_queryparser_surround_query_FieldsQuery_H
#define org_apache_lucene_queryparser_surround_query_FieldsQuery_H

#include "org/apache/lucene/queryparser/surround/query/SrndQuery.h"

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
namespace java {
  namespace util {
    class List;
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

            class FieldsQuery : public ::org::apache::lucene::queryparser::surround::query::SrndQuery {
             public:
              enum {
                mid_init$_4973be0af90efcbf,
                mid_init$_ba65c64b191e65dc,
                mid_getFieldNames_0bc66e960964b70a,
                mid_getFieldOperator_b2ab5238d4cbdf34,
                mid_isFieldsSubQueryAcceptable_ee8b0a5fa521ddac,
                mid_makeLuceneQueryFieldNoBoost_75a2ee89a74eef95,
                mid_makeLuceneQueryNoBoost_c81d5314f4187817,
                mid_toString_dc633f13a47328a8,
                mid_fieldNamesToString_94e20f3c4a3e724b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldsQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldsQuery(const FieldsQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {}

              FieldsQuery(const ::org::apache::lucene::queryparser::surround::query::SrndQuery &, const ::java::lang::String &, jchar);
              FieldsQuery(const ::org::apache::lucene::queryparser::surround::query::SrndQuery &, const ::java::util::List &, jchar);

              ::java::util::List getFieldNames() const;
              jchar getFieldOperator() const;
              jboolean isFieldsSubQueryAcceptable() const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::org::apache::lucene::search::Query makeLuceneQueryNoBoost(const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
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
            extern PyType_Def PY_TYPE_DEF(FieldsQuery);
            extern PyTypeObject *PY_TYPE(FieldsQuery);

            class t_FieldsQuery {
            public:
              PyObject_HEAD
              FieldsQuery object;
              static PyObject *wrap_Object(const FieldsQuery&);
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
