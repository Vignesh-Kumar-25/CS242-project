#ifndef org_apache_lucene_analysis_custom_CustomAnalyzer_H
#define org_apache_lucene_analysis_custom_CustomAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace java {
  namespace util {
    class List;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenFilterFactory;
        class TokenizerFactory;
        namespace custom {
          class CustomAnalyzer$Builder;
        }
        class CharFilterFactory;
      }
      namespace util {
        class ResourceLoader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace custom {

          class CustomAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
           public:
            enum {
              mid_builder_357ba850c9b81784,
              mid_builder_67f5e23854ebf20b,
              mid_builder_06819762e1e64c87,
              mid_getCharFilterFactories_0bc66e960964b70a,
              mid_getOffsetGap_08c5dabd7f8f1590,
              mid_getPositionIncrementGap_08c5dabd7f8f1590,
              mid_getTokenFilterFactories_0bc66e960964b70a,
              mid_getTokenizerFactory_d710be0dedaad43b,
              mid_toString_dc633f13a47328a8,
              mid_createComponents_ecc168e883a13e3a,
              mid_initReader_40892a63dfcc19ab,
              mid_initReaderForNormalization_40892a63dfcc19ab,
              mid_normalize_36f7d93b7e95e69a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CustomAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CustomAnalyzer(const CustomAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

            static ::org::apache::lucene::analysis::custom::CustomAnalyzer$Builder builder();
            static ::org::apache::lucene::analysis::custom::CustomAnalyzer$Builder builder(const ::java::nio::file::Path &);
            static ::org::apache::lucene::analysis::custom::CustomAnalyzer$Builder builder(const ::org::apache::lucene::util::ResourceLoader &);
            ::java::util::List getCharFilterFactories() const;
            jint getOffsetGap(const ::java::lang::String &) const;
            jint getPositionIncrementGap(const ::java::lang::String &) const;
            ::java::util::List getTokenFilterFactories() const;
            ::org::apache::lucene::analysis::TokenizerFactory getTokenizerFactory() const;
            ::java::lang::String toString() const;
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
      namespace analysis {
        namespace custom {
          extern PyType_Def PY_TYPE_DEF(CustomAnalyzer);
          extern PyTypeObject *PY_TYPE(CustomAnalyzer);

          class t_CustomAnalyzer {
          public:
            PyObject_HEAD
            CustomAnalyzer object;
            static PyObject *wrap_Object(const CustomAnalyzer&);
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
