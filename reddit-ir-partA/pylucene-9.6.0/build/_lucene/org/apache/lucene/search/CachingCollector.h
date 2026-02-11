#ifndef org_apache_lucene_search_CachingCollector_H
#define org_apache_lucene_search_CachingCollector_H

#include "org/apache/lucene/search/FilterCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Collector;
        class CachingCollector;
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

        class CachingCollector : public ::org::apache::lucene::search::FilterCollector {
         public:
          enum {
            mid_create_7082123a0b25dbed,
            mid_create_300898d5717b2f88,
            mid_create_4433aa79c93f4466,
            mid_isCached_ee8b0a5fa521ddac,
            mid_replay_95d7d798698de361,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CachingCollector(jobject obj) : ::org::apache::lucene::search::FilterCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CachingCollector(const CachingCollector& obj) : ::org::apache::lucene::search::FilterCollector(obj) {}

          static CachingCollector create(jboolean, jdouble);
          static CachingCollector create(const ::org::apache::lucene::search::Collector &, jboolean, jdouble);
          static CachingCollector create(const ::org::apache::lucene::search::Collector &, jboolean, jint);
          jboolean isCached() const;
          void replay(const ::org::apache::lucene::search::Collector &) const;
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
        extern PyType_Def PY_TYPE_DEF(CachingCollector);
        extern PyTypeObject *PY_TYPE(CachingCollector);

        class t_CachingCollector {
        public:
          PyObject_HEAD
          CachingCollector object;
          static PyObject *wrap_Object(const CachingCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
