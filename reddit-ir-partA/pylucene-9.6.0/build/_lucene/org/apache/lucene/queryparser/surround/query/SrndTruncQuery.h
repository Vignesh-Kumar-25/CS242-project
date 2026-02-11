#ifndef org_apache_lucene_queryparser_surround_query_SrndTruncQuery_H
#define org_apache_lucene_queryparser_surround_query_SrndTruncQuery_H

#include "org/apache/lucene/queryparser/surround/query/SimpleTerm.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace queryparser {
        namespace surround {
          namespace query {
            class SimpleTerm$MatchingTermVisitor;
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

            class SrndTruncQuery : public ::org::apache::lucene::queryparser::surround::query::SimpleTerm {
             public:
              enum {
                mid_init$_15a24c42f9a7112c,
                mid_getTruncated_dc633f13a47328a8,
                mid_toStringUnquoted_dc633f13a47328a8,
                mid_visitMatchingTerms_dd7b542637c4f987,
                mid_matchingChar_7bae3cc4661f3586,
                mid_appendRegExpForChar_63b929e23eb9f5b5,
                mid_truncatedToPrefixAndPattern_3353d9f14bbfd91a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SrndTruncQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SrndTruncQuery(const SrndTruncQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {}

              SrndTruncQuery(const ::java::lang::String &, jchar, jchar);

              ::java::lang::String getTruncated() const;
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
            extern PyType_Def PY_TYPE_DEF(SrndTruncQuery);
            extern PyTypeObject *PY_TYPE(SrndTruncQuery);

            class t_SrndTruncQuery {
            public:
              PyObject_HEAD
              SrndTruncQuery object;
              static PyObject *wrap_Object(const SrndTruncQuery&);
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
