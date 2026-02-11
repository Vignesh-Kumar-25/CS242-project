#ifndef org_apache_lucene_util_CommandLineUtil_H
#define org_apache_lucene_util_CommandLineUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ClassNotFoundException;
    class ReflectiveOperationException;
    class Class;
    class String;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class LockFactory;
        class Directory;
        class FSDirectory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class CommandLineUtil : public ::java::lang::Object {
         public:
          enum {
            mid_loadDirectoryClass_ec52581e08fd2fb7,
            mid_loadFSDirectoryClass_ec52581e08fd2fb7,
            mid_newFSDirectory_1ca0d19a76956379,
            mid_newFSDirectory_c7d1652837d5ad74,
            mid_newFSDirectory_c931a4903ba613b7,
            mid_newFSDirectory_19fa2d7ef064abc4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CommandLineUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CommandLineUtil(const CommandLineUtil& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::Class loadDirectoryClass(const ::java::lang::String &);
          static ::java::lang::Class loadFSDirectoryClass(const ::java::lang::String &);
          static ::org::apache::lucene::store::FSDirectory newFSDirectory(const ::java::lang::Class &, const ::java::nio::file::Path &);
          static ::org::apache::lucene::store::FSDirectory newFSDirectory(const ::java::lang::String &, const ::java::nio::file::Path &);
          static ::org::apache::lucene::store::FSDirectory newFSDirectory(const ::java::lang::Class &, const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &);
          static ::org::apache::lucene::store::FSDirectory newFSDirectory(const ::java::lang::String &, const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &);
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
        extern PyType_Def PY_TYPE_DEF(CommandLineUtil);
        extern PyTypeObject *PY_TYPE(CommandLineUtil);

        class t_CommandLineUtil {
        public:
          PyObject_HEAD
          CommandLineUtil object;
          static PyObject *wrap_Object(const CommandLineUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
