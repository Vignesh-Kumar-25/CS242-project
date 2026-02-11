#ifndef org_apache_lucene_queryparser_xml_QueryBuilderFactory_H
#define org_apache_lucene_queryparser_xml_QueryBuilderFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace xml {
          class QueryBuilder;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {

          class QueryBuilderFactory : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_addBuilder_499f9d754f12c3b1,
              mid_getQueryBuilder_85758d77664248df,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryBuilderFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryBuilderFactory(const QueryBuilderFactory& obj) : ::java::lang::Object(obj) {}

            QueryBuilderFactory();

            void addBuilder(const ::java::lang::String &, const ::org::apache::lucene::queryparser::xml::QueryBuilder &) const;
            ::org::apache::lucene::queryparser::xml::QueryBuilder getQueryBuilder(const ::java::lang::String &) const;
          };
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
        namespace xml {
          extern PyType_Def PY_TYPE_DEF(QueryBuilderFactory);
          extern PyTypeObject *PY_TYPE(QueryBuilderFactory);

          class t_QueryBuilderFactory {
          public:
            PyObject_HEAD
            QueryBuilderFactory object;
            static PyObject *wrap_Object(const QueryBuilderFactory&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
