#ifndef org_apache_lucene_facet_facetset_MatchingFacetSetsCounts_H
#define org_apache_lucene_facet_facetset_MatchingFacetSetsCounts_H

#include "org/apache/lucene/facet/FacetCountsWithFilterQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace facet {
        namespace facetset {
          class FacetSetMatcher;
          class FacetSetDecoder;
        }
        class FacetResult;
        class FacetsCollector;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Number;
    class Class;
    class String;
  }
  namespace util {
    class List;
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
        namespace facetset {

          class MatchingFacetSetsCounts : public ::org::apache::lucene::facet::FacetCountsWithFilterQuery {
           public:
            enum {
              mid_init$_559d7014e7497c93,
              mid_init$_e35329f4f85c1ec2,
              mid_getAllChildren_7a32bf04d26b2fde,
              mid_getAllDims_eec93c559a36079a,
              mid_getSpecificValue_b438f251795ca80a,
              mid_getTopChildren_887c01ada3be8648,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MatchingFacetSetsCounts(jobject obj) : ::org::apache::lucene::facet::FacetCountsWithFilterQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MatchingFacetSetsCounts(const MatchingFacetSetsCounts& obj) : ::org::apache::lucene::facet::FacetCountsWithFilterQuery(obj) {}

            MatchingFacetSetsCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::facet::facetset::FacetSetDecoder &, const JArray< ::org::apache::lucene::facet::facetset::FacetSetMatcher > &);
            MatchingFacetSetsCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::facet::facetset::FacetSetDecoder &, const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::facet::facetset::FacetSetMatcher > &);

            ::org::apache::lucene::facet::FacetResult getAllChildren(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::java::util::List getAllDims(jint) const;
            ::java::lang::Number getSpecificValue(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::facet::FacetResult getTopChildren(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace facetset {
          extern PyType_Def PY_TYPE_DEF(MatchingFacetSetsCounts);
          extern PyTypeObject *PY_TYPE(MatchingFacetSetsCounts);

          class t_MatchingFacetSetsCounts {
          public:
            PyObject_HEAD
            MatchingFacetSetsCounts object;
            static PyObject *wrap_Object(const MatchingFacetSetsCounts&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
