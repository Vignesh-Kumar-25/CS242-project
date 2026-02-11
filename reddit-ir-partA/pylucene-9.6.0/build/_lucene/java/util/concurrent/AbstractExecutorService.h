#ifndef java_util_concurrent_AbstractExecutorService_H
#define java_util_concurrent_AbstractExecutorService_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Runnable;
    class InterruptedException;
    class Class;
  }
  namespace util {
    namespace concurrent {
      class ExecutorService;
      class TimeoutException;
      class TimeUnit;
      class ExecutionException;
      class Future;
      class Callable;
    }
    class List;
    class Collection;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class AbstractExecutorService : public ::java::lang::Object {
       public:
        enum {
          mid_init$_3353d9f14bbfd91a,
          mid_invokeAll_25ff872192038686,
          mid_invokeAll_1695f3dedd651004,
          mid_invokeAny_9bbfabe1405115fd,
          mid_invokeAny_7c6f172b3bd077fc,
          mid_submit_378cff56d4e17cab,
          mid_submit_09889e4e6c3f6d00,
          mid_submit_5100748f0314b8f0,
          mid_newTaskFor_2736949e05d88d3b,
          mid_newTaskFor_7514a69d5c53a9f3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractExecutorService(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractExecutorService(const AbstractExecutorService& obj) : ::java::lang::Object(obj) {}

        AbstractExecutorService();

        ::java::util::List invokeAll(const ::java::util::Collection &) const;
        ::java::util::List invokeAll(const ::java::util::Collection &, jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::lang::Object invokeAny(const ::java::util::Collection &) const;
        ::java::lang::Object invokeAny(const ::java::util::Collection &, jlong, const ::java::util::concurrent::TimeUnit &) const;
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
      extern PyType_Def PY_TYPE_DEF(AbstractExecutorService);
      extern PyTypeObject *PY_TYPE(AbstractExecutorService);

      class t_AbstractExecutorService {
      public:
        PyObject_HEAD
        AbstractExecutorService object;
        static PyObject *wrap_Object(const AbstractExecutorService&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
