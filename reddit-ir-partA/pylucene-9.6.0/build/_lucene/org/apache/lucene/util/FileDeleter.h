#ifndef org_apache_lucene_util_FileDeleter_H
#define org_apache_lucene_util_FileDeleter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class Set;
    namespace function {
      class BiConsumer;
    }
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
      namespace util {
        class FileDeleter$MsgType;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class FileDeleter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_6206df285d1d14da,
            mid_decRef_568dc3e0933a89e8,
            mid_deleteFileIfNoRef_4a883f7810d2effa,
            mid_deleteFilesIfNoRef_568dc3e0933a89e8,
            mid_exists_77e0b5c3eb1962ba,
            mid_forceDelete_4a883f7810d2effa,
            mid_getAllFiles_9a625d56b67c7390,
            mid_getRefCount_08c5dabd7f8f1590,
            mid_getUnrefedFiles_9a625d56b67c7390,
            mid_incRef_4a883f7810d2effa,
            mid_incRef_568dc3e0933a89e8,
            mid_initRefCount_4a883f7810d2effa,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FileDeleter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FileDeleter(const FileDeleter& obj) : ::java::lang::Object(obj) {}

          FileDeleter(const ::org::apache::lucene::store::Directory &, const ::java::util::function::BiConsumer &);

          void decRef(const ::java::util::Collection &) const;
          void deleteFileIfNoRef(const ::java::lang::String &) const;
          void deleteFilesIfNoRef(const ::java::util::Collection &) const;
          jboolean exists(const ::java::lang::String &) const;
          void forceDelete(const ::java::lang::String &) const;
          ::java::util::Set getAllFiles() const;
          jint getRefCount(const ::java::lang::String &) const;
          ::java::util::Set getUnrefedFiles() const;
          void incRef(const ::java::lang::String &) const;
          void incRef(const ::java::util::Collection &) const;
          void initRefCount(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(FileDeleter);
        extern PyTypeObject *PY_TYPE(FileDeleter);

        class t_FileDeleter {
        public:
          PyObject_HEAD
          FileDeleter object;
          static PyObject *wrap_Object(const FileDeleter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
