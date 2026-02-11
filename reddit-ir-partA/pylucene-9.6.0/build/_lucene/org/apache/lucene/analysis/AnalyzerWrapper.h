#ifndef org_apache_lucene_analysis_AnalyzerWrapper_H
#define org_apache_lucene_analysis_AnalyzerWrapper_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class AnalyzerWrapper : public ::org::apache::lucene::analysis::Analyzer {
         public:
          enum {
            mid_getOffsetGap_08c5dabd7f8f1590,
            mid_getPositionIncrementGap_08c5dabd7f8f1590,
            mid_initReader_40892a63dfcc19ab,
            mid_createComponents_ecc168e883a13e3a,
            mid_initReaderForNormalization_40892a63dfcc19ab,
            mid_attributeFactory_8aca54b1004f1d7f,
            mid_getWrappedAnalyzer_50c72b41f1379565,
            mid_wrapComponents_92412671c044cea7,
            mid_wrapReader_40892a63dfcc19ab,
            mid_wrapTokenStreamForNormalization_36f7d93b7e95e69a,
            mid_wrapReaderForNormalization_40892a63dfcc19ab,
            mid_normalize_36f7d93b7e95e69a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AnalyzerWrapper(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AnalyzerWrapper(const AnalyzerWrapper& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

          jint getOffsetGap(const ::java::lang::String &) const;
          jint getPositionIncrementGap(const ::java::lang::String &) const;
          ::java::io::Reader initReader(const ::java::lang::String &, const ::java::io::Reader &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(AnalyzerWrapper);
        extern PyTypeObject *PY_TYPE(AnalyzerWrapper);

        class t_AnalyzerWrapper {
        public:
          PyObject_HEAD
          AnalyzerWrapper object;
          static PyObject *wrap_Object(const AnalyzerWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
