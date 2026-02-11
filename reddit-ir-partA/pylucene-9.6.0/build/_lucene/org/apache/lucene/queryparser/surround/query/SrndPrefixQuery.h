#ifndef org_apache_lucene_queryparser_surround_query_SrndPrefixQuery_H
#define org_apache_lucene_queryparser_surround_query_SrndPrefixQuery_H

#include "org/apache/lucene/queryparser/surround/query/SimpleTerm.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
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

            class SrndPrefixQuery : public ::org::apache::lucene::queryparser::surround::query::SimpleTerm {
             public:
              enum {
                mid_init$_6c809eda3ce42c40,
                mid_getLucenePrefixTerm_8bf2d2db813dcb8c,
                mid_getPrefix_dc633f13a47328a8,
                mid_getSuffixOperator_b2ab5238d4cbdf34,
                mid_toStringUnquoted_dc633f13a47328a8,
                mid_visitMatchingTerms_dd7b542637c4f987,
                mid_suffixToString_94e20f3c4a3e724b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SrndPrefixQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SrndPrefixQuery(const SrndPrefixQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {}

              SrndPrefixQuery(const ::java::lang::String &, jboolean, jchar);

              ::org::apache::lucene::index::Term getLucenePrefixTerm(const ::java::lang::String &) const;
              ::java::lang::String getPrefix() const;
              jchar getSuffixOperator() const;
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
            extern PyType_Def PY_TYPE_DEF(SrndPrefixQuery);
            extern PyTypeObject *PY_TYPE(SrndPrefixQuery);

            class t_SrndPrefixQuery {
            public:
              PyObject_HEAD
              SrndPrefixQuery object;
              static PyObject *wrap_Object(const SrndPrefixQuery&);
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
