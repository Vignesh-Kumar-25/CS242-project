#ifndef org_apache_lucene_facet_MultiFacets_H
#define org_apache_lucene_facet_MultiFacets_H

#include "org/apache/lucene/facet/Facets.h"

namespace java {
  namespace util {
    class Map;
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

        class MultiFacets : public ::org::apache::lucene::facet::Facets {
         public:
          enum {
            mid_init$_62c0fdc62292ffbf,
            mid_init$_285c3631770d0835,
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

          explicit MultiFacets(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiFacets(const MultiFacets& obj) : ::org::apache::lucene::facet::Facets(obj) {}

          MultiFacets(const ::java::util::Map &);
          MultiFacets(const ::java::util::Map &, const ::org::apache::lucene::facet::Facets &);

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
        extern PyType_Def PY_TYPE_DEF(MultiFacets);
        extern PyTypeObject *PY_TYPE(MultiFacets);

        class t_MultiFacets {
        public:
          PyObject_HEAD
          MultiFacets object;
          static PyObject *wrap_Object(const MultiFacets&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
