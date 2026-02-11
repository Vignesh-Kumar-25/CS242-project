#ifndef org_apache_pylucene_analysis_PythonTokenizer_H
#define org_apache_pylucene_analysis_PythonTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {

        class PythonTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_finalize_3353d9f14bbfd91a,
            mid_incrementToken_ee8b0a5fa521ddac,
            mid_pythonDecRef_3353d9f14bbfd91a,
            mid_pythonExtension_058f5911dcf5d8a4,
            mid_pythonExtension_db2028ac45cd5b77,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonTokenizer(const PythonTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

          PythonTokenizer();

          void finalize() const;
          jboolean incrementToken() const;
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
        extern PyType_Def PY_TYPE_DEF(PythonTokenizer);
        extern PyTypeObject *PY_TYPE(PythonTokenizer);

        class t_PythonTokenizer {
        public:
          PyObject_HEAD
          PythonTokenizer object;
          static PyObject *wrap_Object(const PythonTokenizer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
