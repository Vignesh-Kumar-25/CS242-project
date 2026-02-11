#ifndef org_apache_lucene_search_TopScoreDocCollector_H
#define org_apache_lucene_search_TopScoreDocCollector_H

#include "org/apache/lucene/search/TopDocsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class CollectorManager;
        class TopDocs;
        class ScoreDoc;
        class TopScoreDocCollector;
        class ScoreMode;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TopScoreDocCollector : public ::org::apache::lucene::search::TopDocsCollector {
         public:
          enum {
            mid_create_04a510a5064b5215,
            mid_create_776fcb05d631819a,
            mid_createSharedManager_286dece68eabc1a6,
            mid_scoreMode_2c1f1f28428089a8,
            mid_updateGlobalMinCompetitiveScore_dd6a8586263881d1,
            mid_updateMinCompetitiveScore_dd6a8586263881d1,
            mid_newTopDocs_9d803f831119b07b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopScoreDocCollector(jobject obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopScoreDocCollector(const TopScoreDocCollector& obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {}

          static TopScoreDocCollector create(jint, jint);
          static TopScoreDocCollector create(jint, const ::org::apache::lucene::search::ScoreDoc &, jint);
          static ::org::apache::lucene::search::CollectorManager createSharedManager(jint, const ::org::apache::lucene::search::ScoreDoc &, jint);
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(TopScoreDocCollector);
        extern PyTypeObject *PY_TYPE(TopScoreDocCollector);

        class t_TopScoreDocCollector {
        public:
          PyObject_HEAD
          TopScoreDocCollector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopScoreDocCollector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopScoreDocCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopScoreDocCollector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
