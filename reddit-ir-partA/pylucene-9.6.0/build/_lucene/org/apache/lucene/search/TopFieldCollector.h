#ifndef org_apache_lucene_search_TopFieldCollector_H
#define org_apache_lucene_search_TopFieldCollector_H

#include "org/apache/lucene/search/TopDocsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class CollectorManager;
        class Query;
        class IndexSearcher;
        class ScoreDoc;
        class TopFieldDocs;
        class FieldValueHitQueue$Entry;
        class Sort;
        class ScoreMode;
        class FieldDoc;
        class TopFieldCollector;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TopFieldCollector : public ::org::apache::lucene::search::TopDocsCollector {
         public:
          enum {
            mid_create_409aa8f51bdf8f26,
            mid_create_bf962614fe6e3418,
            mid_createSharedManager_ab7d72db2ce31912,
            mid_isEarlyTerminated_ee8b0a5fa521ddac,
            mid_populateScores_855d19fc41eab077,
            mid_scoreMode_2c1f1f28428089a8,
            mid_topDocs_8a684863a52c62ee,
            mid_updateGlobalMinCompetitiveScore_dd6a8586263881d1,
            mid_updateMinCompetitiveScore_dd6a8586263881d1,
            mid_populateResults_6b5c097e929076d0,
            mid_newTopDocs_9d803f831119b07b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopFieldCollector(jobject obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopFieldCollector(const TopFieldCollector& obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {}

          static TopFieldCollector create(const ::org::apache::lucene::search::Sort &, jint, jint);
          static TopFieldCollector create(const ::org::apache::lucene::search::Sort &, jint, const ::org::apache::lucene::search::FieldDoc &, jint);
          static ::org::apache::lucene::search::CollectorManager createSharedManager(const ::org::apache::lucene::search::Sort &, jint, const ::org::apache::lucene::search::FieldDoc &, jint);
          jboolean isEarlyTerminated() const;
          static void populateScores(const JArray< ::org::apache::lucene::search::ScoreDoc > &, const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &);
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          ::org::apache::lucene::search::TopFieldDocs topDocs() const;
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
        extern PyType_Def PY_TYPE_DEF(TopFieldCollector);
        extern PyTypeObject *PY_TYPE(TopFieldCollector);

        class t_TopFieldCollector {
        public:
          PyObject_HEAD
          TopFieldCollector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopFieldCollector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopFieldCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopFieldCollector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
