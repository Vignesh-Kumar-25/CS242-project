#ifndef org_apache_lucene_store_FSDirectory_H
#define org_apache_lucene_store_FSDirectory_H

#include "org/apache/lucene/store/BaseDirectory.h"

namespace java {
  namespace util {
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class IndexOutput;
        class LockFactory;
        class FSDirectory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class FSDirectory : public ::org::apache::lucene::store::BaseDirectory {
         public:
          enum {
            mid_close_3353d9f14bbfd91a,
            mid_createOutput_cb8add97217e4b75,
            mid_createTempOutput_1aab0a5f74a297d8,
            mid_deleteFile_4a883f7810d2effa,
            mid_deletePendingFiles_3353d9f14bbfd91a,
            mid_fileLength_f9e0f284a35cbac5,
            mid_getDirectory_bf71bce8533788de,
            mid_getPendingDeletions_9a625d56b67c7390,
            mid_listAll_995db70818ff4363,
            mid_listAll_560900f723d82206,
            mid_open_ef888299e80399c5,
            mid_open_ff59279eb4fd0788,
            mid_rename_1c92f57e5f37bb8d,
            mid_sync_568dc3e0933a89e8,
            mid_syncMetaData_3353d9f14bbfd91a,
            mid_toString_dc633f13a47328a8,
            mid_ensureCanRead_4a883f7810d2effa,
            mid_fsync_4a883f7810d2effa,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FSDirectory(jobject obj) : ::org::apache::lucene::store::BaseDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FSDirectory(const FSDirectory& obj) : ::org::apache::lucene::store::BaseDirectory(obj) {}

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          void deletePendingFiles() const;
          jlong fileLength(const ::java::lang::String &) const;
          ::java::nio::file::Path getDirectory() const;
          ::java::util::Set getPendingDeletions() const;
          JArray< ::java::lang::String > listAll() const;
          static JArray< ::java::lang::String > listAll(const ::java::nio::file::Path &);
          static FSDirectory open(const ::java::nio::file::Path &);
          static FSDirectory open(const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &);
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
        extern PyType_Def PY_TYPE_DEF(FSDirectory);
        extern PyTypeObject *PY_TYPE(FSDirectory);

        class t_FSDirectory {
        public:
          PyObject_HEAD
          FSDirectory object;
          static PyObject *wrap_Object(const FSDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
