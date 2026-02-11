#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacets_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacets_H

#include "org/apache/lucene/facet/Facets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetResult;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
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
        namespace taxonomy {

          class TaxonomyFacets : public ::org::apache::lucene::facet::Facets {
           public:
            enum {
              mid_childrenLoaded_ee8b0a5fa521ddac,
              mid_getAllDims_eec93c559a36079a,
              mid_siblingsLoaded_ee8b0a5fa521ddac,
              mid_getSiblings_7880494ffe2d4089,
              mid_verifyDim_1409ad580aca290f,
              mid_getChildren_7880494ffe2d4089,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyFacets(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacets(const TaxonomyFacets& obj) : ::org::apache::lucene::facet::Facets(obj) {}

            jboolean childrenLoaded() const;
            ::java::util::List getAllDims(jint) const;
            jboolean siblingsLoaded() const;
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
        namespace taxonomy {
          extern PyType_Def PY_TYPE_DEF(TaxonomyFacets);
          extern PyTypeObject *PY_TYPE(TaxonomyFacets);

          class t_TaxonomyFacets {
          public:
            PyObject_HEAD
            TaxonomyFacets object;
            static PyObject *wrap_Object(const TaxonomyFacets&);
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
