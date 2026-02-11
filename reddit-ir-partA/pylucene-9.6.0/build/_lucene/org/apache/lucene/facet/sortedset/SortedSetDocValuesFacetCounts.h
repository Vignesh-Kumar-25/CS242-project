#ifndef org_apache_lucene_facet_sortedset_SortedSetDocValuesFacetCounts_H
#define org_apache_lucene_facet_sortedset_SortedSetDocValuesFacetCounts_H

#include "org/apache/lucene/facet/sortedset/AbstractSortedSetDocValueFacetCounts.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {
          class SortedSetDocValuesReaderState;
        }
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
        namespace sortedset {

          class SortedSetDocValuesFacetCounts : public ::org::apache::lucene::facet::sortedset::AbstractSortedSetDocValueFacetCounts {
           public:
            enum {
              mid_init$_4cf9eb16150a8ac1,
              mid_init$_84a3e07d80ba9d27,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedSetDocValuesFacetCounts(jobject obj) : ::org::apache::lucene::facet::sortedset::AbstractSortedSetDocValueFacetCounts(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SortedSetDocValuesFacetCounts(const SortedSetDocValuesFacetCounts& obj) : ::org::apache::lucene::facet::sortedset::AbstractSortedSetDocValueFacetCounts(obj) {}

            SortedSetDocValuesFacetCounts(const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &);
            SortedSetDocValuesFacetCounts(const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &, const ::org::apache::lucene::facet::FacetsCollector &);
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
        namespace sortedset {
          extern PyType_Def PY_TYPE_DEF(SortedSetDocValuesFacetCounts);
          extern PyTypeObject *PY_TYPE(SortedSetDocValuesFacetCounts);

          class t_SortedSetDocValuesFacetCounts {
          public:
            PyObject_HEAD
            SortedSetDocValuesFacetCounts object;
            static PyObject *wrap_Object(const SortedSetDocValuesFacetCounts&);
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
