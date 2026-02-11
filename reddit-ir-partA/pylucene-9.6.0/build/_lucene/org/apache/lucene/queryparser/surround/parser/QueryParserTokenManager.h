#ifndef org_apache_lucene_queryparser_surround_parser_QueryParserTokenManager_H
#define org_apache_lucene_queryparser_surround_parser_QueryParserTokenManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace charstream {
          class CharStream;
        }
        namespace surround {
          namespace parser {
            class QueryParserConstants;
            class Token;
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
        namespace surround {
          namespace parser {

            class QueryParserTokenManager : public ::java::lang::Object {
             public:
              enum {
                mid_init$_6aa24045d97cf6d3,
                mid_init$_5aa547bc60f6facd,
                mid_ReInit_6aa24045d97cf6d3,
                mid_ReInit_5aa547bc60f6facd,
                mid_SwitchTo_da425451c8de636b,
                mid_getNextToken_2feb0b51cee8996c,
                mid_jjFillToken_2feb0b51cee8996c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryParserTokenManager(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryParserTokenManager(const QueryParserTokenManager& obj) : ::java::lang::Object(obj) {}

              static JArray< jint > *jjnewLexState;
              static JArray< ::java::lang::String > *jjstrLiteralImages;
              static JArray< ::java::lang::String > *lexStateNames;

              QueryParserTokenManager(const ::org::apache::lucene::queryparser::charstream::CharStream &);
              QueryParserTokenManager(const ::org::apache::lucene::queryparser::charstream::CharStream &, jint);

              void ReInit(const ::org::apache::lucene::queryparser::charstream::CharStream &) const;
              void ReInit(const ::org::apache::lucene::queryparser::charstream::CharStream &, jint) const;
              void SwitchTo(jint) const;
              ::org::apache::lucene::queryparser::surround::parser::Token getNextToken() const;
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
          namespace parser {
            extern PyType_Def PY_TYPE_DEF(QueryParserTokenManager);
            extern PyTypeObject *PY_TYPE(QueryParserTokenManager);

            class t_QueryParserTokenManager {
            public:
              PyObject_HEAD
              QueryParserTokenManager object;
              static PyObject *wrap_Object(const QueryParserTokenManager&);
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
