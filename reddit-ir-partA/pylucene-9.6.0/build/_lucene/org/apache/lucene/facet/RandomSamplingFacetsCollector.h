#ifndef org_apache_lucene_facet_RandomSamplingFacetsCollector_H
#define org_apache_lucene_facet_RandomSamplingFacetsCollector_H

#include "org/apache/lucene/facet/FacetsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class CollectorManager;
        class IndexSearcher;
      }
      namespace facet {
        class FacetsCollector$MatchingDocs;
        class FacetsConfig;
        class RandomSamplingFacetsCollector;
        class FacetResult;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
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

        class RandomSamplingFacetsCollector : public ::org::apache::lucene::facet::FacetsCollector {
         public:
          enum {
            mid_init$_da425451c8de636b,
            mid_init$_6d2742abed5d70c9,
            mid_amortizeFacetCounts_a137963169af0108,
            mid_createManager_d5a4bebd27fa1886,
            mid_getMatchingDocs_0bc66e960964b70a,
            mid_getOriginalMatchingDocs_0bc66e960964b70a,
            mid_getSamplingRate_409d010a7a53d0d1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RandomSamplingFacetsCollector(jobject obj) : ::org::apache::lucene::facet::FacetsCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RandomSamplingFacetsCollector(const RandomSamplingFacetsCollector& obj) : ::org::apache::lucene::facet::FacetsCollector(obj) {}

          RandomSamplingFacetsCollector(jint);
          RandomSamplingFacetsCollector(jint, jlong);

          ::org::apache::lucene::facet::FacetResult amortizeFacetCounts(const ::org::apache::lucene::facet::FacetResult &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::search::IndexSearcher &) const;
          static ::org::apache::lucene::search::CollectorManager createManager(jint, jlong);
          ::java::util::List getMatchingDocs() const;
          ::java::util::List getOriginalMatchingDocs() const;
          jdouble getSamplingRate() const;
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
        extern PyType_Def PY_TYPE_DEF(RandomSamplingFacetsCollector);
        extern PyTypeObject *PY_TYPE(RandomSamplingFacetsCollector);

        class t_RandomSamplingFacetsCollector {
        public:
          PyObject_HEAD
          RandomSamplingFacetsCollector object;
          static PyObject *wrap_Object(const RandomSamplingFacetsCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
