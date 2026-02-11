#ifndef org_apache_pylucene_store_PythonDirectory_H
#define org_apache_pylucene_store_PythonDirectory_H

#include "org/apache/lucene/store/Directory.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
  namespace util {
    class Collection;
    class Set;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Lock;
        class IOContext;
        class IndexOutput;
        class IndexInput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {

        class PythonDirectory : public ::org::apache::lucene::store::Directory {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_close_3353d9f14bbfd91a,
            mid_createOutput_cb8add97217e4b75,
            mid_createTempOutput_1aab0a5f74a297d8,
            mid_deleteFile_4a883f7810d2effa,
            mid_fileLength_f9e0f284a35cbac5,
            mid_finalize_3353d9f14bbfd91a,
            mid_getPendingDeletions_9a625d56b67c7390,
            mid_listAll_995db70818ff4363,
            mid_obtainLock_dd5331b0e34099ce,
            mid_openInput_6054820b0be0358d,
            mid_pythonDecRef_3353d9f14bbfd91a,
            mid_pythonExtension_058f5911dcf5d8a4,
            mid_pythonExtension_db2028ac45cd5b77,
            mid_rename_1c92f57e5f37bb8d,
            mid_sync_4a883f7810d2effa,
            mid_sync_568dc3e0933a89e8,
            mid_syncMetaData_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonDirectory(jobject obj) : ::org::apache::lucene::store::Directory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonDirectory(const PythonDirectory& obj) : ::org::apache::lucene::store::Directory(obj) {}

          PythonDirectory();

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          void finalize() const;
          ::java::util::Set getPendingDeletions() const;
          JArray< ::java::lang::String > listAll() const;
          ::org::apache::lucene::store::Lock obtainLock(const ::java::lang::String &) const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void rename(const ::java::lang::String &, const ::java::lang::String &) const;
          void sync(const ::java::lang::String &) const;
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
    namespace pylucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(PythonDirectory);
        extern PyTypeObject *PY_TYPE(PythonDirectory);

        class t_PythonDirectory {
        public:
          PyObject_HEAD
          PythonDirectory object;
          static PyObject *wrap_Object(const PythonDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
