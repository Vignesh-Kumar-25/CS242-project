#ifndef org_apache_lucene_queryparser_classic_QueryParser_H
#define org_apache_lucene_queryparser_classic_QueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParserBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class BooleanClause;
      }
      namespace queryparser {
        namespace charstream {
          class CharStream;
        }
        namespace classic {
          class ParseException;
          class QueryParserTokenManager;
          class QueryParserConstants;
          class Token;
        }
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
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
        namespace classic {

          class QueryParser : public ::org::apache::lucene::queryparser::classic::QueryParserBase {
           public:
            enum {
              mid_init$_2dc91590b2674915,
              mid_Clause_940b9f2f8aee0aaa,
              mid_Conjunction_15aa3d485e96b665,
              mid_Modifiers_15aa3d485e96b665,
              mid_MultiTerm_77396bc3131ecbf9,
              mid_Query_940b9f2f8aee0aaa,
              mid_ReInit_a36e64a463ed841e,
              mid_ReInit_6aa24045d97cf6d3,
              mid_Term_940b9f2f8aee0aaa,
              mid_TopLevelQuery_940b9f2f8aee0aaa,
              mid_disable_tracing_3353d9f14bbfd91a,
              mid_enable_tracing_3353d9f14bbfd91a,
              mid_generateParseException_ecb9c4de8bfa310d,
              mid_getNextToken_2f7fbfef28548bde,
              mid_getSplitOnWhitespace_ee8b0a5fa521ddac,
              mid_getToken_ce47895685a284ce,
              mid_setAutoGeneratePhraseQueries_4f96af910856b303,
              mid_setSplitOnWhitespace_4f96af910856b303,
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

            explicit QueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::QueryParserBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryParser(const QueryParser& obj) : ::org::apache::lucene::queryparser::classic::QueryParserBase(obj) {}

            static jboolean DEFAULT_SPLIT_ON_WHITESPACE;

            ::org::apache::lucene::queryparser::classic::Token _get_jj_nt() const;
            void _set_jj_nt(const ::org::apache::lucene::queryparser::classic::Token &) const;
            ::org::apache::lucene::queryparser::classic::Token _get_token() const;
            void _set_token(const ::org::apache::lucene::queryparser::classic::Token &) const;
            ::org::apache::lucene::queryparser::classic::QueryParserTokenManager _get_token_source() const;
            void _set_token_source(const ::org::apache::lucene::queryparser::classic::QueryParserTokenManager &) const;

            QueryParser(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);

            ::org::apache::lucene::search::Query Clause(const ::java::lang::String &) const;
            jint Conjunction() const;
            jint Modifiers() const;
            ::org::apache::lucene::search::Query MultiTerm(const ::java::lang::String &, const ::java::util::List &) const;
            ::org::apache::lucene::search::Query Query(const ::java::lang::String &) const;
            void ReInit(const ::org::apache::lucene::queryparser::classic::QueryParserTokenManager &) const;
            void ReInit(const ::org::apache::lucene::queryparser::charstream::CharStream &) const;
            ::org::apache::lucene::search::Query Term(const ::java::lang::String &) const;
            ::org::apache::lucene::search::Query TopLevelQuery(const ::java::lang::String &) const;
            void disable_tracing() const;
            void enable_tracing() const;
            ::org::apache::lucene::queryparser::classic::ParseException generateParseException() const;
            ::org::apache::lucene::queryparser::classic::Token getNextToken() const;
            jboolean getSplitOnWhitespace() const;
            ::org::apache::lucene::queryparser::classic::Token getToken(jint) const;
            void setAutoGeneratePhraseQueries(jboolean) const;
            void setSplitOnWhitespace(jboolean) const;
            jboolean trace_enabled() const;
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
        namespace classic {
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

#endif
