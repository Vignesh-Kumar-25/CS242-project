#ifndef org_apache_pylucene_analysis_PythonAnalyzer_H
#define org_apache_pylucene_analysis_PythonAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
  namespace io {
    class Reader;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer$TokenStreamComponents;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {

        class PythonAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_createComponents_ecc168e883a13e3a,
            mid_finalize_3353d9f14bbfd91a,
            mid_initReader_40892a63dfcc19ab,
            mid_pythonDecRef_3353d9f14bbfd91a,
            mid_pythonExtension_058f5911dcf5d8a4,
            mid_pythonExtension_db2028ac45cd5b77,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAnalyzer(const PythonAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

          PythonAnalyzer();

          ::org::apache::lucene::analysis::Analyzer$TokenStreamComponents createComponents(const ::java::lang::String &) const;
          void finalize() const;
          ::java::io::Reader initReader(const ::java::lang::String &, const ::java::io::Reader &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(PythonAnalyzer);
        extern PyTypeObject *PY_TYPE(PythonAnalyzer);

        class t_PythonAnalyzer {
        public:
          PyObject_HEAD
          PythonAnalyzer object;
          static PyObject *wrap_Object(const PythonAnalyzer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
