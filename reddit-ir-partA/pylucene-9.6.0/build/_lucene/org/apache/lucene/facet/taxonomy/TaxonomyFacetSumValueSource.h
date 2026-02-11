#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacetSumValueSource_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacetSumValueSource_H

#include "org/apache/lucene/facet/taxonomy/TaxonomyFacetFloatAssociations.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsConfig;
        namespace taxonomy {
          class OrdinalsReader;
          class TaxonomyReader;
        }
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

          class TaxonomyFacetSumValueSource : public ::org::apache::lucene::facet::taxonomy::TaxonomyFacetFloatAssociations {
           public:
            enum {
              mid_init$_9d25c7388ac0f828,
              mid_init$_6b3e1fd8fd2e896e,
              mid_init$_ef538d1ba971ae69,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyFacetSumValueSource(jobject obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyFacetFloatAssociations(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacetSumValueSource(const TaxonomyFacetSumValueSource& obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyFacetFloatAssociations(obj) {}

            TaxonomyFacetSumValueSource(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::search::DoubleValuesSource &);
            TaxonomyFacetSumValueSource(const ::java::lang::String &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::search::DoubleValuesSource &);
            TaxonomyFacetSumValueSource(const ::org::apache::lucene::facet::taxonomy::OrdinalsReader &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::search::DoubleValuesSource &);
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
          extern PyType_Def PY_TYPE_DEF(TaxonomyFacetSumValueSource);
          extern PyTypeObject *PY_TYPE(TaxonomyFacetSumValueSource);

          class t_TaxonomyFacetSumValueSource {
          public:
            PyObject_HEAD
            TaxonomyFacetSumValueSource object;
            static PyObject *wrap_Object(const TaxonomyFacetSumValueSource&);
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
