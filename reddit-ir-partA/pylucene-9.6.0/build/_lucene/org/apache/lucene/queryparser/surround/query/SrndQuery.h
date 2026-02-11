#ifndef org_apache_lucene_queryparser_surround_query_SrndQuery_H
#define org_apache_lucene_queryparser_surround_query_SrndQuery_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace surround {
          namespace query {
            class SrndQuery;
            class BasicQueryFactory;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Cloneable;
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

            class SrndQuery : public ::java::lang::Object {
             public:
              enum {
                mid_init$_3353d9f14bbfd91a,
                mid_clone_99640d1ff8d412e6,
                mid_equals_6084f78e09b6c0c3,
                mid_getWeight_15cd8574741b1394,
                mid_getWeightOperator_dc633f13a47328a8,
                mid_getWeightString_dc633f13a47328a8,
                mid_hashCode_15aa3d485e96b665,
                mid_isFieldsSubQueryAcceptable_ee8b0a5fa521ddac,
                mid_isWeighted_ee8b0a5fa521ddac,
                mid_makeLuceneQueryField_75a2ee89a74eef95,
                mid_makeLuceneQueryFieldNoBoost_75a2ee89a74eef95,
                mid_setWeight_354c036766ff84b4,
                mid_toString_dc633f13a47328a8,
                mid_weightToString_94e20f3c4a3e724b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SrndQuery(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SrndQuery(const SrndQuery& obj) : ::java::lang::Object(obj) {}

              SrndQuery();

              SrndQuery clone() const;
              jboolean equals(const ::java::lang::Object &) const;
              jfloat getWeight() const;
              ::java::lang::String getWeightOperator() const;
              ::java::lang::String getWeightString() const;
              jint hashCode() const;
              jboolean isFieldsSubQueryAcceptable() const;
              jboolean isWeighted() const;
              ::org::apache::lucene::search::Query makeLuceneQueryField(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              void setWeight(jfloat) const;
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
            extern PyType_Def PY_TYPE_DEF(SrndQuery);
            extern PyTypeObject *PY_TYPE(SrndQuery);

            class t_SrndQuery {
            public:
              PyObject_HEAD
              SrndQuery object;
              static PyObject *wrap_Object(const SrndQuery&);
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
