#ifndef org_apache_lucene_facet_StringValueFacetCounts_H
#define org_apache_lucene_facet_StringValueFacetCounts_H

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
      namespace facet {
        class StringDocValuesReaderState;
        class FacetResult;
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

        class StringValueFacetCounts : public ::org::apache::lucene::facet::Facets {
         public:
          enum {
            mid_init$_9630ebd5d39cda80,
            mid_init$_8546fd7b44891d6d,
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

          explicit StringValueFacetCounts(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StringValueFacetCounts(const StringValueFacetCounts& obj) : ::org::apache::lucene::facet::Facets(obj) {}

          StringValueFacetCounts(const ::org::apache::lucene::facet::StringDocValuesReaderState &);
          StringValueFacetCounts(const ::org::apache::lucene::facet::StringDocValuesReaderState &, const ::org::apache::lucene::facet::FacetsCollector &);

          ::org::apache::lucene::facet::FacetResult getAllChildren(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          ::java::util::List getAllDims(jint) const;
          ::java::lang::Number getSpecificValue(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          ::org::apache::lucene::facet::FacetResult getTopChildren(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
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
        extern PyType_Def PY_TYPE_DEF(StringValueFacetCounts);
        extern PyTypeObject *PY_TYPE(StringValueFacetCounts);

        class t_StringValueFacetCounts {
        public:
          PyObject_HEAD
          StringValueFacetCounts object;
          static PyObject *wrap_Object(const StringValueFacetCounts&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
