#ifndef org_apache_lucene_facet_LongValueFacetCounts_H
#define org_apache_lucene_facet_LongValueFacetCounts_H

#include "org/apache/lucene/facet/Facets.h"

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
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LongValuesSource;
      }
      namespace index {
        class IndexReader;
      }
      namespace facet {
        class FacetResult;
        class MultiLongValuesSource;
        class FacetsCollector;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class LongValueFacetCounts : public ::org::apache::lucene::facet::Facets {
         public:
          enum {
            mid_init$_c16e26115a2291fc,
            mid_init$_73edbab75e2c7325,
            mid_init$_3cb50f6eb2740f8c,
            mid_init$_f731d4a6d10c24b5,
            mid_init$_269ad70fae84e5a6,
            mid_init$_00e12499ca950e61,
            mid_getAllChildren_7a32bf04d26b2fde,
            mid_getAllChildrenSortByValue_c34d780a4e96b018,
            mid_getAllDims_eec93c559a36079a,
            mid_getSpecificValue_b438f251795ca80a,
            mid_getTopChildren_887c01ada3be8648,
            mid_getTopChildrenSortByCount_6cc1d2a84e0077de,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongValueFacetCounts(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongValueFacetCounts(const LongValueFacetCounts& obj) : ::org::apache::lucene::facet::Facets(obj) {}

          LongValueFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &);
          LongValueFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::index::IndexReader &);
          LongValueFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::MultiLongValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &);
          LongValueFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::search::LongValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &);
          LongValueFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::MultiLongValuesSource &, const ::org::apache::lucene::index::IndexReader &);
          LongValueFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::search::LongValuesSource &, const ::org::apache::lucene::index::IndexReader &);

          ::org::apache::lucene::facet::FacetResult getAllChildren(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          ::org::apache::lucene::facet::FacetResult getAllChildrenSortByValue() const;
          ::java::util::List getAllDims(jint) const;
          ::java::lang::Number getSpecificValue(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          ::org::apache::lucene::facet::FacetResult getTopChildren(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          ::org::apache::lucene::facet::FacetResult getTopChildrenSortByCount(jint) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(LongValueFacetCounts);
        extern PyTypeObject *PY_TYPE(LongValueFacetCounts);

        class t_LongValueFacetCounts {
        public:
          PyObject_HEAD
          LongValueFacetCounts object;
          static PyObject *wrap_Object(const LongValueFacetCounts&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
