#ifndef org_apache_lucene_facet_range_DoubleRangeFacetCounts_H
#define org_apache_lucene_facet_range_DoubleRangeFacetCounts_H

#include "org/apache/lucene/facet/range/RangeFacetCounts.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class DoubleValuesSource;
      }
      namespace facet {
        class MultiDoubleValuesSource;
        namespace range {
          class DoubleRange;
        }
        class FacetsCollector;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {

          class DoubleRangeFacetCounts : public ::org::apache::lucene::facet::range::RangeFacetCounts {
           public:
            enum {
              mid_init$_acc3f8d05db762cd,
              mid_init$_dac6380d7c2a599e,
              mid_init$_6c9a66e5a1135f8e,
              mid_init$_7c3087409ce1a367,
              mid_init$_d89f51911c15abf4,
              mid_getLongRanges_c36a18e2bb1f6997,
              mid_mapDocValue_df4b83f9c1b9d174,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DoubleRangeFacetCounts(jobject obj) : ::org::apache::lucene::facet::range::RangeFacetCounts(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DoubleRangeFacetCounts(const DoubleRangeFacetCounts& obj) : ::org::apache::lucene::facet::range::RangeFacetCounts(obj) {}

            DoubleRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::DoubleRange > &);
            DoubleRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::MultiDoubleValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::DoubleRange > &);
            DoubleRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::search::DoubleValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::DoubleRange > &);
            DoubleRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::MultiDoubleValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::facet::range::DoubleRange > &);
            DoubleRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::search::DoubleValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::facet::range::DoubleRange > &);
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
        namespace range {
          extern PyType_Def PY_TYPE_DEF(DoubleRangeFacetCounts);
          extern PyTypeObject *PY_TYPE(DoubleRangeFacetCounts);

          class t_DoubleRangeFacetCounts {
          public:
            PyObject_HEAD
            DoubleRangeFacetCounts object;
            static PyObject *wrap_Object(const DoubleRangeFacetCounts&);
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
