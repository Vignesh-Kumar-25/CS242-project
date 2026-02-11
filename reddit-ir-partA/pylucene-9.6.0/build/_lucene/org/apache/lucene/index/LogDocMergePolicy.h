#ifndef org_apache_lucene_index_LogDocMergePolicy_H
#define org_apache_lucene_index_LogDocMergePolicy_H

#include "org/apache/lucene/index/LogMergePolicy.h"

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

        class LogDocMergePolicy : public ::org::apache::lucene::index::LogMergePolicy {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_getMinMergeDocs_15aa3d485e96b665,
            mid_setMinMergeDocs_da425451c8de636b,
            mid_size_3f56451e2a46cc5d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LogDocMergePolicy(jobject obj) : ::org::apache::lucene::index::LogMergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LogDocMergePolicy(const LogDocMergePolicy& obj) : ::org::apache::lucene::index::LogMergePolicy(obj) {}

          static jint DEFAULT_MIN_MERGE_DOCS;

          LogDocMergePolicy();

          jint getMinMergeDocs() const;
          void setMinMergeDocs(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(LogDocMergePolicy);
        extern PyTypeObject *PY_TYPE(LogDocMergePolicy);

        class t_LogDocMergePolicy {
        public:
          PyObject_HEAD
          LogDocMergePolicy object;
          static PyObject *wrap_Object(const LogDocMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
