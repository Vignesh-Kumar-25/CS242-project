#ifndef org_apache_lucene_store_ByteBuffersDirectory_H
#define org_apache_lucene_store_ByteBuffersDirectory_H

#include "org/apache/lucene/store/BaseDirectory.h"

namespace java {
  namespace util {
    namespace function {
      class Supplier;
      class BiFunction;
    }
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
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class IndexOutput;
        class LockFactory;
        class IndexInput;
        class ByteBuffersDataOutput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ByteBuffersDirectory : public ::org::apache::lucene::store::BaseDirectory {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_49ffc4f8e1719136,
            mid_init$_9b072fd37836a676,
            mid_close_3353d9f14bbfd91a,
            mid_createOutput_cb8add97217e4b75,
            mid_createTempOutput_1aab0a5f74a297d8,
            mid_deleteFile_4a883f7810d2effa,
            mid_fileExists_77e0b5c3eb1962ba,
            mid_fileLength_f9e0f284a35cbac5,
            mid_getPendingDeletions_9a625d56b67c7390,
            mid_listAll_995db70818ff4363,
            mid_openInput_6054820b0be0358d,
            mid_rename_1c92f57e5f37bb8d,
            mid_sync_568dc3e0933a89e8,
            mid_syncMetaData_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBuffersDirectory(jobject obj) : ::org::apache::lucene::store::BaseDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBuffersDirectory(const ByteBuffersDirectory& obj) : ::org::apache::lucene::store::BaseDirectory(obj) {}

          static ::java::util::function::BiFunction *OUTPUT_AS_BYTE_ARRAY;
          static ::java::util::function::BiFunction *OUTPUT_AS_MANY_BUFFERS;
          static ::java::util::function::BiFunction *OUTPUT_AS_MANY_BUFFERS_LUCENE;
          static ::java::util::function::BiFunction *OUTPUT_AS_ONE_BUFFER;

          ByteBuffersDirectory();
          ByteBuffersDirectory(const ::org::apache::lucene::store::LockFactory &);
          ByteBuffersDirectory(const ::org::apache::lucene::store::LockFactory &, const ::java::util::function::Supplier &, const ::java::util::function::BiFunction &);

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jboolean fileExists(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          ::java::util::Set getPendingDeletions() const;
          JArray< ::java::lang::String > listAll() const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(ByteBuffersDirectory);
        extern PyTypeObject *PY_TYPE(ByteBuffersDirectory);

        class t_ByteBuffersDirectory {
        public:
          PyObject_HEAD
          ByteBuffersDirectory object;
          static PyObject *wrap_Object(const ByteBuffersDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
