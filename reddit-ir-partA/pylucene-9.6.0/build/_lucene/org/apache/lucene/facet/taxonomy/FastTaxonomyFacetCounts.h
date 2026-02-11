#ifndef org_apache_lucene_facet_taxonomy_FastTaxonomyFacetCounts_H
#define org_apache_lucene_facet_taxonomy_FastTaxonomyFacetCounts_H

#include "org/apache/lucene/facet/taxonomy/IntTaxonomyFacets.h"

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
      namespace index {
        class IndexReader;
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

          class FastTaxonomyFacetCounts : public ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets {
           public:
            enum {
              mid_init$_ee681335aba41167,
              mid_init$_ef18021e2691d265,
              mid_init$_6c584604bd7fd2d2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FastTaxonomyFacetCounts(jobject obj) : ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FastTaxonomyFacetCounts(const FastTaxonomyFacetCounts& obj) : ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets(obj) {}

            FastTaxonomyFacetCounts(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &);
            FastTaxonomyFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &);
            FastTaxonomyFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &);
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
          extern PyType_Def PY_TYPE_DEF(FastTaxonomyFacetCounts);
          extern PyTypeObject *PY_TYPE(FastTaxonomyFacetCounts);

          class t_FastTaxonomyFacetCounts {
          public:
            PyObject_HEAD
            FastTaxonomyFacetCounts object;
            static PyObject *wrap_Object(const FastTaxonomyFacetCounts&);
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
