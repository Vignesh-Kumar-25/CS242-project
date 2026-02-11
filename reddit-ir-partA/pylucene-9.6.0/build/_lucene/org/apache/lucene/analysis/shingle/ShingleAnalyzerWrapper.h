#ifndef org_apache_lucene_analysis_shingle_ShingleAnalyzerWrapper_H
#define org_apache_lucene_analysis_shingle_ShingleAnalyzerWrapper_H

#include "org/apache/lucene/analysis/AnalyzerWrapper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace shingle {

          class ShingleAnalyzerWrapper : public ::org::apache::lucene::analysis::AnalyzerWrapper {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_cea12a5ff05f6816,
              mid_init$_ff26fecf5704133d,
              mid_init$_078cef180abf5351,
              mid_init$_1ae30997a68b96e0,
              mid_init$_a1d01d24e46b7fcc,
              mid_getFillerToken_dc633f13a47328a8,
              mid_getMaxShingleSize_15aa3d485e96b665,
              mid_getMinShingleSize_15aa3d485e96b665,
              mid_getTokenSeparator_dc633f13a47328a8,
              mid_getWrappedAnalyzer_50c72b41f1379565,
              mid_isOutputUnigrams_ee8b0a5fa521ddac,
              mid_isOutputUnigramsIfNoShingles_ee8b0a5fa521ddac,
              mid_wrapComponents_92412671c044cea7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ShingleAnalyzerWrapper(jobject obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ShingleAnalyzerWrapper(const ShingleAnalyzerWrapper& obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {}

            ShingleAnalyzerWrapper();
            ShingleAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &);
            ShingleAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &, jint);
            ShingleAnalyzerWrapper(jint, jint);
            ShingleAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &, jint, jint);
            ShingleAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &, jint, jint, const ::java::lang::String &, jboolean, jboolean, const ::java::lang::String &);

            ::java::lang::String getFillerToken() const;
            jint getMaxShingleSize() const;
            jint getMinShingleSize() const;
            ::java::lang::String getTokenSeparator() const;
            ::org::apache::lucene::analysis::Analyzer getWrappedAnalyzer(const ::java::lang::String &) const;
            jboolean isOutputUnigrams() const;
            jboolean isOutputUnigramsIfNoShingles() const;
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
        namespace shingle {
          extern PyType_Def PY_TYPE_DEF(ShingleAnalyzerWrapper);
          extern PyTypeObject *PY_TYPE(ShingleAnalyzerWrapper);

          class t_ShingleAnalyzerWrapper {
          public:
            PyObject_HEAD
            ShingleAnalyzerWrapper object;
            static PyObject *wrap_Object(const ShingleAnalyzerWrapper&);
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
