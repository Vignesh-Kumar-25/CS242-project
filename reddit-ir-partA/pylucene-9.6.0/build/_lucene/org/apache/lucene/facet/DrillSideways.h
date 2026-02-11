#ifndef org_apache_lucene_facet_DrillSideways_H
#define org_apache_lucene_facet_DrillSideways_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class CollectorManager;
        class Query;
        class IndexSearcher;
        class Sort;
        class ScoreDoc;
        class Collector;
        class FieldDoc;
      }
      namespace facet {
        class FacetsConfig;
        class DrillDownQuery;
        namespace taxonomy {
          class TaxonomyReader;
        }
        class DrillSideways$ConcurrentDrillSidewaysResult;
        class DrillSideways$DrillSidewaysResult;
        namespace sortedset {
          class SortedSetDocValuesReaderState;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    namespace concurrent {
      class ExecutorService;
    }
  }
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
      namespace facet {

        class DrillSideways : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3de8a0cfc976f3d4,
            mid_init$_007f833d303ccfd6,
            mid_init$_f9d63de11064bbb8,
            mid_init$_f6791a883c568aa6,
            mid_search_65549347d2b9779e,
            mid_search_d83af3807d85d0f1,
            mid_search_fe8ee988c0592639,
            mid_search_c4e04e05d90fd047,
            mid_search_1fd396dcbcf31f3c,
            mid_scoreSubDocsAtOnce_ee8b0a5fa521ddac,
            mid_createDrillDownFacetsCollector_3c1b33fcac78a464,
            mid_createDrillDownFacetsCollectorManager_5ee565152a01ff94,
            mid_buildFacetsResult_eb5e0b080ff80745,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DrillSideways(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DrillSideways(const DrillSideways& obj) : ::java::lang::Object(obj) {}

          DrillSideways(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &);
          DrillSideways(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &);
          DrillSideways(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &);
          DrillSideways(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &, const ::java::util::concurrent::ExecutorService &);

          ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult search(const ::org::apache::lucene::facet::DrillDownQuery &, jint) const;
          ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult search(const ::org::apache::lucene::facet::DrillDownQuery &, const ::org::apache::lucene::search::Collector &) const;
          ::org::apache::lucene::facet::DrillSideways$ConcurrentDrillSidewaysResult search(const ::org::apache::lucene::facet::DrillDownQuery &, const ::org::apache::lucene::search::CollectorManager &) const;
          ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult search(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::facet::DrillDownQuery &, jint) const;
          ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult search(const ::org::apache::lucene::facet::DrillDownQuery &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::FieldDoc &, jint, const ::org::apache::lucene::search::Sort &, jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(DrillSideways);
        extern PyTypeObject *PY_TYPE(DrillSideways);

        class t_DrillSideways {
        public:
          PyObject_HEAD
          DrillSideways object;
          static PyObject *wrap_Object(const DrillSideways&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
