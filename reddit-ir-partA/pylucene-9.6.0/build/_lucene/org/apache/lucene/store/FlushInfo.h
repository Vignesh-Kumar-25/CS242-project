#ifndef org_apache_lucene_store_FlushInfo_H
#define org_apache_lucene_store_FlushInfo_H

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

        class FlushInfo : public ::java::lang::Object {
         public:
          enum {
            mid_init$_6d2742abed5d70c9,
            mid_equals_6084f78e09b6c0c3,
            mid_hashCode_15aa3d485e96b665,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          enum {
            fid_estimatedSegmentSize,
            fid_numDocs,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FlushInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FlushInfo(const FlushInfo& obj) : ::java::lang::Object(obj) {}

          jlong _get_estimatedSegmentSize() const;
          jint _get_numDocs() const;

          FlushInfo(jint, jlong);

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
        extern PyType_Def PY_TYPE_DEF(FlushInfo);
        extern PyTypeObject *PY_TYPE(FlushInfo);

        class t_FlushInfo {
        public:
          PyObject_HEAD
          FlushInfo object;
          static PyObject *wrap_Object(const FlushInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
