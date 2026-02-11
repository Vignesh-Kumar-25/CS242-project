#ifndef java_nio_file_Path_H
#define java_nio_file_Path_H

#include "java/lang/Comparable.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Iterable;
    class Class;
    class Object;
    class String;
  }
  namespace nio {
    namespace file {
      class FileSystem;
      class WatchKey;
      class LinkOption;
      class WatchEvent$Kind;
      class WatchEvent$Modifier;
      class Watchable;
      class WatchService;
      class Path;
    }
  }
  namespace io {
    class File;
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class Path : public ::java::lang::Comparable {
       public:
        enum {
          mid_compareTo_09193ed38eda885b,
          mid_endsWith_77e0b5c3eb1962ba,
          mid_endsWith_680f1775746ffbbc,
          mid_equals_6084f78e09b6c0c3,
          mid_getFileName_bf71bce8533788de,
          mid_getFileSystem_b88fb3e0de39d786,
          mid_getName_6bff5f9fc57da221,
          mid_getNameCount_15aa3d485e96b665,
          mid_getParent_bf71bce8533788de,
          mid_getRoot_bf71bce8533788de,
          mid_hashCode_15aa3d485e96b665,
          mid_isAbsolute_ee8b0a5fa521ddac,
          mid_iterator_7c74834ad8788f5d,
          mid_normalize_bf71bce8533788de,
          mid_of_62136ed34441e619,
          mid_register_891998982142c5c9,
          mid_register_42ccb3ea29af170b,
          mid_relativize_de02f28688981941,
          mid_resolve_c11e342569233140,
          mid_resolve_de02f28688981941,
          mid_resolveSibling_c11e342569233140,
          mid_resolveSibling_de02f28688981941,
          mid_startsWith_77e0b5c3eb1962ba,
          mid_startsWith_680f1775746ffbbc,
          mid_subpath_b553a57f663592fb,
          mid_toAbsolutePath_bf71bce8533788de,
          mid_toFile_29ec1bcbc40b9879,
          mid_toRealPath_bdbada71621e9cc4,
          mid_toString_dc633f13a47328a8,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Path(jobject obj) : ::java::lang::Comparable(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Path(const Path& obj) : ::java::lang::Comparable(obj) {}

        jint compareTo(const Path &) const;
        jboolean endsWith(const ::java::lang::String &) const;
        jboolean endsWith(const Path &) const;
        jboolean equals(const ::java::lang::Object &) const;
        Path getFileName() const;
        ::java::nio::file::FileSystem getFileSystem() const;
        Path getName(jint) const;
        jint getNameCount() const;
        Path getParent() const;
        Path getRoot() const;
        jint hashCode() const;
        jboolean isAbsolute() const;
        ::java::util::Iterator iterator() const;
        Path normalize() const;
        static Path of(const ::java::lang::String &, const JArray< ::java::lang::String > &);
        ::java::nio::file::WatchKey register$(const ::java::nio::file::WatchService &, const JArray< ::java::nio::file::WatchEvent$Kind > &) const;
        ::java::nio::file::WatchKey register$(const ::java::nio::file::WatchService &, const JArray< ::java::nio::file::WatchEvent$Kind > &, const JArray< ::java::nio::file::WatchEvent$Modifier > &) const;
        Path relativize(const Path &) const;
        Path resolve(const ::java::lang::String &) const;
        Path resolve(const Path &) const;
        Path resolveSibling(const ::java::lang::String &) const;
        Path resolveSibling(const Path &) const;
        jboolean startsWith(const ::java::lang::String &) const;
        jboolean startsWith(const Path &) const;
        Path subpath(jint, jint) const;
        Path toAbsolutePath() const;
        ::java::io::File toFile() const;
        Path toRealPath(const JArray< ::java::nio::file::LinkOption > &) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(Path);
      extern PyTypeObject *PY_TYPE(Path);

      class t_Path {
      public:
        PyObject_HEAD
        Path object;
        static PyObject *wrap_Object(const Path&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
