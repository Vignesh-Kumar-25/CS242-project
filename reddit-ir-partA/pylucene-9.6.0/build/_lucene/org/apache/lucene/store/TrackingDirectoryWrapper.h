#ifndef org_apache_lucene_store_TrackingDirectoryWrapper_H
#define org_apache_lucene_store_TrackingDirectoryWrapper_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class IndexOutput;
        class Directory;
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
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

        class TrackingDirectoryWrapper : public ::org::apache::lucene::store::FilterDirectory {
         public:
          enum {
            mid_init$_31453c15367f1d64,
            mid_clearCreatedFiles_3353d9f14bbfd91a,
            mid_copyFrom_25fbf0c6389d2944,
            mid_createOutput_cb8add97217e4b75,
            mid_createTempOutput_1aab0a5f74a297d8,
            mid_deleteFile_4a883f7810d2effa,
            mid_getCreatedFiles_9a625d56b67c7390,
            mid_rename_1c92f57e5f37bb8d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TrackingDirectoryWrapper(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TrackingDirectoryWrapper(const TrackingDirectoryWrapper& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

          TrackingDirectoryWrapper(const ::org::apache::lucene::store::Directory &);

          void clearCreatedFiles() const;
          void copyFrom(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          ::java::util::Set getCreatedFiles() const;
          void rename(const ::java::lang::String &, const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(TrackingDirectoryWrapper);
        extern PyTypeObject *PY_TYPE(TrackingDirectoryWrapper);

        class t_TrackingDirectoryWrapper {
        public:
          PyObject_HEAD
          TrackingDirectoryWrapper object;
          static PyObject *wrap_Object(const TrackingDirectoryWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
