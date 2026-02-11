#ifndef org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParserTokenManager_H
#define org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParserTokenManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace charstream {
          class CharStream;
        }
        namespace flexible {
          namespace standard {
            namespace parser {
              class StandardSyntaxParserConstants;
              class Token;
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
          namespace standard {
            namespace parser {

              class StandardSyntaxParserTokenManager : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_6aa24045d97cf6d3,
                  mid_init$_5aa547bc60f6facd,
                  mid_ReInit_6aa24045d97cf6d3,
                  mid_ReInit_5aa547bc60f6facd,
                  mid_SwitchTo_da425451c8de636b,
                  mid_getNextToken_2da0ef6c265b1d0c,
                  mid_jjFillToken_2da0ef6c265b1d0c,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StandardSyntaxParserTokenManager(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                StandardSyntaxParserTokenManager(const StandardSyntaxParserTokenManager& obj) : ::java::lang::Object(obj) {}

                static JArray< jint > *jjnewLexState;
                static JArray< ::java::lang::String > *jjstrLiteralImages;
                static JArray< ::java::lang::String > *lexStateNames;

                StandardSyntaxParserTokenManager(const ::org::apache::lucene::queryparser::charstream::CharStream &);
                StandardSyntaxParserTokenManager(const ::org::apache::lucene::queryparser::charstream::CharStream &, jint);

                void ReInit(const ::org::apache::lucene::queryparser::charstream::CharStream &) const;
                void ReInit(const ::org::apache::lucene::queryparser::charstream::CharStream &, jint) const;
                void SwitchTo(jint) const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::Token getNextToken() const;
              };
            }
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
          namespace standard {
            namespace parser {
              extern PyType_Def PY_TYPE_DEF(StandardSyntaxParserTokenManager);
              extern PyTypeObject *PY_TYPE(StandardSyntaxParserTokenManager);

              class t_StandardSyntaxParserTokenManager {
              public:
                PyObject_HEAD
                StandardSyntaxParserTokenManager object;
                static PyObject *wrap_Object(const StandardSyntaxParserTokenManager&);
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
}

#endif
