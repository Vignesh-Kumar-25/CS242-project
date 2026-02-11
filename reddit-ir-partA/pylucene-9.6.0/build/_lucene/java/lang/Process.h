#ifndef java_lang_Process_H
#define java_lang_Process_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ProcessHandle$Info;
    class ProcessHandle;
    class InterruptedException;
    class Class;
    class Process;
  }
  namespace io {
    class OutputStream;
    class InputStream;
  }
  namespace util {
    namespace concurrent {
      class TimeUnit;
      class CompletableFuture;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Process : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_destroy_3353d9f14bbfd91a,
        mid_destroyForcibly_556a7252e9d41048,
        mid_exitValue_15aa3d485e96b665,
        mid_getErrorStream_47c24769198305c2,
        mid_getInputStream_47c24769198305c2,
        mid_getOutputStream_e24c7d179e385f3a,
        mid_info_dcb0f3995d085b84,
        mid_isAlive_ee8b0a5fa521ddac,
        mid_onExit_8b022ffd0e46887e,
        mid_pid_058f5911dcf5d8a4,
        mid_supportsNormalTermination_ee8b0a5fa521ddac,
        mid_toHandle_bd8cd99ee0175b66,
        mid_waitFor_15aa3d485e96b665,
        mid_waitFor_c95241c478ee8bc9,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Process(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Process(const Process& obj) : ::java::lang::Object(obj) {}

      Process();

      void destroy() const;
      Process destroyForcibly() const;
      jint exitValue() const;
      ::java::io::InputStream getErrorStream() const;
      ::java::io::InputStream getInputStream() const;
      ::java::io::OutputStream getOutputStream() const;
      ::java::lang::ProcessHandle$Info info() const;
      jboolean isAlive() const;
      ::java::util::concurrent::CompletableFuture onExit() const;
      jlong pid() const;
      jboolean supportsNormalTermination() const;
      ::java::lang::ProcessHandle toHandle() const;
      jint waitFor() const;
      jboolean waitFor(jlong, const ::java::util::concurrent::TimeUnit &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Process);
    extern PyTypeObject *PY_TYPE(Process);

    class t_Process {
    public:
      PyObject_HEAD
      Process object;
      static PyObject *wrap_Object(const Process&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
