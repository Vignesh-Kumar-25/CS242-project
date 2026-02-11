#ifndef org_apache_lucene_search_UsageTrackingQueryCachingPolicy_H
#define org_apache_lucene_search_UsageTrackingQueryCachingPolicy_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class QueryCachingPolicy;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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

        class UsageTrackingQueryCachingPolicy : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_da425451c8de636b,
            mid_onUse_60638ee06ec0416b,
            mid_shouldCache_e95f59987790ead1,
            mid_minFrequencyToCache_2fcfb540fe89fa87,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UsageTrackingQueryCachingPolicy(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UsageTrackingQueryCachingPolicy(const UsageTrackingQueryCachingPolicy& obj) : ::java::lang::Object(obj) {}

          UsageTrackingQueryCachingPolicy();
          UsageTrackingQueryCachingPolicy(jint);

          void onUse(const ::org::apache::lucene::search::Query &) const;
          jboolean shouldCache(const ::org::apache::lucene::search::Query &) const;
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
        extern PyType_Def PY_TYPE_DEF(UsageTrackingQueryCachingPolicy);
        extern PyTypeObject *PY_TYPE(UsageTrackingQueryCachingPolicy);

        class t_UsageTrackingQueryCachingPolicy {
        public:
          PyObject_HEAD
          UsageTrackingQueryCachingPolicy object;
          static PyObject *wrap_Object(const UsageTrackingQueryCachingPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
