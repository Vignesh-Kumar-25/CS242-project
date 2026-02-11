#ifndef org_apache_lucene_search_TotalHitCountCollectorManager_H
#define org_apache_lucene_search_TotalHitCountCollectorManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class CollectorManager;
        class TotalHitCountCollector;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Integer;
    class Class;
  }
  namespace util {
    class Collection;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TotalHitCountCollectorManager : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_newCollector_e233354172c43675,
            mid_reduce_701e3f9183b1e638,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TotalHitCountCollectorManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TotalHitCountCollectorManager(const TotalHitCountCollectorManager& obj) : ::java::lang::Object(obj) {}

          TotalHitCountCollectorManager();

          ::org::apache::lucene::search::TotalHitCountCollector newCollector() const;
          ::java::lang::Integer reduce(const ::java::util::Collection &) const;
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
        extern PyType_Def PY_TYPE_DEF(TotalHitCountCollectorManager);
        extern PyTypeObject *PY_TYPE(TotalHitCountCollectorManager);

        class t_TotalHitCountCollectorManager {
        public:
          PyObject_HEAD
          TotalHitCountCollectorManager object;
          static PyObject *wrap_Object(const TotalHitCountCollectorManager&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
