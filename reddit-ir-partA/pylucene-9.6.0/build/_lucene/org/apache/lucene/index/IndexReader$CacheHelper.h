#ifndef org_apache_lucene_index_IndexReader$CacheHelper_H
#define org_apache_lucene_index_IndexReader$CacheHelper_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader$CacheKey;
        class IndexReader$ClosedListener;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexReader$CacheHelper : public ::java::lang::Object {
         public:
          enum {
            mid_addClosedListener_c3d165d13acb87fc,
            mid_getKey_19ae42e837a65e19,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexReader$CacheHelper(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexReader$CacheHelper(const IndexReader$CacheHelper& obj) : ::java::lang::Object(obj) {}

          void addClosedListener(const ::org::apache::lucene::index::IndexReader$ClosedListener &) const;
          ::org::apache::lucene::index::IndexReader$CacheKey getKey() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(IndexReader$CacheHelper);
        extern PyTypeObject *PY_TYPE(IndexReader$CacheHelper);

        class t_IndexReader$CacheHelper {
        public:
          PyObject_HEAD
          IndexReader$CacheHelper object;
          static PyObject *wrap_Object(const IndexReader$CacheHelper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
