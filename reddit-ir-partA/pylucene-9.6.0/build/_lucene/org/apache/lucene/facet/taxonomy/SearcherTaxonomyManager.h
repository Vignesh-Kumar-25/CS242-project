#ifndef org_apache_lucene_facet_taxonomy_SearcherTaxonomyManager_H
#define org_apache_lucene_facet_taxonomy_SearcherTaxonomyManager_H

#include "org/apache/lucene/search/ReferenceManager.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter;
        class IndexReader;
      }
      namespace search {
        class SearcherFactory;
      }
      namespace facet {
        namespace taxonomy {
          class SearcherTaxonomyManager$SearcherAndTaxonomy;
          namespace directory {
            class DirectoryTaxonomyReader;
            class DirectoryTaxonomyWriter;
          }
        }
      }
      namespace store {
        class Directory;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class SearcherTaxonomyManager : public ::org::apache::lucene::search::ReferenceManager {
           public:
            enum {
              mid_init$_d49319a7c14e7e61,
              mid_init$_4fb07c2aca60c443,
              mid_init$_63036f6ce9413b5b,
              mid_init$_c8cb846510eb2ffd,
              mid_getRefCount_f2425882097cded6,
              mid_tryIncRef_4dc67f5a2cfa98c9,
              mid_decRef_822d489a5e4053c6,
              mid_refreshIfNeeded_6d8676c0afa0dd51,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SearcherTaxonomyManager(jobject obj) : ::org::apache::lucene::search::ReferenceManager(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SearcherTaxonomyManager(const SearcherTaxonomyManager& obj) : ::org::apache::lucene::search::ReferenceManager(obj) {}

            SearcherTaxonomyManager(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyReader &, const ::org::apache::lucene::search::SearcherFactory &);
            SearcherTaxonomyManager(const ::org::apache::lucene::index::IndexWriter &, const ::org::apache::lucene::search::SearcherFactory &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter &);
            SearcherTaxonomyManager(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::SearcherFactory &);
            SearcherTaxonomyManager(const ::org::apache::lucene::index::IndexWriter &, jboolean, const ::org::apache::lucene::search::SearcherFactory &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter &);
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
          extern PyType_Def PY_TYPE_DEF(SearcherTaxonomyManager);
          extern PyTypeObject *PY_TYPE(SearcherTaxonomyManager);

          class t_SearcherTaxonomyManager {
          public:
            PyObject_HEAD
            SearcherTaxonomyManager object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SearcherTaxonomyManager *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SearcherTaxonomyManager&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SearcherTaxonomyManager&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
