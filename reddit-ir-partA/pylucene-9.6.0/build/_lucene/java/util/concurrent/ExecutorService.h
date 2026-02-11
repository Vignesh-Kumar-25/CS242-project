#ifndef java_util_concurrent_ExecutorService_H
#define java_util_concurrent_ExecutorService_H

#include "java/util/concurrent/Executor.h"

namespace java {
  namespace lang {
    class Runnable;
    class InterruptedException;
    class Class;
    class Object;
  }
  namespace util {
    class List;
    namespace concurrent {
      class TimeoutException;
      class TimeUnit;
      class ExecutionException;
      class Callable;
      class Future;
    }
    class Collection;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class ExecutorService : public ::java::util::concurrent::Executor {
       public:
        enum {
          mid_awaitTermination_c95241c478ee8bc9,
          mid_invokeAll_25ff872192038686,
          mid_invokeAll_1695f3dedd651004,
          mid_invokeAny_9bbfabe1405115fd,
          mid_invokeAny_7c6f172b3bd077fc,
          mid_isShutdown_ee8b0a5fa521ddac,
          mid_isTerminated_ee8b0a5fa521ddac,
          mid_shutdown_3353d9f14bbfd91a,
          mid_shutdownNow_0bc66e960964b70a,
          mid_submit_378cff56d4e17cab,
          mid_submit_09889e4e6c3f6d00,
          mid_submit_5100748f0314b8f0,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ExecutorService(jobject obj) : ::java::util::concurrent::Executor(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ExecutorService(const ExecutorService& obj) : ::java::util::concurrent::Executor(obj) {}

        jboolean awaitTermination(jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::util::List invokeAll(const ::java::util::Collection &) const;
        ::java::util::List invokeAll(const ::java::util::Collection &, jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::lang::Object invokeAny(const ::java::util::Collection &) const;
        ::java::lang::Object invokeAny(const ::java::util::Collection &, jlong, const ::java::util::concurrent::TimeUnit &) const;
        jboolean isShutdown() const;
        jboolean isTerminated() const;
        void shutdown() const;
        ::java::util::List shutdownNow() const;
        ::java::util::concurrent::Future submit(const ::java::lang::Runnable &) const;
        ::java::util::concurrent::Future submit(const ::java::util::concurrent::Callable &) const;
        ::java::util::concurrent::Future submit(const ::java::lang::Runnable &, const ::java::lang::Object &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(ExecutorService);
      extern PyTypeObject *PY_TYPE(ExecutorService);

      class t_ExecutorService {
      public:
        PyObject_HEAD
        ExecutorService object;
        static PyObject *wrap_Object(const ExecutorService&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
