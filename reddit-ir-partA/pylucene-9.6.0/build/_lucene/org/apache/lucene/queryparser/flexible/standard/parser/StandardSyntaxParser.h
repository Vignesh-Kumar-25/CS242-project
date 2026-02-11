#ifndef org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParser_H
#define org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParser_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace charstream {
          class CharStream;
        }
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
            }
            namespace parser {
              class SyntaxParser;
            }
            class QueryNodeParseException;
          }
          namespace standard {
            namespace parser {
              class StandardSyntaxParserConstants;
              class StandardSyntaxParserTokenManager;
              class Token;
              class ParseException;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class CharSequence;
    class Class;
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

              class StandardSyntaxParser : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_3353d9f14bbfd91a,
                  mid_init$_44b48cb0ce40bddb,
                  mid_init$_6aa24045d97cf6d3,
                  mid_ReInit_44b48cb0ce40bddb,
                  mid_ReInit_6aa24045d97cf6d3,
                  mid_TopLevelQuery_df12062cfdf60435,
                  mid_disable_tracing_3353d9f14bbfd91a,
                  mid_enable_tracing_3353d9f14bbfd91a,
                  mid_generateParseException_618196de78dc6bc4,
                  mid_getNextToken_2da0ef6c265b1d0c,
                  mid_getToken_401c50d25c34b5aa,
                  mid_parse_2ce64589a6b16f10,
                  mid_parseFloat_649c2dede55836a8,
                  mid_parseInt_0aab249f8ca7ac23,
                  mid_trace_enabled_ee8b0a5fa521ddac,
                  max_mid
                };

                enum {
                  fid_jj_nt,
                  fid_token,
                  fid_token_source,
                  max_fid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static jfieldID *fids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StandardSyntaxParser(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                StandardSyntaxParser(const StandardSyntaxParser& obj) : ::java::lang::Object(obj) {}

                ::org::apache::lucene::queryparser::flexible::standard::parser::Token _get_jj_nt() const;
                void _set_jj_nt(const ::org::apache::lucene::queryparser::flexible::standard::parser::Token &) const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::Token _get_token() const;
                void _set_token(const ::org::apache::lucene::queryparser::flexible::standard::parser::Token &) const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::StandardSyntaxParserTokenManager _get_token_source() const;
                void _set_token_source(const ::org::apache::lucene::queryparser::flexible::standard::parser::StandardSyntaxParserTokenManager &) const;

                StandardSyntaxParser();
                StandardSyntaxParser(const ::org::apache::lucene::queryparser::flexible::standard::parser::StandardSyntaxParserTokenManager &);
                StandardSyntaxParser(const ::org::apache::lucene::queryparser::charstream::CharStream &);

                void ReInit(const ::org::apache::lucene::queryparser::flexible::standard::parser::StandardSyntaxParserTokenManager &) const;
                void ReInit(const ::org::apache::lucene::queryparser::charstream::CharStream &) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode TopLevelQuery(const ::java::lang::CharSequence &) const;
                void disable_tracing() const;
                void enable_tracing() const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::ParseException generateParseException() const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::Token getNextToken() const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::Token getToken(jint) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode parse(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
                static jfloat parseFloat(const ::org::apache::lucene::queryparser::flexible::standard::parser::Token &);
                static jint parseInt(const ::org::apache::lucene::queryparser::flexible::standard::parser::Token &);
                jboolean trace_enabled() const;
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
              extern PyType_Def PY_TYPE_DEF(StandardSyntaxParser);
              extern PyTypeObject *PY_TYPE(StandardSyntaxParser);

              class t_StandardSyntaxParser {
              public:
                PyObject_HEAD
                StandardSyntaxParser object;
                static PyObject *wrap_Object(const StandardSyntaxParser&);
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
