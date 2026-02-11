#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacetSumIntAssociations_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacetSumIntAssociations_H

#include "org/apache/lucene/facet/taxonomy/TaxonomyFacetIntAssociations.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsConfig;
        namespace taxonomy {
          class TaxonomyReader;
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
        namespace taxonomy {

          class TaxonomyFacetSumIntAssociations : public ::org::apache::lucene::facet::taxonomy::TaxonomyFacetIntAssociations {
           public:
            enum {
              mid_init$_ee681335aba41167,
              mid_init$_ef18021e2691d265,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyFacetSumIntAssociations(jobject obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyFacetIntAssociations(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacetSumIntAssociations(const TaxonomyFacetSumIntAssociations& obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyFacetIntAssociations(obj) {}

            TaxonomyFacetSumIntAssociations(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &);
            TaxonomyFacetSumIntAssociations(const ::java::lang::String &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &);
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
          extern PyType_Def PY_TYPE_DEF(TaxonomyFacetSumIntAssociations);
          extern PyTypeObject *PY_TYPE(TaxonomyFacetSumIntAssociations);

          class t_TaxonomyFacetSumIntAssociations {
          public:
            PyObject_HEAD
            TaxonomyFacetSumIntAssociations object;
            static PyObject *wrap_Object(const TaxonomyFacetSumIntAssociations&);
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
