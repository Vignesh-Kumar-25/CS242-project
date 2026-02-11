#ifndef org_apache_lucene_queryparser_flexible_standard_CommonQueryParserConfiguration_H
#define org_apache_lucene_queryparser_flexible_standard_CommonQueryParserConfiguration_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class MultiTermQuery$RewriteMethod;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {

            class CommonQueryParserConfiguration : public ::java::lang::Object {
             public:
              enum {
                mid_getAllowLeadingWildcard_ee8b0a5fa521ddac,
                mid_getAnalyzer_2e5841967e4c0700,
                mid_getEnablePositionIncrements_ee8b0a5fa521ddac,
                mid_getFuzzyMinSim_15cd8574741b1394,
                mid_getFuzzyPrefixLength_15aa3d485e96b665,
                mid_getLocale_1b00a58345a82b2b,
                mid_getMultiTermRewriteMethod_f4906511f7fa38db,
                mid_getPhraseSlop_15aa3d485e96b665,
                mid_getTimeZone_61b7d58bc7f6c9d9,
                mid_setAllowLeadingWildcard_4f96af910856b303,
                mid_setDateResolution_dff13f2378674d0e,
                mid_setEnablePositionIncrements_4f96af910856b303,
                mid_setFuzzyMinSim_354c036766ff84b4,
                mid_setFuzzyPrefixLength_da425451c8de636b,
                mid_setLocale_e8213851b17f2702,
                mid_setMultiTermRewriteMethod_21ec55f89b31b080,
                mid_setPhraseSlop_da425451c8de636b,
                mid_setTimeZone_9e38f0fe40f0619b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CommonQueryParserConfiguration(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CommonQueryParserConfiguration(const CommonQueryParserConfiguration& obj) : ::java::lang::Object(obj) {}

              jboolean getAllowLeadingWildcard() const;
              ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
              jboolean getEnablePositionIncrements() const;
              jfloat getFuzzyMinSim() const;
              jint getFuzzyPrefixLength() const;
              ::java::util::Locale getLocale() const;
              ::org::apache::lucene::search::MultiTermQuery$RewriteMethod getMultiTermRewriteMethod() const;
              jint getPhraseSlop() const;
              ::java::util::TimeZone getTimeZone() const;
              void setAllowLeadingWildcard(jboolean) const;
              void setDateResolution(const ::org::apache::lucene::document::DateTools$Resolution &) const;
              void setEnablePositionIncrements(jboolean) const;
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
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            extern PyType_Def PY_TYPE_DEF(CommonQueryParserConfiguration);
            extern PyTypeObject *PY_TYPE(CommonQueryParserConfiguration);

            class t_CommonQueryParserConfiguration {
            public:
              PyObject_HEAD
              CommonQueryParserConfiguration object;
              static PyObject *wrap_Object(const CommonQueryParserConfiguration&);
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
