#ifndef org_apache_lucene_queryparser_surround_query_SrndTermQuery_H
#define org_apache_lucene_queryparser_surround_query_SrndTermQuery_H

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

            class SrndTermQuery : public ::org::apache::lucene::queryparser::surround::query::SimpleTerm {
             public:
              enum {
                mid_init$_33d070369aa7d0f5,
                mid_getLuceneTerm_8bf2d2db813dcb8c,
                mid_getTermText_dc633f13a47328a8,
                mid_toStringUnquoted_dc633f13a47328a8,
                mid_visitMatchingTerms_dd7b542637c4f987,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SrndTermQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SrndTermQuery(const SrndTermQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {}

              SrndTermQuery(const ::java::lang::String &, jboolean);

              ::org::apache::lucene::index::Term getLuceneTerm(const ::java::lang::String &) const;
              ::java::lang::String getTermText() const;
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
            extern PyType_Def PY_TYPE_DEF(SrndTermQuery);
            extern PyTypeObject *PY_TYPE(SrndTermQuery);

            class t_SrndTermQuery {
            public:
              PyObject_HEAD
              SrndTermQuery object;
              static PyObject *wrap_Object(const SrndTermQuery&);
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
