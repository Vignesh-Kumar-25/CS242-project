#ifndef org_apache_lucene_search_LRUQueryCache_H
#define org_apache_lucene_search_LRUQueryCache_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class QueryCachingPolicy;
        class Weight;
        class QueryCache;
      }
      namespace util {
        class Accountable;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class Predicate;
    }
    class Collection;
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

        class LRUQueryCache : public ::java::lang::Object {
         public:
          enum {
            mid_init$_6d2742abed5d70c9,
            mid_init$_29c7d26187e13b0f,
            mid_clear_3353d9f14bbfd91a,
            mid_clearCoreCacheKey_301632c741f5d054,
            mid_clearQuery_60638ee06ec0416b,
            mid_doCache_c00e4aacf210e20a,
            mid_getCacheCount_058f5911dcf5d8a4,
            mid_getCacheSize_058f5911dcf5d8a4,
            mid_getChildResources_b47b7eaa8124fb60,
            mid_getEvictionCount_058f5911dcf5d8a4,
            mid_getHitCount_058f5911dcf5d8a4,
            mid_getMissCount_058f5911dcf5d8a4,
            mid_getTotalCount_058f5911dcf5d8a4,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            mid_onHit_febdccb48ac2f255,
            mid_onMiss_febdccb48ac2f255,
            mid_onQueryCache_d21cb29067bef44c,
            mid_onQueryEviction_d21cb29067bef44c,
            mid_onDocIdSetCache_1ff65ee09fa7c2da,
            mid_onDocIdSetEviction_91813c44242cb439,
            mid_onClear_3353d9f14bbfd91a,
            mid_cacheImpl_dac5baa0a44b095a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LRUQueryCache(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LRUQueryCache(const LRUQueryCache& obj) : ::java::lang::Object(obj) {}

          LRUQueryCache(jint, jlong);
          LRUQueryCache(jint, jlong, const ::java::util::function::Predicate &, jfloat);

          void clear() const;
          void clearCoreCacheKey(const ::java::lang::Object &) const;
          void clearQuery(const ::org::apache::lucene::search::Query &) const;
          ::org::apache::lucene::search::Weight doCache(const ::org::apache::lucene::search::Weight &, const ::org::apache::lucene::search::QueryCachingPolicy &) const;
          jlong getCacheCount() const;
          jlong getCacheSize() const;
          ::java::util::Collection getChildResources() const;
          jlong getEvictionCount() const;
          jlong getHitCount() const;
          jlong getMissCount() const;
          jlong getTotalCount() const;
          jlong ramBytesUsed() const;
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
        extern PyType_Def PY_TYPE_DEF(LRUQueryCache);
        extern PyTypeObject *PY_TYPE(LRUQueryCache);

        class t_LRUQueryCache {
        public:
          PyObject_HEAD
          LRUQueryCache object;
          static PyObject *wrap_Object(const LRUQueryCache&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
