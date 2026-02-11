#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacetFloatAssociations_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacetFloatAssociations_H

#include "org/apache/lucene/facet/taxonomy/FloatTaxonomyFacets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class AssociationAggregationFunction;
          class OrdinalsReader;
          class TaxonomyReader;
        }
        class FacetsConfig;
        class FacetsCollector;
      }
      namespace search {
        class DoubleValuesSource;
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

          class TaxonomyFacetFloatAssociations : public ::org::apache::lucene::facet::taxonomy::FloatTaxonomyFacets {
           public:
            enum {
              mid_init$_962ca08d9b767896,
              mid_init$_59efa7daaba8d182,
              mid_init$_1c5b9fed97d4e96a,
              mid_init$_a6990c2d9fcd9ce7,
              mid_init$_048f16700f26ece2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyFacetFloatAssociations(jobject obj) : ::org::apache::lucene::facet::taxonomy::FloatTaxonomyFacets(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacetFloatAssociations(const TaxonomyFacetFloatAssociations& obj) : ::org::apache::lucene::facet::taxonomy::FloatTaxonomyFacets(obj) {}

            TaxonomyFacetFloatAssociations(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::facet::taxonomy::AssociationAggregationFunction &);
            TaxonomyFacetFloatAssociations(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::facet::taxonomy::AssociationAggregationFunction &, const ::org::apache::lucene::search::DoubleValuesSource &);
            TaxonomyFacetFloatAssociations(const ::java::lang::String &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::facet::taxonomy::AssociationAggregationFunction &);
            TaxonomyFacetFloatAssociations(const ::java::lang::String &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::facet::taxonomy::AssociationAggregationFunction &, const ::org::apache::lucene::search::DoubleValuesSource &);
            TaxonomyFacetFloatAssociations(const ::org::apache::lucene::facet::taxonomy::OrdinalsReader &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::facet::taxonomy::AssociationAggregationFunction &, const ::org::apache::lucene::search::DoubleValuesSource &);
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
          extern PyType_Def PY_TYPE_DEF(TaxonomyFacetFloatAssociations);
          extern PyTypeObject *PY_TYPE(TaxonomyFacetFloatAssociations);

          class t_TaxonomyFacetFloatAssociations {
          public:
            PyObject_HEAD
            TaxonomyFacetFloatAssociations object;
            static PyObject *wrap_Object(const TaxonomyFacetFloatAssociations&);
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
