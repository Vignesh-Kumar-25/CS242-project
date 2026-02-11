#ifndef org_apache_lucene_index_IndexCommit_H
#define org_apache_lucene_index_IndexCommit_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Collection;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace index {
        class IndexCommit;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexCommit : public ::java::lang::Object {
         public:
          enum {
            mid_compareTo_ddd7a502815c50fb,
            mid_delete_3353d9f14bbfd91a,
            mid_equals_6084f78e09b6c0c3,
            mid_getDirectory_dab1bc6be9334718,
            mid_getFileNames_b47b7eaa8124fb60,
            mid_getGeneration_058f5911dcf5d8a4,
            mid_getSegmentCount_15aa3d485e96b665,
            mid_getSegmentsFileName_dc633f13a47328a8,
            mid_getUserData_19f838df22aacf85,
            mid_hashCode_15aa3d485e96b665,
            mid_isDeleted_ee8b0a5fa521ddac,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexCommit(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexCommit(const IndexCommit& obj) : ::java::lang::Object(obj) {}

          jint compareTo(const IndexCommit &) const;
          void delete$() const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::store::Directory getDirectory() const;
          ::java::util::Collection getFileNames() const;
          jlong getGeneration() const;
          jint getSegmentCount() const;
          ::java::lang::String getSegmentsFileName() const;
          ::java::util::Map getUserData() const;
          jint hashCode() const;
          jboolean isDeleted() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexCommit);
        extern PyTypeObject *PY_TYPE(IndexCommit);

        class t_IndexCommit {
        public:
          PyObject_HEAD
          IndexCommit object;
          static PyObject *wrap_Object(const IndexCommit&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
