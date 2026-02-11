#ifndef org_apache_lucene_facet_FacetsCollector_H
#define org_apache_lucene_facet_FacetsCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TopDocs;
        class IndexSearcher;
        class Query;
        class ScoreDoc;
        class Sort;
        class TopFieldDocs;
        class Scorable;
        class Collector;
        class ScoreMode;
      }
      namespace facet {
        class FacetsCollector$MatchingDocs;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetsCollector : public ::org::apache::lucene::search::SimpleCollector {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_4f96af910856b303,
            mid_collect_da425451c8de636b,
            mid_getKeepScores_ee8b0a5fa521ddac,
            mid_getMatchingDocs_0bc66e960964b70a,
            mid_scoreMode_2c1f1f28428089a8,
            mid_search_5bbcb76e4c9e5818,
            mid_search_d71e40f1678ab5a1,
            mid_search_3235bbad2daf0ca9,
            mid_searchAfter_1256d741aac2cd57,
            mid_searchAfter_22000166955a7416,
            mid_searchAfter_dab9e91d097e0aae,
            mid_setScorer_dd6a8586263881d1,
            mid_doSetNextReader_c78364002bac1c56,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetsCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FacetsCollector(const FacetsCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

          FacetsCollector();
          FacetsCollector(jboolean);

          void collect(jint) const;
          jboolean getKeepScores() const;
          ::java::util::List getMatchingDocs() const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          static ::org::apache::lucene::search::TopDocs search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Collector &);
          static ::org::apache::lucene::search::TopFieldDocs search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, const ::org::apache::lucene::search::Collector &);
          static ::org::apache::lucene::search::TopFieldDocs search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, jboolean, const ::org::apache::lucene::search::Collector &);
          static ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Collector &);
          static ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, const ::org::apache::lucene::search::Collector &);
          static ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, jboolean, const ::org::apache::lucene::search::Collector &);
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(FacetsCollector);
        extern PyTypeObject *PY_TYPE(FacetsCollector);

        class t_FacetsCollector {
        public:
          PyObject_HEAD
          FacetsCollector object;
          static PyObject *wrap_Object(const FacetsCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
