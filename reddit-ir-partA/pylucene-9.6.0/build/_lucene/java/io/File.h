#ifndef java_io_File_H
#define java_io_File_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class FilenameFilter;
    class Serializable;
    class FileFilter;
    class File;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class File : public ::java::lang::Object {
     public:
      enum {
        mid_init$_4a883f7810d2effa,
        mid_init$_bd5bfd862b432199,
        mid_init$_1c92f57e5f37bb8d,
        mid_canExecute_ee8b0a5fa521ddac,
        mid_canRead_ee8b0a5fa521ddac,
        mid_canWrite_ee8b0a5fa521ddac,
        mid_compareTo_b279390bf9990d1c,
        mid_createNewFile_ee8b0a5fa521ddac,
        mid_createTempFile_5bd0f5b56eedab9c,
        mid_createTempFile_e185bc6e1a7df8d2,
        mid_delete_ee8b0a5fa521ddac,
        mid_deleteOnExit_3353d9f14bbfd91a,
        mid_equals_6084f78e09b6c0c3,
        mid_exists_ee8b0a5fa521ddac,
        mid_getAbsoluteFile_29ec1bcbc40b9879,
        mid_getAbsolutePath_dc633f13a47328a8,
        mid_getCanonicalFile_29ec1bcbc40b9879,
        mid_getCanonicalPath_dc633f13a47328a8,
        mid_getFreeSpace_058f5911dcf5d8a4,
        mid_getName_dc633f13a47328a8,
        mid_getParent_dc633f13a47328a8,
        mid_getParentFile_29ec1bcbc40b9879,
        mid_getPath_dc633f13a47328a8,
        mid_getTotalSpace_058f5911dcf5d8a4,
        mid_getUsableSpace_058f5911dcf5d8a4,
        mid_hashCode_15aa3d485e96b665,
        mid_isAbsolute_ee8b0a5fa521ddac,
        mid_isDirectory_ee8b0a5fa521ddac,
        mid_isFile_ee8b0a5fa521ddac,
        mid_isHidden_ee8b0a5fa521ddac,
        mid_lastModified_058f5911dcf5d8a4,
        mid_length_058f5911dcf5d8a4,
        mid_list_995db70818ff4363,
        mid_list_e32749330550ac0a,
        mid_listFiles_d1010cb8aa0d0841,
        mid_listFiles_d2fa36c4b45eabd7,
        mid_listFiles_c621868419ceddfd,
        mid_listRoots_d1010cb8aa0d0841,
        mid_mkdir_ee8b0a5fa521ddac,
        mid_mkdirs_ee8b0a5fa521ddac,
        mid_renameTo_a9612cdd9f30e3f8,
        mid_setExecutable_c0205ec42405174a,
        mid_setExecutable_ce77a5df2af0a56f,
        mid_setLastModified_2000a3857a9ce9c5,
        mid_setReadOnly_ee8b0a5fa521ddac,
        mid_setReadable_c0205ec42405174a,
        mid_setReadable_ce77a5df2af0a56f,
        mid_setWritable_c0205ec42405174a,
        mid_setWritable_ce77a5df2af0a56f,
        mid_toPath_bf71bce8533788de,
        mid_toString_dc633f13a47328a8,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit File(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      File(const File& obj) : ::java::lang::Object(obj) {}

      static ::java::lang::String *pathSeparator;
      static jchar pathSeparatorChar;
      static ::java::lang::String *separator;
      static jchar separatorChar;

      File(const ::java::lang::String &);
      File(const File &, const ::java::lang::String &);
      File(const ::java::lang::String &, const ::java::lang::String &);

      jboolean canExecute() const;
      jboolean canRead() const;
      jboolean canWrite() const;
      jint compareTo(const File &) const;
      jboolean createNewFile() const;
      static File createTempFile(const ::java::lang::String &, const ::java::lang::String &);
      static File createTempFile(const ::java::lang::String &, const ::java::lang::String &, const File &);
      jboolean delete$() const;
      void deleteOnExit() const;
      jboolean equals(const ::java::lang::Object &) const;
      jboolean exists() const;
      File getAbsoluteFile() const;
      ::java::lang::String getAbsolutePath() const;
      File getCanonicalFile() const;
      ::java::lang::String getCanonicalPath() const;
      jlong getFreeSpace() const;
      ::java::lang::String getName() const;
      ::java::lang::String getParent() const;
      File getParentFile() const;
      ::java::lang::String getPath() const;
      jlong getTotalSpace() const;
      jlong getUsableSpace() const;
      jint hashCode() const;
      jboolean isAbsolute() const;
      jboolean isDirectory() const;
      jboolean isFile() const;
      jboolean isHidden() const;
      jlong lastModified() const;
      jlong length() const;
      JArray< ::java::lang::String > list() const;
      JArray< ::java::lang::String > list(const ::java::io::FilenameFilter &) const;
      JArray< File > listFiles() const;
      JArray< File > listFiles(const ::java::io::FileFilter &) const;
      JArray< File > listFiles(const ::java::io::FilenameFilter &) const;
      static JArray< File > listRoots();
      jboolean mkdir() const;
      jboolean mkdirs() const;
      jboolean renameTo(const File &) const;
      jboolean setExecutable(jboolean) const;
      jboolean setExecutable(jboolean, jboolean) const;
      jboolean setLastModified(jlong) const;
      jboolean setReadOnly() const;
      jboolean setReadable(jboolean) const;
      jboolean setReadable(jboolean, jboolean) const;
      jboolean setWritable(jboolean) const;
      jboolean setWritable(jboolean, jboolean) const;
      ::java::nio::file::Path toPath() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(File);
    extern PyTypeObject *PY_TYPE(File);

    class t_File {
    public:
      PyObject_HEAD
      File object;
      static PyObject *wrap_Object(const File&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
