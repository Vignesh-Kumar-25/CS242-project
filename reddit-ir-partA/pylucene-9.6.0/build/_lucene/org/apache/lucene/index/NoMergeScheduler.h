#ifndef org_apache_lucene_index_NoMergeScheduler_H
#define org_apache_lucene_index_NoMergeScheduler_H

#include "org/apache/lucene/index/MergeScheduler.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergePolicy$OneMerge;
        class MergeTrigger;
        class MergeScheduler$MergeSource;
      }
      namespace store {
        class Directory;
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

        class NoMergeScheduler : public ::org::apache::lucene::index::MergeScheduler {
         public:
          enum {
            mid_clone_7e3f52ee54c10b54,
            mid_close_3353d9f14bbfd91a,
            mid_merge_25b5f578e25817d8,
            mid_wrapForMerge_a852a84337bdc4ef,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NoMergeScheduler(jobject obj) : ::org::apache::lucene::index::MergeScheduler(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NoMergeScheduler(const NoMergeScheduler& obj) : ::org::apache::lucene::index::MergeScheduler(obj) {}

          static ::org::apache::lucene::index::MergeScheduler *INSTANCE;

          ::org::apache::lucene::index::MergeScheduler clone() const;
          void close() const;
          void merge(const ::org::apache::lucene::index::MergeScheduler$MergeSource &, const ::org::apache::lucene::index::MergeTrigger &) const;
          ::org::apache::lucene::store::Directory wrapForMerge(const ::org::apache::lucene::index::MergePolicy$OneMerge &, const ::org::apache::lucene::store::Directory &) const;
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
        extern PyType_Def PY_TYPE_DEF(NoMergeScheduler);
        extern PyTypeObject *PY_TYPE(NoMergeScheduler);

        class t_NoMergeScheduler {
        public:
          PyObject_HEAD
          NoMergeScheduler object;
          static PyObject *wrap_Object(const NoMergeScheduler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
