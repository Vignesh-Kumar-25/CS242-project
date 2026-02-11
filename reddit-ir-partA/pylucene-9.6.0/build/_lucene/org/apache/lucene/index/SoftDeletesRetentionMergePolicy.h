#ifndef org_apache_lucene_index_SoftDeletesRetentionMergePolicy_H
#define org_apache_lucene_index_SoftDeletesRetentionMergePolicy_H

#include "org/apache/lucene/index/OneMergeWrappingMergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
        class CodecReader;
        class MergePolicy;
      }
      namespace search {
        class Query;
      }
      namespace util {
        class IOSupplier;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class Supplier;
    }
  }
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

        class SoftDeletesRetentionMergePolicy : public ::org::apache::lucene::index::OneMergeWrappingMergePolicy {
         public:
          enum {
            mid_init$_aa6ee2589604b911,
            mid_keepFullyDeletedSegment_9cc78b24cedd0494,
            mid_numDeletesToMerge_afba2acc8e81ed05,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SoftDeletesRetentionMergePolicy(jobject obj) : ::org::apache::lucene::index::OneMergeWrappingMergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SoftDeletesRetentionMergePolicy(const SoftDeletesRetentionMergePolicy& obj) : ::org::apache::lucene::index::OneMergeWrappingMergePolicy(obj) {}

          SoftDeletesRetentionMergePolicy(const ::java::lang::String &, const ::java::util::function::Supplier &, const ::org::apache::lucene::index::MergePolicy &);

          jboolean keepFullyDeletedSegment(const ::org::apache::lucene::util::IOSupplier &) const;
          jint numDeletesToMerge(const ::org::apache::lucene::index::SegmentCommitInfo &, jint, const ::org::apache::lucene::util::IOSupplier &) const;
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
        extern PyType_Def PY_TYPE_DEF(SoftDeletesRetentionMergePolicy);
        extern PyTypeObject *PY_TYPE(SoftDeletesRetentionMergePolicy);

        class t_SoftDeletesRetentionMergePolicy {
        public:
          PyObject_HEAD
          SoftDeletesRetentionMergePolicy object;
          static PyObject *wrap_Object(const SoftDeletesRetentionMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
