#ifndef java_nio_file_FileStore_H
#define java_nio_file_FileStore_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class FileStore : public ::java::lang::Object {
       public:
        enum {
          mid_getAttribute_b03820155b67db98,
          mid_getBlockSize_058f5911dcf5d8a4,
          mid_getTotalSpace_058f5911dcf5d8a4,
          mid_getUnallocatedSpace_058f5911dcf5d8a4,
          mid_getUsableSpace_058f5911dcf5d8a4,
          mid_isReadOnly_ee8b0a5fa521ddac,
          mid_name_dc633f13a47328a8,
          mid_supportsFileAttributeView_77e0b5c3eb1962ba,
          mid_type_dc633f13a47328a8,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FileStore(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FileStore(const FileStore& obj) : ::java::lang::Object(obj) {}

        ::java::lang::Object getAttribute(const ::java::lang::String &) const;
        jlong getBlockSize() const;
        jlong getTotalSpace() const;
        jlong getUnallocatedSpace() const;
        jlong getUsableSpace() const;
        jboolean isReadOnly() const;
        ::java::lang::String name() const;
        jboolean supportsFileAttributeView(const ::java::lang::String &) const;
        ::java::lang::String type() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(FileStore);
      extern PyTypeObject *PY_TYPE(FileStore);

      class t_FileStore {
      public:
        PyObject_HEAD
        FileStore object;
        static PyObject *wrap_Object(const FileStore&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
