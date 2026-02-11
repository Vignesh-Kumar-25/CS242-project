#ifndef java_lang_ThreadGroup_H
#define java_lang_ThreadGroup_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ThreadGroup;
    class Thread$UncaughtExceptionHandler;
    class Throwable;
    class Thread;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ThreadGroup : public ::java::lang::Object {
     public:
      enum {
        mid_init$_4a883f7810d2effa,
        mid_init$_e59abeda7faac5e1,
        mid_activeCount_15aa3d485e96b665,
        mid_activeGroupCount_15aa3d485e96b665,
        mid_allowThreadSuspension_c0205ec42405174a,
        mid_checkAccess_3353d9f14bbfd91a,
        mid_destroy_3353d9f14bbfd91a,
        mid_enumerate_54483bdafd4fe9f8,
        mid_enumerate_b935617597772aa7,
        mid_enumerate_31392f4be181e710,
        mid_enumerate_0aeb2853d67ad05f,
        mid_getMaxPriority_15aa3d485e96b665,
        mid_getName_dc633f13a47328a8,
        mid_getParent_ee9728bd568247cd,
        mid_interrupt_3353d9f14bbfd91a,
        mid_isDaemon_ee8b0a5fa521ddac,
        mid_isDestroyed_ee8b0a5fa521ddac,
        mid_list_3353d9f14bbfd91a,
        mid_parentOf_30ac1acde005904e,
        mid_resume_3353d9f14bbfd91a,
        mid_setDaemon_4f96af910856b303,
        mid_setMaxPriority_da425451c8de636b,
        mid_stop_3353d9f14bbfd91a,
        mid_suspend_3353d9f14bbfd91a,
        mid_toString_dc633f13a47328a8,
        mid_uncaughtException_98d952081ed6182b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ThreadGroup(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ThreadGroup(const ThreadGroup& obj) : ::java::lang::Object(obj) {}

      ThreadGroup(const ::java::lang::String &);
      ThreadGroup(const ThreadGroup &, const ::java::lang::String &);

      jint activeCount() const;
      jint activeGroupCount() const;
      jboolean allowThreadSuspension(jboolean) const;
      void checkAccess() const;
      void destroy() const;
      jint enumerate(const JArray< ::java::lang::Thread > &) const;
      jint enumerate(const JArray< ThreadGroup > &) const;
      jint enumerate(const JArray< ::java::lang::Thread > &, jboolean) const;
      jint enumerate(const JArray< ThreadGroup > &, jboolean) const;
      jint getMaxPriority() const;
      ::java::lang::String getName() const;
      ThreadGroup getParent() const;
      void interrupt() const;
      jboolean isDaemon() const;
      jboolean isDestroyed() const;
      void list() const;
      jboolean parentOf(const ThreadGroup &) const;
      void resume() const;
      void setDaemon(jboolean) const;
      void setMaxPriority(jint) const;
      void stop() const;
      void suspend() const;
      ::java::lang::String toString() const;
      void uncaughtException(const ::java::lang::Thread &, const ::java::lang::Throwable &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ThreadGroup);
    extern PyTypeObject *PY_TYPE(ThreadGroup);

    class t_ThreadGroup {
    public:
      PyObject_HEAD
      ThreadGroup object;
      static PyObject *wrap_Object(const ThreadGroup&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
