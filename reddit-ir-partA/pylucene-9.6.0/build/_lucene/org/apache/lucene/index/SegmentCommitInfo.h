#ifndef org_apache_lucene_index_SegmentCommitInfo_H
#define org_apache_lucene_index_SegmentCommitInfo_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
        class SegmentInfo;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Collection;
    class Set;
  }
  namespace lang {
    class Integer;
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

        class SegmentCommitInfo : public ::java::lang::Object {
         public:
          enum {
            mid_init$_b78133061c49fa68,
            mid_clone_06a2fc52bdbd408e,
            mid_files_b47b7eaa8124fb60,
            mid_getDelCount_15aa3d485e96b665,
            mid_getDelGen_058f5911dcf5d8a4,
            mid_getDocValuesGen_058f5911dcf5d8a4,
            mid_getDocValuesUpdatesFiles_19f838df22aacf85,
            mid_getFieldInfosFiles_9a625d56b67c7390,
            mid_getFieldInfosGen_058f5911dcf5d8a4,
            mid_getId_f4d7c022fb7af16d,
            mid_getNextDelGen_058f5911dcf5d8a4,
            mid_getNextDocValuesGen_058f5911dcf5d8a4,
            mid_getNextFieldInfosGen_058f5911dcf5d8a4,
            mid_getSoftDelCount_15aa3d485e96b665,
            mid_hasDeletions_ee8b0a5fa521ddac,
            mid_hasFieldUpdates_ee8b0a5fa521ddac,
            mid_setDocValuesUpdatesFiles_62c0fdc62292ffbf,
            mid_setFieldInfosFiles_d0cb68c4009fd1b5,
            mid_sizeInBytes_058f5911dcf5d8a4,
            mid_toString_dc633f13a47328a8,
            mid_toString_78a7b318cefaee15,
            max_mid
          };

          enum {
            fid_info,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentCommitInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SegmentCommitInfo(const SegmentCommitInfo& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::SegmentInfo _get_info() const;

          SegmentCommitInfo(const ::org::apache::lucene::index::SegmentInfo &, jint, jint, jlong, jlong, jlong, const JArray< jbyte > &);

          SegmentCommitInfo clone() const;
          ::java::util::Collection files() const;
          jint getDelCount() const;
          jlong getDelGen() const;
          jlong getDocValuesGen() const;
          ::java::util::Map getDocValuesUpdatesFiles() const;
          ::java::util::Set getFieldInfosFiles() const;
          jlong getFieldInfosGen() const;
          JArray< jbyte > getId() const;
          jlong getNextDelGen() const;
          jlong getNextDocValuesGen() const;
          jlong getNextFieldInfosGen() const;
          jint getSoftDelCount() const;
          jboolean hasDeletions() const;
          jboolean hasFieldUpdates() const;
          void setDocValuesUpdatesFiles(const ::java::util::Map &) const;
          void setFieldInfosFiles(const ::java::util::Set &) const;
          jlong sizeInBytes() const;
          ::java::lang::String toString() const;
          ::java::lang::String toString(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(SegmentCommitInfo);
        extern PyTypeObject *PY_TYPE(SegmentCommitInfo);

        class t_SegmentCommitInfo {
        public:
          PyObject_HEAD
          SegmentCommitInfo object;
          static PyObject *wrap_Object(const SegmentCommitInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
