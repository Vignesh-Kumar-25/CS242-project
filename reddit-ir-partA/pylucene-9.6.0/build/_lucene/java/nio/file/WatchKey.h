#ifndef java_nio_file_WatchKey_H
#define java_nio_file_WatchKey_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace nio {
    namespace file {
      class WatchEvent;
      class Watchable;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class WatchKey : public ::java::lang::Object {
       public:
        enum {
          mid_cancel_3353d9f14bbfd91a,
          mid_isValid_ee8b0a5fa521ddac,
          mid_pollEvents_0bc66e960964b70a,
          mid_reset_ee8b0a5fa521ddac,
          mid_watchable_c1e92a2b28dae0c8,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit WatchKey(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        WatchKey(const WatchKey& obj) : ::java::lang::Object(obj) {}

        void cancel() const;
        jboolean isValid() const;
        ::java::util::List pollEvents() const;
        jboolean reset() const;
        ::java::nio::file::Watchable watchable() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(WatchKey);
      extern PyTypeObject *PY_TYPE(WatchKey);

      class t_WatchKey {
      public:
        PyObject_HEAD
        WatchKey object;
        static PyObject *wrap_Object(const WatchKey&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
