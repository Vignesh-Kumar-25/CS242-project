#ifndef java_nio_file_FileSystem_H
#define java_nio_file_FileSystem_H

#include "java/lang/Object.h"

namespace java {
  namespace nio {
    namespace file {
      class FileStore;
      class PathMatcher;
      class WatchService;
      class Path;
    }
  }
  namespace lang {
    class Iterable;
    class Class;
    class String;
  }
  namespace util {
    class Set;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class FileSystem : public ::java::lang::Object {
       public:
        enum {
          mid_close_3353d9f14bbfd91a,
          mid_getFileStores_d5b0a7b20fe07dd6,
          mid_getPath_62136ed34441e619,
          mid_getPathMatcher_bc1607aa6ebcd896,
          mid_getRootDirectories_d5b0a7b20fe07dd6,
          mid_getSeparator_dc633f13a47328a8,
          mid_isOpen_ee8b0a5fa521ddac,
          mid_isReadOnly_ee8b0a5fa521ddac,
          mid_newWatchService_2499aa6c83392935,
          mid_supportedFileAttributeViews_9a625d56b67c7390,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FileSystem(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FileSystem(const FileSystem& obj) : ::java::lang::Object(obj) {}

        void close() const;
        ::java::lang::Iterable getFileStores() const;
        ::java::nio::file::Path getPath(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
        ::java::nio::file::PathMatcher getPathMatcher(const ::java::lang::String &) const;
        ::java::lang::Iterable getRootDirectories() const;
        ::java::lang::String getSeparator() const;
        jboolean isOpen() const;
        jboolean isReadOnly() const;
        ::java::nio::file::WatchService newWatchService() const;
        ::java::util::Set supportedFileAttributeViews() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(FileSystem);
      extern PyTypeObject *PY_TYPE(FileSystem);

      class t_FileSystem {
      public:
        PyObject_HEAD
        FileSystem object;
        static PyObject *wrap_Object(const FileSystem&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
