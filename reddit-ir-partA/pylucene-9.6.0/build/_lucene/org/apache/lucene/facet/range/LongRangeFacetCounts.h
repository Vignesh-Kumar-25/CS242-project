#ifndef org_apache_lucene_facet_range_LongRangeFacetCounts_H
#define org_apache_lucene_facet_range_LongRangeFacetCounts_H

#include "org/apache/lucene/facet/range/RangeFacetCounts.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class LongValuesSource;
      }
      namespace facet {
        namespace range {
          class LongRange;
        }
        class MultiLongValuesSource;
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

          class LongRangeFacetCounts : public ::org::apache::lucene::facet::range::RangeFacetCounts {
           public:
            enum {
              mid_init$_b4815bd6f866e192,
              mid_init$_5839981988a218ab,
              mid_init$_dc323e351df3d1b2,
              mid_init$_258c115c9c757eb4,
              mid_init$_63141fc11dbb1ff0,
              mid_getLongRanges_c36a18e2bb1f6997,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongRangeFacetCounts(jobject obj) : ::org::apache::lucene::facet::range::RangeFacetCounts(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongRangeFacetCounts(const LongRangeFacetCounts& obj) : ::org::apache::lucene::facet::range::RangeFacetCounts(obj) {}

            LongRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::LongRange > &);
            LongRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::MultiLongValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::LongRange > &);
            LongRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::search::LongValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::LongRange > &);
            LongRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::MultiLongValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::facet::range::LongRange > &);
            LongRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::search::LongValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::facet::range::LongRange > &);
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
          extern PyType_Def PY_TYPE_DEF(LongRangeFacetCounts);
          extern PyTypeObject *PY_TYPE(LongRangeFacetCounts);

          class t_LongRangeFacetCounts {
          public:
            PyObject_HEAD
            LongRangeFacetCounts object;
            static PyObject *wrap_Object(const LongRangeFacetCounts&);
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
