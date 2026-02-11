#ifndef org_apache_lucene_index_MergePolicy$OneMerge_H
#define org_apache_lucene_index_MergePolicy$OneMerge_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
        class CodecReader;
        class MergePolicy$MergeAbortedException;
        class MergePolicy$OneMergeProgress;
      }
      namespace store {
        class MergeInfo;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
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

        class MergePolicy$OneMerge : public ::java::lang::Object {
         public:
          enum {
            mid_init$_00cfc0b36d3628e3,
            mid_init$_1a2e28000748bc88,
            mid_checkAborted_3353d9f14bbfd91a,
            mid_getMergeInfo_06a2fc52bdbd408e,
            mid_getMergeProgress_b9da96e8f81efd87,
            mid_getStoreMergeInfo_e2d84a47c17035f7,
            mid_isAborted_ee8b0a5fa521ddac,
            mid_mergeFinished_d8388b1e026b6cdb,
            mid_mergeInit_3353d9f14bbfd91a,
            mid_segString_dc633f13a47328a8,
            mid_setAborted_3353d9f14bbfd91a,
            mid_setMergeInfo_0ee211a1949301b3,
            mid_totalBytesSize_058f5911dcf5d8a4,
            mid_totalNumDocs_15aa3d485e96b665,
            mid_wrapForMerge_961ac2e0f513d045,
            max_mid
          };

          enum {
            fid_estimatedMergeBytes,
            fid_segments,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy$OneMerge(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergePolicy$OneMerge(const MergePolicy$OneMerge& obj) : ::java::lang::Object(obj) {}

          jlong _get_estimatedMergeBytes() const;
          void _set_estimatedMergeBytes(jlong) const;
          ::java::util::List _get_segments() const;

          MergePolicy$OneMerge(const JArray< ::org::apache::lucene::index::CodecReader > &);
          MergePolicy$OneMerge(const ::java::util::List &);

          void checkAborted() const;
          ::org::apache::lucene::index::SegmentCommitInfo getMergeInfo() const;
          ::org::apache::lucene::index::MergePolicy$OneMergeProgress getMergeProgress() const;
          ::org::apache::lucene::store::MergeInfo getStoreMergeInfo() const;
          jboolean isAborted() const;
          void mergeFinished(jboolean, jboolean) const;
          void mergeInit() const;
          ::java::lang::String segString() const;
          void setAborted() const;
          void setMergeInfo(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          jlong totalBytesSize() const;
          jint totalNumDocs() const;
          ::org::apache::lucene::index::CodecReader wrapForMerge(const ::org::apache::lucene::index::CodecReader &) const;
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
        extern PyType_Def PY_TYPE_DEF(MergePolicy$OneMerge);
        extern PyTypeObject *PY_TYPE(MergePolicy$OneMerge);

        class t_MergePolicy$OneMerge {
        public:
          PyObject_HEAD
          MergePolicy$OneMerge object;
          static PyObject *wrap_Object(const MergePolicy$OneMerge&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
