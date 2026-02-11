#ifndef org_apache_lucene_index_MergePolicy$MergeSpecification_H
#define org_apache_lucene_index_MergePolicy$MergeSpecification_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace index {
        class MergePolicy$OneMerge;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MergePolicy$MergeSpecification : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_add_6233f2e8bf8fd324,
            mid_segString_46690602e9764328,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          enum {
            fid_merges,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy$MergeSpecification(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergePolicy$MergeSpecification(const MergePolicy$MergeSpecification& obj) : ::java::lang::Object(obj) {}

          ::java::util::List _get_merges() const;

          MergePolicy$MergeSpecification();

          void add(const ::org::apache::lucene::index::MergePolicy$OneMerge &) const;
          ::java::lang::String segString(const ::org::apache::lucene::store::Directory &) const;
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
        extern PyType_Def PY_TYPE_DEF(MergePolicy$MergeSpecification);
        extern PyTypeObject *PY_TYPE(MergePolicy$MergeSpecification);

        class t_MergePolicy$MergeSpecification {
        public:
          PyObject_HEAD
          MergePolicy$MergeSpecification object;
          static PyObject *wrap_Object(const MergePolicy$MergeSpecification&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
