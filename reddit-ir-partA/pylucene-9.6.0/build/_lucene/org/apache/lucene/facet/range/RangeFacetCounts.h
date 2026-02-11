#ifndef org_apache_lucene_facet_range_RangeFacetCounts_H
#define org_apache_lucene_facet_range_RangeFacetCounts_H

#include "org/apache/lucene/facet/FacetCountsWithFilterQuery.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Number;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetResult;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {

          class RangeFacetCounts : public ::org::apache::lucene::facet::FacetCountsWithFilterQuery {
           public:
            enum {
              mid_getAllChildren_7a32bf04d26b2fde,
              mid_getAllDims_eec93c559a36079a,
              mid_getSpecificValue_b438f251795ca80a,
              mid_getTopChildren_887c01ada3be8648,
              mid_toString_dc633f13a47328a8,
              mid_getLongRanges_c36a18e2bb1f6997,
              mid_mapDocValue_df4b83f9c1b9d174,
              mid_count_236c4447d7a100de,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RangeFacetCounts(jobject obj) : ::org::apache::lucene::facet::FacetCountsWithFilterQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RangeFacetCounts(const RangeFacetCounts& obj) : ::org::apache::lucene::facet::FacetCountsWithFilterQuery(obj) {}

            ::org::apache::lucene::facet::FacetResult getAllChildren(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::java::util::List getAllDims(jint) const;
            ::java::lang::Number getSpecificValue(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::facet::FacetResult getTopChildren(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(RangeFacetCounts);
          extern PyTypeObject *PY_TYPE(RangeFacetCounts);

          class t_RangeFacetCounts {
          public:
            PyObject_HEAD
            RangeFacetCounts object;
            static PyObject *wrap_Object(const RangeFacetCounts&);
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
