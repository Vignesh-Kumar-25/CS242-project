#ifndef org_apache_lucene_index_PersistentSnapshotDeletionPolicy_H
#define org_apache_lucene_index_PersistentSnapshotDeletionPolicy_H

#include "org/apache/lucene/index/SnapshotDeletionPolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexDeletionPolicy;
        class IndexCommit;
        class IndexWriterConfig$OpenMode;
      }
      namespace store {
        class Directory;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class PersistentSnapshotDeletionPolicy : public ::org::apache::lucene::index::SnapshotDeletionPolicy {
         public:
          enum {
            mid_init$_65d66c887e26b82a,
            mid_init$_a29d8c09ca2c98c7,
            mid_getLastSaveFile_dc633f13a47328a8,
            mid_release_d28d6fa65f0e10ba,
            mid_release_db2028ac45cd5b77,
            mid_snapshot_854542e383137675,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PersistentSnapshotDeletionPolicy(jobject obj) : ::org::apache::lucene::index::SnapshotDeletionPolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PersistentSnapshotDeletionPolicy(const PersistentSnapshotDeletionPolicy& obj) : ::org::apache::lucene::index::SnapshotDeletionPolicy(obj) {}

          static ::java::lang::String *SNAPSHOTS_PREFIX;

          PersistentSnapshotDeletionPolicy(const ::org::apache::lucene::index::IndexDeletionPolicy &, const ::org::apache::lucene::store::Directory &);
          PersistentSnapshotDeletionPolicy(const ::org::apache::lucene::index::IndexDeletionPolicy &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig$OpenMode &);

          ::java::lang::String getLastSaveFile() const;
          void release(const ::org::apache::lucene::index::IndexCommit &) const;
          void release(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PersistentSnapshotDeletionPolicy);
        extern PyTypeObject *PY_TYPE(PersistentSnapshotDeletionPolicy);

        class t_PersistentSnapshotDeletionPolicy {
        public:
          PyObject_HEAD
          PersistentSnapshotDeletionPolicy object;
          static PyObject *wrap_Object(const PersistentSnapshotDeletionPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
