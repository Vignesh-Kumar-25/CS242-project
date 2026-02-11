#ifndef org_apache_lucene_index_SerialMergeScheduler_H
#define org_apache_lucene_index_SerialMergeScheduler_H

#include "org/apache/lucene/index/MergeScheduler.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeTrigger;
        class MergeScheduler$MergeSource;
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
      namespace index {

        class SerialMergeScheduler : public ::org::apache::lucene::index::MergeScheduler {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_close_3353d9f14bbfd91a,
            mid_merge_25b5f578e25817d8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SerialMergeScheduler(jobject obj) : ::org::apache::lucene::index::MergeScheduler(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SerialMergeScheduler(const SerialMergeScheduler& obj) : ::org::apache::lucene::index::MergeScheduler(obj) {}

          SerialMergeScheduler();

          void close() const;
          void merge(const ::org::apache::lucene::index::MergeScheduler$MergeSource &, const ::org::apache::lucene::index::MergeTrigger &) const;
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
        extern PyType_Def PY_TYPE_DEF(SerialMergeScheduler);
        extern PyTypeObject *PY_TYPE(SerialMergeScheduler);

        class t_SerialMergeScheduler {
        public:
          PyObject_HEAD
          SerialMergeScheduler object;
          static PyObject *wrap_Object(const SerialMergeScheduler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
