#ifndef org_apache_lucene_queryparser_surround_parser_QueryParser_H
#define org_apache_lucene_queryparser_surround_parser_QueryParser_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class ArrayList;
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace charstream {
          class CharStream;
        }
        namespace surround {
          namespace query {
            class SrndQuery;
          }
          namespace parser {
            class QueryParserTokenManager;
            class ParseException;
            class QueryParserConstants;
            class Token;
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
          namespace parser {

            class QueryParser : public ::java::lang::Object {
             public:
              enum {
                mid_init$_3353d9f14bbfd91a,
                mid_init$_746a51b4bfb277bc,
                mid_init$_6aa24045d97cf6d3,
                mid_AndQuery_99640d1ff8d412e6,
                mid_FieldsQuery_99640d1ff8d412e6,
                mid_FieldsQueryList_0bc66e960964b70a,
                mid_NQuery_99640d1ff8d412e6,
                mid_NotQuery_99640d1ff8d412e6,
                mid_OptionalFields_543152908bcce3c4,
                mid_OptionalWeights_0d373e1d40d41ca6,
                mid_OrQuery_99640d1ff8d412e6,
                mid_PrefixOperatorQuery_99640d1ff8d412e6,
                mid_PrimaryQuery_99640d1ff8d412e6,
                mid_ReInit_746a51b4bfb277bc,
                mid_ReInit_6aa24045d97cf6d3,
                mid_SimpleTerm_99640d1ff8d412e6,
                mid_TopSrndQuery_99640d1ff8d412e6,
                mid_WQuery_99640d1ff8d412e6,
                mid_disable_tracing_3353d9f14bbfd91a,
                mid_enable_tracing_3353d9f14bbfd91a,
                mid_generateParseException_6be5321681df864f,
                mid_getNextToken_2feb0b51cee8996c,
                mid_getToken_d6fe53473dc333bb,
                mid_parse_519c23a95f872f26,
                mid_parse2_519c23a95f872f26,
                mid_trace_enabled_ee8b0a5fa521ddac,
                mid_getPrefixQuery_af3f82603e2ed3f9,
                mid_getFieldsQuery_482fb01167ba38ed,
                mid_getOrQuery_b41b27b67819297e,
                mid_getAndQuery_b41b27b67819297e,
                mid_getNotQuery_1248f0688929ca2c,
                mid_getOpDistance_08c5dabd7f8f1590,
                mid_checkDistanceSubQueries_4b7610897526af20,
                mid_getDistanceQuery_5772cba50617d0b7,
                mid_getTermQuery_af3f82603e2ed3f9,
                mid_allowedSuffix_77e0b5c3eb1962ba,
                mid_allowedTruncation_77e0b5c3eb1962ba,
                mid_getTruncQuery_519c23a95f872f26,
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

              explicit QueryParser(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryParser(const QueryParser& obj) : ::java::lang::Object(obj) {}

              ::org::apache::lucene::queryparser::surround::parser::Token _get_jj_nt() const;
              void _set_jj_nt(const ::org::apache::lucene::queryparser::surround::parser::Token &) const;
              ::org::apache::lucene::queryparser::surround::parser::Token _get_token() const;
              void _set_token(const ::org::apache::lucene::queryparser::surround::parser::Token &) const;
              ::org::apache::lucene::queryparser::surround::parser::QueryParserTokenManager _get_token_source() const;
              void _set_token_source(const ::org::apache::lucene::queryparser::surround::parser::QueryParserTokenManager &) const;

              QueryParser();
              QueryParser(const ::org::apache::lucene::queryparser::surround::parser::QueryParserTokenManager &);
              QueryParser(const ::org::apache::lucene::queryparser::charstream::CharStream &);

              ::org::apache::lucene::queryparser::surround::query::SrndQuery AndQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery FieldsQuery() const;
              ::java::util::List FieldsQueryList() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery NQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery NotQuery() const;
              ::java::util::ArrayList OptionalFields() const;
              void OptionalWeights(const ::org::apache::lucene::queryparser::surround::query::SrndQuery &) const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery OrQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery PrefixOperatorQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery PrimaryQuery() const;
              void ReInit(const ::org::apache::lucene::queryparser::surround::parser::QueryParserTokenManager &) const;
              void ReInit(const ::org::apache::lucene::queryparser::charstream::CharStream &) const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery SimpleTerm() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery TopSrndQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery WQuery() const;
              void disable_tracing() const;
              void enable_tracing() const;
              ::org::apache::lucene::queryparser::surround::parser::ParseException generateParseException() const;
              ::org::apache::lucene::queryparser::surround::parser::Token getNextToken() const;
              ::org::apache::lucene::queryparser::surround::parser::Token getToken(jint) const;
              static ::org::apache::lucene::queryparser::surround::query::SrndQuery parse(const ::java::lang::String &);
              ::org::apache::lucene::queryparser::surround::query::SrndQuery parse2(const ::java::lang::String &) const;
              jboolean trace_enabled() const;
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
            extern PyType_Def PY_TYPE_DEF(QueryParser);
            extern PyTypeObject *PY_TYPE(QueryParser);

            class t_QueryParser {
            public:
              PyObject_HEAD
              QueryParser object;
              static PyObject *wrap_Object(const QueryParser&);
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
