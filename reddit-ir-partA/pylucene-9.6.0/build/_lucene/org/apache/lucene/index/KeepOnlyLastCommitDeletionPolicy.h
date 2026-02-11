#ifndef org_apache_lucene_index_KeepOnlyLastCommitDeletionPolicy_H
#define org_apache_lucene_index_KeepOnlyLastCommitDeletionPolicy_H

#include "org/apache/lucene/index/IndexDeletionPolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexCommit;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class KeepOnlyLastCommitDeletionPolicy : public ::org::apache::lucene::index::IndexDeletionPolicy {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_onCommit_1a2e28000748bc88,
            mid_onInit_1a2e28000748bc88,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KeepOnlyLastCommitDeletionPolicy(jobject obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KeepOnlyLastCommitDeletionPolicy(const KeepOnlyLastCommitDeletionPolicy& obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {}

          KeepOnlyLastCommitDeletionPolicy();

          void onCommit(const ::java::util::List &) const;
          void onInit(const ::java::util::List &) const;
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
        extern PyType_Def PY_TYPE_DEF(KeepOnlyLastCommitDeletionPolicy);
        extern PyTypeObject *PY_TYPE(KeepOnlyLastCommitDeletionPolicy);

        class t_KeepOnlyLastCommitDeletionPolicy {
        public:
          PyObject_HEAD
          KeepOnlyLastCommitDeletionPolicy object;
          static PyObject *wrap_Object(const KeepOnlyLastCommitDeletionPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
