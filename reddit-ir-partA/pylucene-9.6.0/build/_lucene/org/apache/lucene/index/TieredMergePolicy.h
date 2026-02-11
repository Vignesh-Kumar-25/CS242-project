#ifndef org_apache_lucene_index_TieredMergePolicy_H
#define org_apache_lucene_index_TieredMergePolicy_H

#include "org/apache/lucene/index/MergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
        class SegmentInfos;
        class TieredMergePolicy;
        class MergePolicy$MergeContext;
        class MergePolicy$MergeSpecification;
        class MergeTrigger;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Boolean;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class TieredMergePolicy : public ::org::apache::lucene::index::MergePolicy {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_findForcedDeletesMerges_ba8e1f56536744f9,
            mid_findForcedMerges_6589b828f65a6b64,
            mid_findMerges_69db8b75d4bd0c68,
            mid_getDeletesPctAllowed_409d010a7a53d0d1,
            mid_getFloorSegmentMB_409d010a7a53d0d1,
            mid_getForceMergeDeletesPctAllowed_409d010a7a53d0d1,
            mid_getMaxMergeAtOnce_15aa3d485e96b665,
            mid_getMaxMergedSegmentMB_409d010a7a53d0d1,
            mid_getSegmentsPerTier_409d010a7a53d0d1,
            mid_setDeletesPctAllowed_d9a57b854ece2c08,
            mid_setFloorSegmentMB_d9a57b854ece2c08,
            mid_setForceMergeDeletesPctAllowed_d9a57b854ece2c08,
            mid_setMaxMergeAtOnce_8aa83a13a8a76741,
            mid_setMaxMergedSegmentMB_d9a57b854ece2c08,
            mid_setSegmentsPerTier_d9a57b854ece2c08,
            mid_toString_dc633f13a47328a8,
            mid_score_5e6204946513531c,
            mid_maxFullFlushMergeSize_058f5911dcf5d8a4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TieredMergePolicy(jobject obj) : ::org::apache::lucene::index::MergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TieredMergePolicy(const TieredMergePolicy& obj) : ::org::apache::lucene::index::MergePolicy(obj) {}

          static jdouble DEFAULT_NO_CFS_RATIO;

          TieredMergePolicy();

          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedDeletesMerges(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          jdouble getDeletesPctAllowed() const;
          jdouble getFloorSegmentMB() const;
          jdouble getForceMergeDeletesPctAllowed() const;
          jint getMaxMergeAtOnce() const;
          jdouble getMaxMergedSegmentMB() const;
          jdouble getSegmentsPerTier() const;
          TieredMergePolicy setDeletesPctAllowed(jdouble) const;
          TieredMergePolicy setFloorSegmentMB(jdouble) const;
          TieredMergePolicy setForceMergeDeletesPctAllowed(jdouble) const;
          TieredMergePolicy setMaxMergeAtOnce(jint) const;
          TieredMergePolicy setMaxMergedSegmentMB(jdouble) const;
          TieredMergePolicy setSegmentsPerTier(jdouble) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(TieredMergePolicy);
        extern PyTypeObject *PY_TYPE(TieredMergePolicy);

        class t_TieredMergePolicy {
        public:
          PyObject_HEAD
          TieredMergePolicy object;
          static PyObject *wrap_Object(const TieredMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
