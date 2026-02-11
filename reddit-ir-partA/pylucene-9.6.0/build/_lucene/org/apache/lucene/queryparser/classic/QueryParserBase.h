#ifndef org_apache_lucene_queryparser_classic_QueryParserBase_H
#define org_apache_lucene_queryparser_classic_QueryParserBase_H

#include "org/apache/lucene/util/QueryBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class MultiTermQuery$RewriteMethod;
      }
      namespace queryparser {
        namespace charstream {
          class CharStream;
        }
        namespace classic {
          class ParseException;
          class QueryParser$Operator;
        }
        namespace flexible {
          namespace standard {
            class CommonQueryParserConfiguration;
          }
        }
      }
      namespace analysis {
        class Analyzer;
      }
      namespace document {
        class DateTools$Resolution;
      }
    }
  }
}
namespace java {
  namespace util {
    class TimeZone;
    class Locale;
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

          class QueryParserBase : public ::org::apache::lucene::util::QueryBuilder {
           public:
            enum {
              mid_ReInit_6aa24045d97cf6d3,
              mid_TopLevelQuery_940b9f2f8aee0aaa,
              mid_escape_04612c8360f09496,
              mid_getAllowLeadingWildcard_ee8b0a5fa521ddac,
              mid_getAutoGeneratePhraseQueries_ee8b0a5fa521ddac,
              mid_getDateResolution_6e443cde039fe39f,
              mid_getDefaultOperator_a2c90fec12e06ea4,
              mid_getDeterminizeWorkLimit_15aa3d485e96b665,
              mid_getField_dc633f13a47328a8,
              mid_getFuzzyMinSim_15cd8574741b1394,
              mid_getFuzzyPrefixLength_15aa3d485e96b665,
              mid_getLocale_1b00a58345a82b2b,
              mid_getMultiTermRewriteMethod_f4906511f7fa38db,
              mid_getPhraseSlop_15aa3d485e96b665,
              mid_getTimeZone_61b7d58bc7f6c9d9,
              mid_init_2dc91590b2674915,
              mid_parse_940b9f2f8aee0aaa,
              mid_setAllowLeadingWildcard_4f96af910856b303,
              mid_setAutoGeneratePhraseQueries_4f96af910856b303,
              mid_setDateResolution_dff13f2378674d0e,
              mid_setDateResolution_be85699cc62dad0b,
              mid_setDefaultOperator_9712ce38b4402f58,
              mid_setDeterminizeWorkLimit_da425451c8de636b,
              mid_setFuzzyMinSim_354c036766ff84b4,
              mid_setFuzzyPrefixLength_da425451c8de636b,
              mid_setLocale_e8213851b17f2702,
              mid_setMultiTermRewriteMethod_21ec55f89b31b080,
              mid_setPhraseSlop_da425451c8de636b,
              mid_setTimeZone_9e38f0fe40f0619b,
              mid_addClause_39554d8824e25c22,
              mid_newRangeQuery_5e298fd9aeaf12ea,
              mid_getBooleanQuery_b531d56b1197b40a,
              mid_getFuzzyQuery_1e1d94ae57c788e4,
              mid_getPrefixQuery_8b970d057e017e30,
              mid_getRangeQuery_5e298fd9aeaf12ea,
              mid_getWildcardQuery_8b970d057e017e30,
              mid_getFieldQuery_fbf95c8fba42206c,
              mid_getFieldQuery_91f72ed1bdd76185,
              mid_getRegexpQuery_8b970d057e017e30,
              mid_addMultiTermClauses_3ebcbf43ec864e6c,
              mid_newFieldQuery_88569f797b73fc54,
              mid_newBooleanClause_a0cb2107cbc801dd,
              mid_newPrefixQuery_a9672d796c2c325e,
              mid_newRegexpQuery_a9672d796c2c325e,
              mid_newFuzzyQuery_5abf98ebdd37dd7c,
              mid_newMatchAllDocsQuery_0b32ec998a0c18fa,
              mid_newWildcardQuery_a9672d796c2c325e,
              mid_getFuzzyDistance_19526aa077a272d8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryParserBase(jobject obj) : ::org::apache::lucene::util::QueryBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryParserBase(const QueryParserBase& obj) : ::org::apache::lucene::util::QueryBuilder(obj) {}

            static ::org::apache::lucene::queryparser::classic::QueryParser$Operator *AND_OPERATOR;
            static ::org::apache::lucene::queryparser::classic::QueryParser$Operator *OR_OPERATOR;

            void ReInit(const ::org::apache::lucene::queryparser::charstream::CharStream &) const;
            ::org::apache::lucene::search::Query TopLevelQuery(const ::java::lang::String &) const;
            static ::java::lang::String escape(const ::java::lang::String &);
            jboolean getAllowLeadingWildcard() const;
            jboolean getAutoGeneratePhraseQueries() const;
            ::org::apache::lucene::document::DateTools$Resolution getDateResolution(const ::java::lang::String &) const;
            ::org::apache::lucene::queryparser::classic::QueryParser$Operator getDefaultOperator() const;
            jint getDeterminizeWorkLimit() const;
            ::java::lang::String getField() const;
            jfloat getFuzzyMinSim() const;
            jint getFuzzyPrefixLength() const;
            ::java::util::Locale getLocale() const;
            ::org::apache::lucene::search::MultiTermQuery$RewriteMethod getMultiTermRewriteMethod() const;
            jint getPhraseSlop() const;
            ::java::util::TimeZone getTimeZone() const;
            void init(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &) const;
            ::org::apache::lucene::search::Query parse(const ::java::lang::String &) const;
            void setAllowLeadingWildcard(jboolean) const;
            void setAutoGeneratePhraseQueries(jboolean) const;
            void setDateResolution(const ::org::apache::lucene::document::DateTools$Resolution &) const;
            void setDateResolution(const ::java::lang::String &, const ::org::apache::lucene::document::DateTools$Resolution &) const;
            void setDefaultOperator(const ::org::apache::lucene::queryparser::classic::QueryParser$Operator &) const;
            void setDeterminizeWorkLimit(jint) const;
            void setFuzzyMinSim(jfloat) const;
            void setFuzzyPrefixLength(jint) const;
            void setLocale(const ::java::util::Locale &) const;
            void setMultiTermRewriteMethod(const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &) const;
            void setPhraseSlop(jint) const;
            void setTimeZone(const ::java::util::TimeZone &) const;
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
          extern PyType_Def PY_TYPE_DEF(QueryParserBase);
          extern PyTypeObject *PY_TYPE(QueryParserBase);

          class t_QueryParserBase {
          public:
            PyObject_HEAD
            QueryParserBase object;
            static PyObject *wrap_Object(const QueryParserBase&);
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
