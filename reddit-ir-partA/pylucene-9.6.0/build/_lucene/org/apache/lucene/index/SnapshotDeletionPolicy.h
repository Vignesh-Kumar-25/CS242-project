#ifndef org_apache_lucene_index_SnapshotDeletionPolicy_H
#define org_apache_lucene_index_SnapshotDeletionPolicy_H

#include "org/apache/lucene/index/IndexDeletionPolicy.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexCommit;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SnapshotDeletionPolicy : public ::org::apache::lucene::index::IndexDeletionPolicy {
         public:
          enum {
            mid_init$_f41951d6544c7ead,
            mid_getIndexCommit_f23e7280233ab5ad,
            mid_getSnapshotCount_15aa3d485e96b665,
            mid_getSnapshots_0bc66e960964b70a,
            mid_onCommit_1a2e28000748bc88,
            mid_onInit_1a2e28000748bc88,
            mid_release_d28d6fa65f0e10ba,
            mid_snapshot_854542e383137675,
            mid_incRef_d28d6fa65f0e10ba,
            mid_releaseGen_db2028ac45cd5b77,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SnapshotDeletionPolicy(jobject obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SnapshotDeletionPolicy(const SnapshotDeletionPolicy& obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {}

          SnapshotDeletionPolicy(const ::org::apache::lucene::index::IndexDeletionPolicy &);

          ::org::apache::lucene::index::IndexCommit getIndexCommit(jlong) const;
          jint getSnapshotCount() const;
          ::java::util::List getSnapshots() const;
          void onCommit(const ::java::util::List &) const;
          void onInit(const ::java::util::List &) const;
          void release(const ::org::apache::lucene::index::IndexCommit &) const;
          ::org::apache::lucene::index::IndexCommit snapshot() const;
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
        extern PyType_Def PY_TYPE_DEF(SnapshotDeletionPolicy);
        extern PyTypeObject *PY_TYPE(SnapshotDeletionPolicy);

        class t_SnapshotDeletionPolicy {
        public:
          PyObject_HEAD
          SnapshotDeletionPolicy object;
          static PyObject *wrap_Object(const SnapshotDeletionPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
