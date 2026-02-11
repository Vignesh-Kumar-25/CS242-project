#ifndef org_apache_lucene_util_ModuleResourceLoader_H
#define org_apache_lucene_util_ModuleResourceLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class IOException;
  }
  namespace lang {
    class Module;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class ResourceLoader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class ModuleResourceLoader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_dd93b28326aae6eb,
            mid_findClass_04b1574bce7c97c6,
            mid_openResource_b80db603f07ddae0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ModuleResourceLoader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ModuleResourceLoader(const ModuleResourceLoader& obj) : ::java::lang::Object(obj) {}

          ModuleResourceLoader(const ::java::lang::Module &);

          ::java::lang::Class findClass(const ::java::lang::String &, const ::java::lang::Class &) const;
          ::java::io::InputStream openResource(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(ModuleResourceLoader);
        extern PyTypeObject *PY_TYPE(ModuleResourceLoader);

        class t_ModuleResourceLoader {
        public:
          PyObject_HEAD
          ModuleResourceLoader object;
          static PyObject *wrap_Object(const ModuleResourceLoader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
