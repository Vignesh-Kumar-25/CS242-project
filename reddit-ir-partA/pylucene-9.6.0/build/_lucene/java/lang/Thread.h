#ifndef java_lang_Thread_H
#define java_lang_Thread_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ThreadGroup;
    class Runnable;
    class Thread$UncaughtExceptionHandler;
    class Thread$State;
    class StackTraceElement;
    class InterruptedException;
    class Thread;
    class Class;
    class String;
    class ClassLoader;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Thread : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_4a883f7810d2effa,
        mid_init$_31a8a94662830927,
        mid_init$_e59abeda7faac5e1,
        mid_init$_0994c9a7819682fe,
        mid_init$_b775e7da8010d12a,
        mid_init$_e03c5397bbe4bcca,
        mid_init$_218ad2a388fabf0b,
        mid_init$_58bb4d0843bd9e6d,
        mid_activeCount_15aa3d485e96b665,
        mid_checkAccess_3353d9f14bbfd91a,
        mid_countStackFrames_15aa3d485e96b665,
        mid_currentThread_c3607a7022c299dc,
        mid_dumpStack_3353d9f14bbfd91a,
        mid_enumerate_54483bdafd4fe9f8,
        mid_getAllStackTraces_19f838df22aacf85,
        mid_getContextClassLoader_56f737cb9675ba6d,
        mid_getDefaultUncaughtExceptionHandler_88dd0bbfe0546f47,
        mid_getId_058f5911dcf5d8a4,
        mid_getName_dc633f13a47328a8,
        mid_getPriority_15aa3d485e96b665,
        mid_getStackTrace_363392de0f6f9057,
        mid_getState_56eff2784c7b9f07,
        mid_getThreadGroup_ee9728bd568247cd,
        mid_getUncaughtExceptionHandler_88dd0bbfe0546f47,
        mid_holdsLock_6084f78e09b6c0c3,
        mid_interrupt_3353d9f14bbfd91a,
        mid_interrupted_ee8b0a5fa521ddac,
        mid_isAlive_ee8b0a5fa521ddac,
        mid_isDaemon_ee8b0a5fa521ddac,
        mid_isInterrupted_ee8b0a5fa521ddac,
        mid_join_3353d9f14bbfd91a,
        mid_join_db2028ac45cd5b77,
        mid_join_6dbbaef8380ec710,
        mid_onSpinWait_3353d9f14bbfd91a,
        mid_resume_3353d9f14bbfd91a,
        mid_run_3353d9f14bbfd91a,
        mid_setContextClassLoader_265d190b7c213a14,
        mid_setDaemon_4f96af910856b303,
        mid_setDefaultUncaughtExceptionHandler_085f96a62a0f9998,
        mid_setName_4a883f7810d2effa,
        mid_setPriority_da425451c8de636b,
        mid_setUncaughtExceptionHandler_085f96a62a0f9998,
        mid_sleep_db2028ac45cd5b77,
        mid_sleep_6dbbaef8380ec710,
        mid_start_3353d9f14bbfd91a,
        mid_stop_3353d9f14bbfd91a,
        mid_suspend_3353d9f14bbfd91a,
        mid_toString_dc633f13a47328a8,
        mid_yield_3353d9f14bbfd91a,
        mid_clone_bdd51648087bae52,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Thread(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Thread(const Thread& obj) : ::java::lang::Object(obj) {}

      static jint MAX_PRIORITY;
      static jint MIN_PRIORITY;
      static jint NORM_PRIORITY;

      Thread();
      Thread(const ::java::lang::String &);
      Thread(const ::java::lang::Runnable &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::String &);
      Thread(const ::java::lang::Runnable &, const ::java::lang::String &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &, const ::java::lang::String &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &, const ::java::lang::String &, jlong);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &, const ::java::lang::String &, jlong, jboolean);

      static jint activeCount();
      void checkAccess() const;
      jint countStackFrames() const;
      static Thread currentThread();
      static void dumpStack();
      static jint enumerate(const JArray< Thread > &);
      static ::java::util::Map getAllStackTraces();
      ::java::lang::ClassLoader getContextClassLoader() const;
      static ::java::lang::Thread$UncaughtExceptionHandler getDefaultUncaughtExceptionHandler();
      jlong getId() const;
      ::java::lang::String getName() const;
      jint getPriority() const;
      JArray< ::java::lang::StackTraceElement > getStackTrace() const;
      ::java::lang::Thread$State getState() const;
      ::java::lang::ThreadGroup getThreadGroup() const;
      ::java::lang::Thread$UncaughtExceptionHandler getUncaughtExceptionHandler() const;
      static jboolean holdsLock(const ::java::lang::Object &);
      void interrupt() const;
      static jboolean interrupted();
      jboolean isAlive() const;
      jboolean isDaemon() const;
      jboolean isInterrupted() const;
      void join() const;
      void join(jlong) const;
      void join(jlong, jint) const;
      static void onSpinWait();
      void resume() const;
      void run() const;
      void setContextClassLoader(const ::java::lang::ClassLoader &) const;
      void setDaemon(jboolean) const;
      static void setDefaultUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler &);
      void setName(const ::java::lang::String &) const;
      void setPriority(jint) const;
      void setUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler &) const;
      static void sleep(jlong);
      static void sleep(jlong, jint);
      void start() const;
      void stop() const;
      void suspend() const;
      ::java::lang::String toString() const;
      static void yield();
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Thread);
    extern PyTypeObject *PY_TYPE(Thread);

    class t_Thread {
    public:
      PyObject_HEAD
      Thread object;
      static PyObject *wrap_Object(const Thread&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
