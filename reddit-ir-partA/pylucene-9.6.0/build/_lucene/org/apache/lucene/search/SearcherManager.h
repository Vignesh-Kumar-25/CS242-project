#ifndef org_apache_lucene_search_SearcherManager_H
#define org_apache_lucene_search_SearcherManager_H

#include "org/apache/lucene/search/ReferenceManager.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter;
        class IndexReader;
        class DirectoryReader;
      }
      namespace search {
        class SearcherFactory;
        class IndexSearcher;
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
      namespace search {

        class SearcherManager : public ::org::apache::lucene::search::ReferenceManager {
         public:
          enum {
            mid_init$_8d4d6b59fd1cc849,
            mid_init$_2c9d6b8784801a8d,
            mid_init$_41d0f1d75a1c97c8,
            mid_init$_c59569da82f7b391,
            mid_getSearcher_2625782345ed6e80,
            mid_isSearcherCurrent_ee8b0a5fa521ddac,
            mid_getRefCount_d78b4b0dd65e68f8,
            mid_tryIncRef_a28b2e9b91781989,
            mid_decRef_b9ae496b26a6e444,
            mid_refreshIfNeeded_dc5a00b54169225d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SearcherManager(jobject obj) : ::org::apache::lucene::search::ReferenceManager(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SearcherManager(const SearcherManager& obj) : ::org::apache::lucene::search::ReferenceManager(obj) {}

          SearcherManager(const ::org::apache::lucene::index::DirectoryReader &, const ::org::apache::lucene::search::SearcherFactory &);
          SearcherManager(const ::org::apache::lucene::index::IndexWriter &, const ::org::apache::lucene::search::SearcherFactory &);
          SearcherManager(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::SearcherFactory &);
          SearcherManager(const ::org::apache::lucene::index::IndexWriter &, jboolean, jboolean, const ::org::apache::lucene::search::SearcherFactory &);

          static ::org::apache::lucene::search::IndexSearcher getSearcher(const ::org::apache::lucene::search::SearcherFactory &, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::index::IndexReader &);
          jboolean isSearcherCurrent() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(SearcherManager);
        extern PyTypeObject *PY_TYPE(SearcherManager);

        class t_SearcherManager {
        public:
          PyObject_HEAD
          SearcherManager object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SearcherManager *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SearcherManager&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SearcherManager&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
