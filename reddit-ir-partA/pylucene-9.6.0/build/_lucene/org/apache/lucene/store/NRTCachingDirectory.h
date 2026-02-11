#ifndef org_apache_lucene_store_NRTCachingDirectory_H
#define org_apache_lucene_store_NRTCachingDirectory_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace store {
        class IndexInput;
        class IOContext;
        class IndexOutput;
        class Directory;
      }
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class NRTCachingDirectory : public ::org::apache::lucene::store::FilterDirectory {
         public:
          enum {
            mid_init$_0c0584c647bd92f5,
            mid_close_3353d9f14bbfd91a,
            mid_createOutput_cb8add97217e4b75,
            mid_createTempOutput_1aab0a5f74a297d8,
            mid_deleteFile_4a883f7810d2effa,
            mid_fileLength_f9e0f284a35cbac5,
            mid_listAll_995db70818ff4363,
            mid_listCachedFiles_995db70818ff4363,
            mid_openInput_6054820b0be0358d,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            mid_rename_1c92f57e5f37bb8d,
            mid_sync_568dc3e0933a89e8,
            mid_toString_dc633f13a47328a8,
            mid_doCacheWrite_dd3e96cf8fa69691,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NRTCachingDirectory(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NRTCachingDirectory(const NRTCachingDirectory& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

          NRTCachingDirectory(const ::org::apache::lucene::store::Directory &, jdouble, jdouble);

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          JArray< ::java::lang::String > listAll() const;
          JArray< ::java::lang::String > listCachedFiles() const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          jlong ramBytesUsed() const;
          void rename(const ::java::lang::String &, const ::java::lang::String &) const;
          void sync(const ::java::util::Collection &) const;
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
        extern PyType_Def PY_TYPE_DEF(NRTCachingDirectory);
        extern PyTypeObject *PY_TYPE(NRTCachingDirectory);

        class t_NRTCachingDirectory {
        public:
          PyObject_HEAD
          NRTCachingDirectory object;
          static PyObject *wrap_Object(const NRTCachingDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
