#ifndef org_apache_lucene_store_MergeInfo_H
#define org_apache_lucene_store_MergeInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class MergeInfo : public ::java::lang::Object {
         public:
          enum {
            mid_init$_b8623d0e1bbf368f,
            mid_equals_6084f78e09b6c0c3,
            mid_hashCode_15aa3d485e96b665,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          enum {
            fid_estimatedMergeBytes,
            fid_isExternal,
            fid_mergeMaxNumSegments,
            fid_totalMaxDoc,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergeInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergeInfo(const MergeInfo& obj) : ::java::lang::Object(obj) {}

          jlong _get_estimatedMergeBytes() const;
          jboolean _get_isExternal() const;
          jint _get_mergeMaxNumSegments() const;
          jint _get_totalMaxDoc() const;

          MergeInfo(jint, jlong, jboolean, jint);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
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
      namespace store {
        extern PyType_Def PY_TYPE_DEF(MergeInfo);
        extern PyTypeObject *PY_TYPE(MergeInfo);

        class t_MergeInfo {
        public:
          PyObject_HEAD
          MergeInfo object;
          static PyObject *wrap_Object(const MergeInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
