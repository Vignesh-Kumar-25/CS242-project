#ifndef java_util_concurrent_Executors_H
#define java_util_concurrent_Executors_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Runnable;
    class Class;
  }
  namespace util {
    namespace concurrent {
      class ExecutorService;
      class ThreadFactory;
      class ScheduledExecutorService;
      class Callable;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class Executors : public ::java::lang::Object {
       public:
        enum {
          mid_callable_7693679db655f459,
          mid_callable_f044a258c780b4fc,
          mid_defaultThreadFactory_4ef3c29a1ca35aeb,
          mid_newCachedThreadPool_a696f5f317bee85e,
          mid_newCachedThreadPool_e17995ac018f59a3,
          mid_newFixedThreadPool_19b7bfea8abd8540,
          mid_newFixedThreadPool_fb5bd9d9c74f4a5f,
          mid_newScheduledThreadPool_8996b75d57240fa4,
          mid_newScheduledThreadPool_697c588660faf05f,
          mid_newSingleThreadExecutor_a696f5f317bee85e,
          mid_newSingleThreadExecutor_e17995ac018f59a3,
          mid_newSingleThreadScheduledExecutor_b3dbcd25a58e83f8,
          mid_newSingleThreadScheduledExecutor_15071d2d584f649a,
          mid_newWorkStealingPool_a696f5f317bee85e,
          mid_newWorkStealingPool_19b7bfea8abd8540,
          mid_privilegedCallable_2ad8ba371d8638a8,
          mid_privilegedCallableUsingCurrentClassLoader_2ad8ba371d8638a8,
          mid_privilegedThreadFactory_4ef3c29a1ca35aeb,
          mid_unconfigurableExecutorService_a1c72c094fc78e88,
          mid_unconfigurableScheduledExecutorService_24b8fd50ad041c49,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Executors(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Executors(const Executors& obj) : ::java::lang::Object(obj) {}

        static ::java::util::concurrent::Callable callable(const ::java::lang::Runnable &);
        static ::java::util::concurrent::Callable callable(const ::java::lang::Runnable &, const ::java::lang::Object &);
        static ::java::util::concurrent::ThreadFactory defaultThreadFactory();
        static ::java::util::concurrent::ExecutorService newCachedThreadPool();
        static ::java::util::concurrent::ExecutorService newCachedThreadPool(const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ExecutorService newFixedThreadPool(jint);
        static ::java::util::concurrent::ExecutorService newFixedThreadPool(jint, const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ScheduledExecutorService newScheduledThreadPool(jint);
        static ::java::util::concurrent::ScheduledExecutorService newScheduledThreadPool(jint, const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ExecutorService newSingleThreadExecutor();
        static ::java::util::concurrent::ExecutorService newSingleThreadExecutor(const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ScheduledExecutorService newSingleThreadScheduledExecutor();
        static ::java::util::concurrent::ScheduledExecutorService newSingleThreadScheduledExecutor(const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ExecutorService newWorkStealingPool();
        static ::java::util::concurrent::ExecutorService newWorkStealingPool(jint);
        static ::java::util::concurrent::Callable privilegedCallable(const ::java::util::concurrent::Callable &);
        static ::java::util::concurrent::Callable privilegedCallableUsingCurrentClassLoader(const ::java::util::concurrent::Callable &);
        static ::java::util::concurrent::ThreadFactory privilegedThreadFactory();
        static ::java::util::concurrent::ExecutorService unconfigurableExecutorService(const ::java::util::concurrent::ExecutorService &);
        static ::java::util::concurrent::ScheduledExecutorService unconfigurableScheduledExecutorService(const ::java::util::concurrent::ScheduledExecutorService &);
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(Executors);
      extern PyTypeObject *PY_TYPE(Executors);

      class t_Executors {
      public:
        PyObject_HEAD
        Executors object;
        static PyObject *wrap_Object(const Executors&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
