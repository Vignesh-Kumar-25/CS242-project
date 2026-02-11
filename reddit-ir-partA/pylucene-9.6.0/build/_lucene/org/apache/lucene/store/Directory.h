#ifndef org_apache_lucene_store_Directory_H
#define org_apache_lucene_store_Directory_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class Set;
  }
  namespace io {
    class IOException;
    class Closeable;
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
        class ChecksumIndexInput;
        class IndexInput;
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

        class Directory : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_close_3353d9f14bbfd91a,
            mid_copyFrom_25fbf0c6389d2944,
            mid_createOutput_cb8add97217e4b75,
            mid_createTempOutput_1aab0a5f74a297d8,
            mid_deleteFile_4a883f7810d2effa,
            mid_fileLength_f9e0f284a35cbac5,
            mid_getPendingDeletions_9a625d56b67c7390,
            mid_listAll_995db70818ff4363,
            mid_obtainLock_dd5331b0e34099ce,
            mid_openChecksumInput_bf0704013e5eb0fb,
            mid_openInput_6054820b0be0358d,
            mid_rename_1c92f57e5f37bb8d,
            mid_sync_568dc3e0933a89e8,
            mid_syncMetaData_3353d9f14bbfd91a,
            mid_toString_dc633f13a47328a8,
            mid_getTempFileName_6cecf3645fa448aa,
            mid_ensureOpen_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Directory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Directory(const Directory& obj) : ::java::lang::Object(obj) {}

          Directory();

          void close() const;
          void copyFrom(const Directory &, const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          ::java::util::Set getPendingDeletions() const;
          JArray< ::java::lang::String > listAll() const;
          ::org::apache::lucene::store::Lock obtainLock(const ::java::lang::String &) const;
          ::org::apache::lucene::store::ChecksumIndexInput openChecksumInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void rename(const ::java::lang::String &, const ::java::lang::String &) const;
          void sync(const ::java::util::Collection &) const;
          void syncMetaData() const;
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
        extern PyType_Def PY_TYPE_DEF(Directory);
        extern PyTypeObject *PY_TYPE(Directory);

        class t_Directory {
        public:
          PyObject_HEAD
          Directory object;
          static PyObject *wrap_Object(const Directory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
