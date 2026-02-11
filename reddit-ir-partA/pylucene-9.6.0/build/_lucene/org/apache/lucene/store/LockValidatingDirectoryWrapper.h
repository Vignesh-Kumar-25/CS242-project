#ifndef org_apache_lucene_store_LockValidatingDirectoryWrapper_H
#define org_apache_lucene_store_LockValidatingDirectoryWrapper_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace io {
    class IOException;
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
        class Lock;
        class IOContext;
        class IndexOutput;
        class Directory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class LockValidatingDirectoryWrapper : public ::org::apache::lucene::store::FilterDirectory {
         public:
          enum {
            mid_init$_e6137504860c8b3f,
            mid_copyFrom_25fbf0c6389d2944,
            mid_createOutput_cb8add97217e4b75,
            mid_deleteFile_4a883f7810d2effa,
            mid_rename_1c92f57e5f37bb8d,
            mid_sync_568dc3e0933a89e8,
            mid_syncMetaData_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LockValidatingDirectoryWrapper(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LockValidatingDirectoryWrapper(const LockValidatingDirectoryWrapper& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

          LockValidatingDirectoryWrapper(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Lock &);

          void copyFrom(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          void rename(const ::java::lang::String &, const ::java::lang::String &) const;
          void sync(const ::java::util::Collection &) const;
          void syncMetaData() const;
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
        extern PyType_Def PY_TYPE_DEF(LockValidatingDirectoryWrapper);
        extern PyTypeObject *PY_TYPE(LockValidatingDirectoryWrapper);

        class t_LockValidatingDirectoryWrapper {
        public:
          PyObject_HEAD
          LockValidatingDirectoryWrapper object;
          static PyObject *wrap_Object(const LockValidatingDirectoryWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
