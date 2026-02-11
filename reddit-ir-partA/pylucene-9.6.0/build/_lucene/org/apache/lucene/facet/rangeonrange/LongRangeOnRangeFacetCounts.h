#ifndef org_apache_lucene_facet_rangeonrange_LongRangeOnRangeFacetCounts_H
#define org_apache_lucene_facet_rangeonrange_LongRangeOnRangeFacetCounts_H

#include "org/apache/lucene/facet/rangeonrange/RangeOnRangeFacetCounts.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace document {
        class RangeFieldQuery$QueryType;
      }
      namespace facet {
        namespace rangeonrange {
          class LongRange;
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
        namespace rangeonrange {

          class LongRangeOnRangeFacetCounts : public ::org::apache::lucene::facet::rangeonrange::RangeOnRangeFacetCounts {
           public:
            enum {
              mid_init$_1ff09fc9623bcc72,
              mid_init$_3e951606e12ff82e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongRangeOnRangeFacetCounts(jobject obj) : ::org::apache::lucene::facet::rangeonrange::RangeOnRangeFacetCounts(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongRangeOnRangeFacetCounts(const LongRangeOnRangeFacetCounts& obj) : ::org::apache::lucene::facet::rangeonrange::RangeOnRangeFacetCounts(obj) {}

            LongRangeOnRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::document::RangeFieldQuery$QueryType &, const JArray< ::org::apache::lucene::facet::rangeonrange::LongRange > &);
            LongRangeOnRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::document::RangeFieldQuery$QueryType &, const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::facet::rangeonrange::LongRange > &);
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
        namespace rangeonrange {
          extern PyType_Def PY_TYPE_DEF(LongRangeOnRangeFacetCounts);
          extern PyTypeObject *PY_TYPE(LongRangeOnRangeFacetCounts);

          class t_LongRangeOnRangeFacetCounts {
          public:
            PyObject_HEAD
            LongRangeOnRangeFacetCounts object;
            static PyObject *wrap_Object(const LongRangeOnRangeFacetCounts&);
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
