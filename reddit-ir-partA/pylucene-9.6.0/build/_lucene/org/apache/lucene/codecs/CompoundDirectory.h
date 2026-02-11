#ifndef org_apache_lucene_codecs_CompoundDirectory_H
#define org_apache_lucene_codecs_CompoundDirectory_H

#include "org/apache/lucene/store/Directory.h"

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
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class CompoundDirectory : public ::org::apache::lucene::store::Directory {
         public:
          enum {
            mid_checkIntegrity_3353d9f14bbfd91a,
            mid_createOutput_cb8add97217e4b75,
            mid_createTempOutput_1aab0a5f74a297d8,
            mid_deleteFile_4a883f7810d2effa,
            mid_obtainLock_dd5331b0e34099ce,
            mid_rename_1c92f57e5f37bb8d,
            mid_sync_568dc3e0933a89e8,
            mid_syncMetaData_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CompoundDirectory(jobject obj) : ::org::apache::lucene::store::Directory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CompoundDirectory(const CompoundDirectory& obj) : ::org::apache::lucene::store::Directory(obj) {}

          void checkIntegrity() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          ::org::apache::lucene::store::Lock obtainLock(const ::java::lang::String &) const;
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
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(CompoundDirectory);
        extern PyTypeObject *PY_TYPE(CompoundDirectory);

        class t_CompoundDirectory {
        public:
          PyObject_HEAD
          CompoundDirectory object;
          static PyObject *wrap_Object(const CompoundDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
