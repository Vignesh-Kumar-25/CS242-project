#ifndef org_apache_lucene_queryparser_flexible_standard_StandardQueryParser_H
#define org_apache_lucene_queryparser_flexible_standard_StandardQueryParser_H

#include "org/apache/lucene/queryparser/flexible/core/QueryParserHelper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class MultiTermQuery$RewriteMethod;
      }
      namespace queryparser {
        namespace flexible {
          namespace core {
            class QueryNodeException;
          }
          namespace standard {
            class CommonQueryParserConfiguration;
            namespace config {
              class PointsConfig;
              class StandardQueryConfigHandler$Operator;
            }
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
  namespace lang {
    class Float;
    class CharSequence;
    class Class;
    class String;
  }
  namespace util {
    class Map;
    class TimeZone;
    class Locale;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {

            class StandardQueryParser : public ::org::apache::lucene::queryparser::flexible::core::QueryParserHelper {
             public:
              enum {
                mid_init$_3353d9f14bbfd91a,
                mid_init$_cea12a5ff05f6816,
                mid_getAllowLeadingWildcard_ee8b0a5fa521ddac,
                mid_getAnalyzer_2e5841967e4c0700,
                mid_getDateResolution_f2814ac7e228b3aa,
                mid_getDateResolutionMap_19f838df22aacf85,
                mid_getDefaultOperator_ee3100f0f776f6d2,
                mid_getEnablePositionIncrements_ee8b0a5fa521ddac,
                mid_getFieldsBoost_19f838df22aacf85,
                mid_getFuzzyMinSim_15cd8574741b1394,
                mid_getFuzzyPrefixLength_15aa3d485e96b665,
                mid_getLocale_1b00a58345a82b2b,
                mid_getMultiFields_35aa799349ccc965,
                mid_getMultiTermRewriteMethod_f4906511f7fa38db,
                mid_getPhraseSlop_15aa3d485e96b665,
                mid_getPointsConfigMap_19f838df22aacf85,
                mid_getTimeZone_61b7d58bc7f6c9d9,
                mid_parse_8b970d057e017e30,
                mid_setAllowLeadingWildcard_4f96af910856b303,
                mid_setAnalyzer_cea12a5ff05f6816,
                mid_setDateResolution_dff13f2378674d0e,
                mid_setDateResolutionMap_62c0fdc62292ffbf,
                mid_setDefaultOperator_35038c502b41f2b1,
                mid_setEnablePositionIncrements_4f96af910856b303,
                mid_setFieldsBoost_62c0fdc62292ffbf,
                mid_setFuzzyMinSim_354c036766ff84b4,
                mid_setFuzzyPrefixLength_da425451c8de636b,
                mid_setLocale_e8213851b17f2702,
                mid_setMultiFields_929b6b409c756bef,
                mid_setMultiTermRewriteMethod_21ec55f89b31b080,
                mid_setPhraseSlop_da425451c8de636b,
                mid_setPointsConfigMap_62c0fdc62292ffbf,
                mid_setTimeZone_9e38f0fe40f0619b,
                mid_toString_dc633f13a47328a8,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit StandardQueryParser(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::QueryParserHelper(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              StandardQueryParser(const StandardQueryParser& obj) : ::org::apache::lucene::queryparser::flexible::core::QueryParserHelper(obj) {}

              StandardQueryParser();
              StandardQueryParser(const ::org::apache::lucene::analysis::Analyzer &);

              jboolean getAllowLeadingWildcard() const;
              ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
              ::org::apache::lucene::document::DateTools$Resolution getDateResolution() const;
              ::java::util::Map getDateResolutionMap() const;
              ::org::apache::lucene::queryparser::flexible::standard::config::StandardQueryConfigHandler$Operator getDefaultOperator() const;
              jboolean getEnablePositionIncrements() const;
              ::java::util::Map getFieldsBoost() const;
              jfloat getFuzzyMinSim() const;
              jint getFuzzyPrefixLength() const;
              ::java::util::Locale getLocale() const;
              JArray< ::java::lang::CharSequence > getMultiFields() const;
              ::org::apache::lucene::search::MultiTermQuery$RewriteMethod getMultiTermRewriteMethod() const;
              jint getPhraseSlop() const;
              ::java::util::Map getPointsConfigMap() const;
              ::java::util::TimeZone getTimeZone() const;
              ::org::apache::lucene::search::Query parse(const ::java::lang::String &, const ::java::lang::String &) const;
              void setAllowLeadingWildcard(jboolean) const;
              void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
              void setDateResolution(const ::org::apache::lucene::document::DateTools$Resolution &) const;
              void setDateResolutionMap(const ::java::util::Map &) const;
              void setDefaultOperator(const ::org::apache::lucene::queryparser::flexible::standard::config::StandardQueryConfigHandler$Operator &) const;
              void setEnablePositionIncrements(jboolean) const;
              void setFieldsBoost(const ::java::util::Map &) const;
              void setFuzzyMinSim(jfloat) const;
              void setFuzzyPrefixLength(jint) const;
              void setLocale(const ::java::util::Locale &) const;
              void setMultiFields(const JArray< ::java::lang::CharSequence > &) const;
              void setMultiTermRewriteMethod(const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &) const;
              void setPhraseSlop(jint) const;
              void setPointsConfigMap(const ::java::util::Map &) const;
              void setTimeZone(const ::java::util::TimeZone &) const;
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
        namespace flexible {
          namespace standard {
            extern PyType_Def PY_TYPE_DEF(StandardQueryParser);
            extern PyTypeObject *PY_TYPE(StandardQueryParser);

            class t_StandardQueryParser {
            public:
              PyObject_HEAD
              StandardQueryParser object;
              static PyObject *wrap_Object(const StandardQueryParser&);
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
