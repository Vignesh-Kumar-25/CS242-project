#ifndef org_apache_lucene_queryparser_surround_query_BasicQueryFactory_H
#define org_apache_lucene_queryparser_surround_query_BasicQueryFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            class TooManyBasicQueries;
          }
        }
      }
      namespace queries {
        namespace spans {
          class SpanTermQuery;
        }
      }
      namespace index {
        class Term;
      }
      namespace search {
        class TermQuery;
      }
    }
  }
}
namespace java {
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

            class BasicQueryFactory : public ::java::lang::Object {
             public:
              enum {
                mid_init$_3353d9f14bbfd91a,
                mid_init$_da425451c8de636b,
                mid_equals_6084f78e09b6c0c3,
                mid_getMaxBasicQueries_15aa3d485e96b665,
                mid_getNrQueriesMade_15aa3d485e96b665,
                mid_hashCode_15aa3d485e96b665,
                mid_newSpanTermQuery_02926cc5f4dc94a0,
                mid_newTermQuery_a3b4646b5725fb13,
                mid_toString_dc633f13a47328a8,
                mid_checkMax_3353d9f14bbfd91a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BasicQueryFactory(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BasicQueryFactory(const BasicQueryFactory& obj) : ::java::lang::Object(obj) {}

              BasicQueryFactory();
              BasicQueryFactory(jint);

              jboolean equals(const ::java::lang::Object &) const;
              jint getMaxBasicQueries() const;
              jint getNrQueriesMade() const;
              jint hashCode() const;
              ::org::apache::lucene::queries::spans::SpanTermQuery newSpanTermQuery(const ::org::apache::lucene::index::Term &) const;
              ::org::apache::lucene::search::TermQuery newTermQuery(const ::org::apache::lucene::index::Term &) const;
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
            extern PyType_Def PY_TYPE_DEF(BasicQueryFactory);
            extern PyTypeObject *PY_TYPE(BasicQueryFactory);

            class t_BasicQueryFactory {
            public:
              PyObject_HEAD
              BasicQueryFactory object;
              static PyObject *wrap_Object(const BasicQueryFactory&);
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
