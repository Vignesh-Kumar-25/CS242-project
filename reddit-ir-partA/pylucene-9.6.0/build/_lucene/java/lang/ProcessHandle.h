#ifndef java_lang_ProcessHandle_H
#define java_lang_ProcessHandle_H

#include "java/lang/Comparable.h"

namespace java {
  namespace lang {
    class ProcessHandle$Info;
    class ProcessHandle;
    class Class;
    class Object;
  }
  namespace util {
    class Optional;
    namespace concurrent {
      class CompletableFuture;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ProcessHandle : public ::java::lang::Comparable {
     public:
      enum {
        mid_compareTo_4d20904f201bf963,
        mid_current_bd8cd99ee0175b66,
        mid_destroy_ee8b0a5fa521ddac,
        mid_destroyForcibly_ee8b0a5fa521ddac,
        mid_equals_6084f78e09b6c0c3,
        mid_hashCode_15aa3d485e96b665,
        mid_info_dcb0f3995d085b84,
        mid_isAlive_ee8b0a5fa521ddac,
        mid_of_1f3e553001057aff,
        mid_onExit_8b022ffd0e46887e,
        mid_parent_c93856a18dee0470,
        mid_pid_058f5911dcf5d8a4,
        mid_supportsNormalTermination_ee8b0a5fa521ddac,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ProcessHandle(jobject obj) : ::java::lang::Comparable(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ProcessHandle(const ProcessHandle& obj) : ::java::lang::Comparable(obj) {}

      jint compareTo(const ProcessHandle &) const;
      static ProcessHandle current();
      jboolean destroy() const;
      jboolean destroyForcibly() const;
      jboolean equals(const ::java::lang::Object &) const;
      jint hashCode() const;
      ::java::lang::ProcessHandle$Info info() const;
      jboolean isAlive() const;
      static ::java::util::Optional of(jlong);
      ::java::util::concurrent::CompletableFuture onExit() const;
      ::java::util::Optional parent() const;
      jlong pid() const;
      jboolean supportsNormalTermination() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ProcessHandle);
    extern PyTypeObject *PY_TYPE(ProcessHandle);

    class t_ProcessHandle {
    public:
      PyObject_HEAD
      ProcessHandle object;
      static PyObject *wrap_Object(const ProcessHandle&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
