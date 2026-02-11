#ifndef org_apache_lucene_search_SearcherLifetimeManager_H
#define org_apache_lucene_search_SearcherLifetimeManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class SearcherLifetimeManager$Pruner;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
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

        class SearcherLifetimeManager : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_acquire_0477587ddcc811fd,
            mid_close_3353d9f14bbfd91a,
            mid_prune_d82a22181abf7ce5,
            mid_record_fc39ac6514d89fd5,
            mid_release_b9ae496b26a6e444,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SearcherLifetimeManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SearcherLifetimeManager(const SearcherLifetimeManager& obj) : ::java::lang::Object(obj) {}

          SearcherLifetimeManager();

          ::org::apache::lucene::search::IndexSearcher acquire(jlong) const;
          void close() const;
          void prune(const ::org::apache::lucene::search::SearcherLifetimeManager$Pruner &) const;
          jlong record(const ::org::apache::lucene::search::IndexSearcher &) const;
          void release(const ::org::apache::lucene::search::IndexSearcher &) const;
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
        extern PyType_Def PY_TYPE_DEF(SearcherLifetimeManager);
        extern PyTypeObject *PY_TYPE(SearcherLifetimeManager);

        class t_SearcherLifetimeManager {
        public:
          PyObject_HEAD
          SearcherLifetimeManager object;
          static PyObject *wrap_Object(const SearcherLifetimeManager&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
