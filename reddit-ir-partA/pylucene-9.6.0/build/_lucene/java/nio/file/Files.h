#ifndef java_nio_file_Files_H
#define java_nio_file_Files_H

#include "java/lang/Object.h"

namespace java {
  namespace nio {
    namespace file {
      class FileStore;
      class OpenOption;
      class LinkOption;
      class DirectoryStream;
      class FileVisitOption;
      class FileVisitor;
      class DirectoryStream$Filter;
      class Path;
      class CopyOption;
    }
  }
  namespace lang {
    class Iterable;
    class CharSequence;
    class Class;
    class String;
  }
  namespace util {
    class Set;
    class Map;
    class List;
  }
  namespace io {
    class BufferedReader;
    class InputStream;
    class IOException;
    class BufferedWriter;
    class OutputStream;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class Files : public ::java::lang::Object {
       public:
        enum {
          mid_copy_f93d5fa2e02c855c,
          mid_copy_53da0a628edb5647,
          mid_copy_535ac2f20a15be0c,
          mid_createLink_6118678c660e937d,
          mid_delete_9a1eff7d5b4532fc,
          mid_deleteIfExists_680f1775746ffbbc,
          mid_exists_4fc25931ad63e554,
          mid_getAttribute_01f74481f991fe46,
          mid_getFileStore_08b4c5b3cef5347f,
          mid_isDirectory_4fc25931ad63e554,
          mid_isExecutable_680f1775746ffbbc,
          mid_isHidden_680f1775746ffbbc,
          mid_isReadable_680f1775746ffbbc,
          mid_isRegularFile_4fc25931ad63e554,
          mid_isSameFile_0375f18fefa4337b,
          mid_isSymbolicLink_680f1775746ffbbc,
          mid_isWritable_680f1775746ffbbc,
          mid_move_535ac2f20a15be0c,
          mid_newBufferedReader_d17e0e2a6c49a643,
          mid_newBufferedWriter_b747ec02aeb065bc,
          mid_newDirectoryStream_0cff631ad16a65ef,
          mid_newDirectoryStream_0801c9688de89662,
          mid_newDirectoryStream_a576c0e3895b10d8,
          mid_newInputStream_80cb8489e4188a5b,
          mid_newOutputStream_02eb1abb6e343ad2,
          mid_notExists_4fc25931ad63e554,
          mid_probeContentType_6e52cea42cc4c64f,
          mid_readAllBytes_17c2bb1fb9cb3c32,
          mid_readAllLines_1fad6933602efaa1,
          mid_readAttributes_be03fd3b4f719725,
          mid_readString_6e52cea42cc4c64f,
          mid_readSymbolicLink_de02f28688981941,
          mid_setAttribute_fea20181787d956b,
          mid_size_53223e05e09ddd29,
          mid_walkFileTree_2963528e4d7e583a,
          mid_walkFileTree_4b4972bf78d1d461,
          mid_write_1370f467167a2c14,
          mid_write_a98b90c387832162,
          mid_writeString_6dc721ff5cfa3b9e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Files(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Files(const Files& obj) : ::java::lang::Object(obj) {}

        static jlong copy(const ::java::nio::file::Path &, const ::java::io::OutputStream &);
        static jlong copy(const ::java::io::InputStream &, const ::java::nio::file::Path &, const JArray< ::java::nio::file::CopyOption > &);
        static ::java::nio::file::Path copy(const ::java::nio::file::Path &, const ::java::nio::file::Path &, const JArray< ::java::nio::file::CopyOption > &);
        static ::java::nio::file::Path createLink(const ::java::nio::file::Path &, const ::java::nio::file::Path &);
        static void delete$(const ::java::nio::file::Path &);
        static jboolean deleteIfExists(const ::java::nio::file::Path &);
        static jboolean exists(const ::java::nio::file::Path &, const JArray< ::java::nio::file::LinkOption > &);
        static ::java::lang::Object getAttribute(const ::java::nio::file::Path &, const ::java::lang::String &, const JArray< ::java::nio::file::LinkOption > &);
        static ::java::nio::file::FileStore getFileStore(const ::java::nio::file::Path &);
        static jboolean isDirectory(const ::java::nio::file::Path &, const JArray< ::java::nio::file::LinkOption > &);
        static jboolean isExecutable(const ::java::nio::file::Path &);
        static jboolean isHidden(const ::java::nio::file::Path &);
        static jboolean isReadable(const ::java::nio::file::Path &);
        static jboolean isRegularFile(const ::java::nio::file::Path &, const JArray< ::java::nio::file::LinkOption > &);
        static jboolean isSameFile(const ::java::nio::file::Path &, const ::java::nio::file::Path &);
        static jboolean isSymbolicLink(const ::java::nio::file::Path &);
        static jboolean isWritable(const ::java::nio::file::Path &);
        static ::java::nio::file::Path move(const ::java::nio::file::Path &, const ::java::nio::file::Path &, const JArray< ::java::nio::file::CopyOption > &);
        static ::java::io::BufferedReader newBufferedReader(const ::java::nio::file::Path &);
        static ::java::io::BufferedWriter newBufferedWriter(const ::java::nio::file::Path &, const JArray< ::java::nio::file::OpenOption > &);
        static ::java::nio::file::DirectoryStream newDirectoryStream(const ::java::nio::file::Path &);
        static ::java::nio::file::DirectoryStream newDirectoryStream(const ::java::nio::file::Path &, const ::java::lang::String &);
        static ::java::nio::file::DirectoryStream newDirectoryStream(const ::java::nio::file::Path &, const ::java::nio::file::DirectoryStream$Filter &);
        static ::java::io::InputStream newInputStream(const ::java::nio::file::Path &, const JArray< ::java::nio::file::OpenOption > &);
        static ::java::io::OutputStream newOutputStream(const ::java::nio::file::Path &, const JArray< ::java::nio::file::OpenOption > &);
        static jboolean notExists(const ::java::nio::file::Path &, const JArray< ::java::nio::file::LinkOption > &);
        static ::java::lang::String probeContentType(const ::java::nio::file::Path &);
        static JArray< jbyte > readAllBytes(const ::java::nio::file::Path &);
        static ::java::util::List readAllLines(const ::java::nio::file::Path &);
        static ::java::util::Map readAttributes(const ::java::nio::file::Path &, const ::java::lang::String &, const JArray< ::java::nio::file::LinkOption > &);
        static ::java::lang::String readString(const ::java::nio::file::Path &);
        static ::java::nio::file::Path readSymbolicLink(const ::java::nio::file::Path &);
        static ::java::nio::file::Path setAttribute(const ::java::nio::file::Path &, const ::java::lang::String &, const ::java::lang::Object &, const JArray< ::java::nio::file::LinkOption > &);
        static jlong size(const ::java::nio::file::Path &);
        static ::java::nio::file::Path walkFileTree(const ::java::nio::file::Path &, const ::java::nio::file::FileVisitor &);
        static ::java::nio::file::Path walkFileTree(const ::java::nio::file::Path &, const ::java::util::Set &, jint, const ::java::nio::file::FileVisitor &);
        static ::java::nio::file::Path write(const ::java::nio::file::Path &, const JArray< jbyte > &, const JArray< ::java::nio::file::OpenOption > &);
        static ::java::nio::file::Path write(const ::java::nio::file::Path &, const ::java::lang::Iterable &, const JArray< ::java::nio::file::OpenOption > &);
        static ::java::nio::file::Path writeString(const ::java::nio::file::Path &, const ::java::lang::CharSequence &, const JArray< ::java::nio::file::OpenOption > &);
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(Files);
      extern PyTypeObject *PY_TYPE(Files);

      class t_Files {
      public:
        PyObject_HEAD
        Files object;
        static PyObject *wrap_Object(const Files&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
