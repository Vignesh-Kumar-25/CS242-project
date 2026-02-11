#ifndef java_lang_ClassLoader_H
#define java_lang_ClassLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
  }
  namespace lang {
    class Package;
    class ClassNotFoundException;
    class Module;
    class Class;
    class String;
    class ClassLoader;
  }
  namespace util {
    class Enumeration;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ClassLoader : public ::java::lang::Object {
     public:
      enum {
        mid_clearAssertionStatus_3353d9f14bbfd91a,
        mid_getDefinedPackage_1abb35e92a81cbf1,
        mid_getDefinedPackages_a36c55e0474e9e5b,
        mid_getName_dc633f13a47328a8,
        mid_getParent_56f737cb9675ba6d,
        mid_getPlatformClassLoader_56f737cb9675ba6d,
        mid_getResourceAsStream_b80db603f07ddae0,
        mid_getSystemClassLoader_56f737cb9675ba6d,
        mid_getSystemResourceAsStream_b80db603f07ddae0,
        mid_getUnnamedModule_40120f5403807a40,
        mid_isRegisteredAsParallelCapable_ee8b0a5fa521ddac,
        mid_loadClass_ec52581e08fd2fb7,
        mid_setClassAssertionStatus_33d070369aa7d0f5,
        mid_setDefaultAssertionStatus_4f96af910856b303,
        mid_setPackageAssertionStatus_33d070369aa7d0f5,
        mid_loadClass_b477fca1bed7b5fe,
        mid_definePackage_6947341b7f8d8fe7,
        mid_getPackage_1abb35e92a81cbf1,
        mid_setSigners_e7372448bc224a25,
        mid_findResource_82bed06f4f3334bd,
        mid_findResource_a2323c36970a4950,
        mid_getClassLoadingLock_b03820155b67db98,
        mid_findClass_219e93dadbea5941,
        mid_findClass_ec52581e08fd2fb7,
        mid_defineClass_9ddf959200d5b04f,
        mid_defineClass_a9b46b0b3945a1d2,
        mid_defineClass_1b9baf261e5dbe1e,
        mid_defineClass_c4a700b5846eb36e,
        mid_resolveClass_9759e0f29e70b30d,
        mid_findSystemClass_ec52581e08fd2fb7,
        mid_findLoadedClass_ec52581e08fd2fb7,
        mid_findResources_86a9a70632cb837f,
        mid_registerAsParallelCapable_ee8b0a5fa521ddac,
        mid_getPackages_a36c55e0474e9e5b,
        mid_findLibrary_04612c8360f09496,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ClassLoader(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ClassLoader(const ClassLoader& obj) : ::java::lang::Object(obj) {}

      void clearAssertionStatus() const;
      ::java::lang::Package getDefinedPackage(const ::java::lang::String &) const;
      JArray< ::java::lang::Package > getDefinedPackages() const;
      ::java::lang::String getName() const;
      ClassLoader getParent() const;
      static ClassLoader getPlatformClassLoader();
      ::java::io::InputStream getResourceAsStream(const ::java::lang::String &) const;
      static ClassLoader getSystemClassLoader();
      static ::java::io::InputStream getSystemResourceAsStream(const ::java::lang::String &);
      ::java::lang::Module getUnnamedModule() const;
      jboolean isRegisteredAsParallelCapable() const;
      ::java::lang::Class loadClass(const ::java::lang::String &) const;
      void setClassAssertionStatus(const ::java::lang::String &, jboolean) const;
      void setDefaultAssertionStatus(jboolean) const;
      void setPackageAssertionStatus(const ::java::lang::String &, jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ClassLoader);
    extern PyTypeObject *PY_TYPE(ClassLoader);

    class t_ClassLoader {
    public:
      PyObject_HEAD
      ClassLoader object;
      static PyObject *wrap_Object(const ClassLoader&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
