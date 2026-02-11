#ifndef org_apache_pylucene_search_PythonSimpleCollector_H
#define org_apache_pylucene_search_PythonSimpleCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

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
      namespace search {
        class Scorable;
        class ScoreMode;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {

        class PythonSimpleCollector : public ::org::apache::lucene::search::SimpleCollector {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_collect_da425451c8de636b,
            mid_collect_ad01d3552d962fe8,
            mid_doSetNextReader_c78364002bac1c56,
            mid_finalize_3353d9f14bbfd91a,
            mid_pythonDecRef_3353d9f14bbfd91a,
            mid_pythonExtension_058f5911dcf5d8a4,
            mid_pythonExtension_db2028ac45cd5b77,
            mid_scoreMode_2c1f1f28428089a8,
            mid_setScorer_dd6a8586263881d1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonSimpleCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonSimpleCollector(const PythonSimpleCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

          PythonSimpleCollector();

          void collect(jint) const;
          void collect(jint, jfloat) const;
          void doSetNextReader(const ::org::apache::lucene::index::LeafReaderContext &) const;
          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(PythonSimpleCollector);
        extern PyTypeObject *PY_TYPE(PythonSimpleCollector);

        class t_PythonSimpleCollector {
        public:
          PyObject_HEAD
          PythonSimpleCollector object;
          static PyObject *wrap_Object(const PythonSimpleCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
