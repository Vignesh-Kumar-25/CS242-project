#ifndef org_apache_pylucene_analysis_PythonFilteringTokenFilter_H
#define org_apache_pylucene_analysis_PythonFilteringTokenFilter_H

#include "org/apache/lucene/analysis/FilteringTokenFilter.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {

        class PythonFilteringTokenFilter : public ::org::apache::lucene::analysis::FilteringTokenFilter {
         public:
          enum {
            mid_init$_ceb0c1d5a3508f22,
            mid_accept_ee8b0a5fa521ddac,
            mid_finalize_3353d9f14bbfd91a,
            mid_pythonDecRef_3353d9f14bbfd91a,
            mid_pythonExtension_058f5911dcf5d8a4,
            mid_pythonExtension_db2028ac45cd5b77,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonFilteringTokenFilter(jobject obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonFilteringTokenFilter(const PythonFilteringTokenFilter& obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {}

          PythonFilteringTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);

          jboolean accept() const;
          void finalize() const;
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
        extern PyType_Def PY_TYPE_DEF(PythonFilteringTokenFilter);
        extern PyTypeObject *PY_TYPE(PythonFilteringTokenFilter);

        class t_PythonFilteringTokenFilter {
        public:
          PyObject_HEAD
          PythonFilteringTokenFilter object;
          static PyObject *wrap_Object(const PythonFilteringTokenFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
