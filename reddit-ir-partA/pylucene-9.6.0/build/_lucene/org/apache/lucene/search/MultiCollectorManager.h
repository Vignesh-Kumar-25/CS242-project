#ifndef org_apache_lucene_search_MultiCollectorManager_H
#define org_apache_lucene_search_MultiCollectorManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class CollectorManager;
        class Collector;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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

        class MultiCollectorManager : public ::java::lang::Object {
         public:
          enum {
            mid_init$_c2b4dacf65a58e23,
            mid_newCollector_1d93f464a5be65ae,
            mid_reduce_3122e78d360f373c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiCollectorManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiCollectorManager(const MultiCollectorManager& obj) : ::java::lang::Object(obj) {}

          MultiCollectorManager(const JArray< ::org::apache::lucene::search::CollectorManager > &);

          ::org::apache::lucene::search::Collector newCollector() const;
          JArray< ::java::lang::Object > reduce(const ::java::util::Collection &) const;
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
        extern PyType_Def PY_TYPE_DEF(MultiCollectorManager);
        extern PyTypeObject *PY_TYPE(MultiCollectorManager);

        class t_MultiCollectorManager {
        public:
          PyObject_HEAD
          MultiCollectorManager object;
          static PyObject *wrap_Object(const MultiCollectorManager&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
