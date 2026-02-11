#ifndef org_apache_lucene_queryparser_flexible_core_QueryParserHelper_H
#define org_apache_lucene_queryparser_flexible_core_QueryParserHelper_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            class QueryNodeException;
            namespace builders {
              class QueryBuilder;
            }
            namespace parser {
              class SyntaxParser;
            }
            namespace config {
              class QueryConfigHandler;
            }
            namespace processors {
              class QueryNodeProcessor;
            }
          }
        }
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
        namespace flexible {
          namespace core {

            class QueryParserHelper : public ::java::lang::Object {
             public:
              enum {
                mid_init$_afa634ea13370623,
                mid_getQueryBuilder_1b3b65a112edf467,
                mid_getQueryConfigHandler_512928cbb623ab42,
                mid_getQueryNodeProcessor_f4986fb624e68c0b,
                mid_getSyntaxParser_f85150a58321109f,
                mid_parse_e0b67cc35bc624c3,
                mid_setQueryBuilder_ca1e0eb0f888cf25,
                mid_setQueryConfigHandler_35db791de6b12627,
                mid_setQueryNodeProcessor_0c524d0d11c8e4ce,
                mid_setSyntaxParser_4a4a642fe9e014ec,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryParserHelper(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryParserHelper(const QueryParserHelper& obj) : ::java::lang::Object(obj) {}

              QueryParserHelper(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &, const ::org::apache::lucene::queryparser::flexible::core::parser::SyntaxParser &, const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &, const ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder &);

              ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder getQueryBuilder() const;
              ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler getQueryConfigHandler() const;
              ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor getQueryNodeProcessor() const;
              ::org::apache::lucene::queryparser::flexible::core::parser::SyntaxParser getSyntaxParser() const;
              ::java::lang::Object parse(const ::java::lang::String &, const ::java::lang::String &) const;
              void setQueryBuilder(const ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder &) const;
              void setQueryConfigHandler(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &) const;
              void setQueryNodeProcessor(const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &) const;
              void setSyntaxParser(const ::org::apache::lucene::queryparser::flexible::core::parser::SyntaxParser &) const;
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
        namespace flexible {
          namespace core {
            extern PyType_Def PY_TYPE_DEF(QueryParserHelper);
            extern PyTypeObject *PY_TYPE(QueryParserHelper);

            class t_QueryParserHelper {
            public:
              PyObject_HEAD
              QueryParserHelper object;
              static PyObject *wrap_Object(const QueryParserHelper&);
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
