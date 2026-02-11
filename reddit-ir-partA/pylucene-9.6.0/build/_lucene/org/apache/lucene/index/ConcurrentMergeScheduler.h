#ifndef org_apache_lucene_index_ConcurrentMergeScheduler_H
#define org_apache_lucene_index_ConcurrentMergeScheduler_H

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

        class ConcurrentMergeScheduler : public ::org::apache::lucene::index::MergeScheduler {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_close_3353d9f14bbfd91a,
            mid_disableAutoIOThrottle_3353d9f14bbfd91a,
            mid_enableAutoIOThrottle_3353d9f14bbfd91a,
            mid_getAutoIOThrottle_ee8b0a5fa521ddac,
            mid_getForceMergeMBPerSec_409d010a7a53d0d1,
            mid_getIORateLimitMBPerSec_409d010a7a53d0d1,
            mid_getMaxMergeCount_15aa3d485e96b665,
            mid_getMaxThreadCount_15aa3d485e96b665,
            mid_merge_25b5f578e25817d8,
            mid_mergeThreadCount_15aa3d485e96b665,
            mid_setDefaultMaxMergesAndThreads_4f96af910856b303,
            mid_setForceMergeMBPerSec_c1f7206c104d501e,
            mid_setMaxMergesAndThreads_078cef180abf5351,
            mid_sync_3353d9f14bbfd91a,
            mid_toString_dc633f13a47328a8,
            mid_wrapForMerge_a852a84337bdc4ef,
            mid_updateMergeThreads_3353d9f14bbfd91a,
            mid_maybeStall_0878cd135061bd27,
            mid_doStall_3353d9f14bbfd91a,
            mid_doMerge_00f840c4adf484fa,
            mid_getMergeThread_d8434e1820ce797d,
            mid_handleMergeException_923f33f8220e0899,
            mid_targetMBPerSecChanged_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConcurrentMergeScheduler(jobject obj) : ::org::apache::lucene::index::MergeScheduler(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConcurrentMergeScheduler(const ConcurrentMergeScheduler& obj) : ::org::apache::lucene::index::MergeScheduler(obj) {}

          static jint AUTO_DETECT_MERGES_AND_THREADS;
          static ::java::lang::String *DEFAULT_CPU_CORE_COUNT_PROPERTY;

          ConcurrentMergeScheduler();

          void close() const;
          void disableAutoIOThrottle() const;
          void enableAutoIOThrottle() const;
          jboolean getAutoIOThrottle() const;
          jdouble getForceMergeMBPerSec() const;
          jdouble getIORateLimitMBPerSec() const;
          jint getMaxMergeCount() const;
          jint getMaxThreadCount() const;
          void merge(const ::org::apache::lucene::index::MergeScheduler$MergeSource &, const ::org::apache::lucene::index::MergeTrigger &) const;
          jint mergeThreadCount() const;
          void setDefaultMaxMergesAndThreads(jboolean) const;
          void setForceMergeMBPerSec(jdouble) const;
          void setMaxMergesAndThreads(jint, jint) const;
          void sync() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(ConcurrentMergeScheduler);
        extern PyTypeObject *PY_TYPE(ConcurrentMergeScheduler);

        class t_ConcurrentMergeScheduler {
        public:
          PyObject_HEAD
          ConcurrentMergeScheduler object;
          static PyObject *wrap_Object(const ConcurrentMergeScheduler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
