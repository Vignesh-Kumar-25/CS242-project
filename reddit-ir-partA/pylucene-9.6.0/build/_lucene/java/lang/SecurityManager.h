#ifndef java_lang_SecurityManager_H
#define java_lang_SecurityManager_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Thread;
    class Class;
    class String;
    class ThreadGroup;
  }
  namespace io {
    class FileDescriptor;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class SecurityManager : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_checkAccept_751a1c1a1ca09c1d,
        mid_checkAccess_2d4d2b83aaf8065b,
        mid_checkAccess_90ce520f3b9a97fb,
        mid_checkConnect_751a1c1a1ca09c1d,
        mid_checkConnect_0d29c203f8a8ef7d,
        mid_checkCreateClassLoader_3353d9f14bbfd91a,
        mid_checkDelete_4a883f7810d2effa,
        mid_checkExec_4a883f7810d2effa,
        mid_checkExit_da425451c8de636b,
        mid_checkLink_4a883f7810d2effa,
        mid_checkListen_da425451c8de636b,
        mid_checkPackageAccess_4a883f7810d2effa,
        mid_checkPackageDefinition_4a883f7810d2effa,
        mid_checkPrintJobAccess_3353d9f14bbfd91a,
        mid_checkPropertiesAccess_3353d9f14bbfd91a,
        mid_checkPropertyAccess_4a883f7810d2effa,
        mid_checkRead_d374dfb8ab300826,
        mid_checkRead_4a883f7810d2effa,
        mid_checkRead_d3d9e43ce4a29095,
        mid_checkSecurityAccess_4a883f7810d2effa,
        mid_checkSetFactory_3353d9f14bbfd91a,
        mid_checkWrite_d374dfb8ab300826,
        mid_checkWrite_4a883f7810d2effa,
        mid_getSecurityContext_bdd51648087bae52,
        mid_getThreadGroup_ee9728bd568247cd,
        mid_getClassContext_065a3789ccc8e24f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SecurityManager(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SecurityManager(const SecurityManager& obj) : ::java::lang::Object(obj) {}

      SecurityManager();

      void checkAccept(const ::java::lang::String &, jint) const;
      void checkAccess(const ::java::lang::Thread &) const;
      void checkAccess(const ::java::lang::ThreadGroup &) const;
      void checkConnect(const ::java::lang::String &, jint) const;
      void checkConnect(const ::java::lang::String &, jint, const ::java::lang::Object &) const;
      void checkCreateClassLoader() const;
      void checkDelete(const ::java::lang::String &) const;
      void checkExec(const ::java::lang::String &) const;
      void checkExit(jint) const;
      void checkLink(const ::java::lang::String &) const;
      void checkListen(jint) const;
      void checkPackageAccess(const ::java::lang::String &) const;
      void checkPackageDefinition(const ::java::lang::String &) const;
      void checkPrintJobAccess() const;
      void checkPropertiesAccess() const;
      void checkPropertyAccess(const ::java::lang::String &) const;
      void checkRead(const ::java::io::FileDescriptor &) const;
      void checkRead(const ::java::lang::String &) const;
      void checkRead(const ::java::lang::String &, const ::java::lang::Object &) const;
      void checkSecurityAccess(const ::java::lang::String &) const;
      void checkSetFactory() const;
      void checkWrite(const ::java::io::FileDescriptor &) const;
      void checkWrite(const ::java::lang::String &) const;
      ::java::lang::Object getSecurityContext() const;
      ::java::lang::ThreadGroup getThreadGroup() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(SecurityManager);
    extern PyTypeObject *PY_TYPE(SecurityManager);

    class t_SecurityManager {
    public:
      PyObject_HEAD
      SecurityManager object;
      static PyObject *wrap_Object(const SecurityManager&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
