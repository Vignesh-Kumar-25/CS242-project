#ifndef java_lang_Runtime_H
#define java_lang_Runtime_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Runtime$Version;
    class Runtime;
    class Thread;
    class Class;
    class Process;
    class String;
  }
  namespace io {
    class File;
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Runtime : public ::java::lang::Object {
     public:
      enum {
        mid_addShutdownHook_2d4d2b83aaf8065b,
        mid_availableProcessors_15aa3d485e96b665,
        mid_exec_2dda29ea9cb0dd94,
        mid_exec_77dd7d742144df84,
        mid_exec_305e8d6ac66aee96,
        mid_exec_aa229342fdb9e295,
        mid_exec_417929696832c363,
        mid_exec_e8d44f8d0654d51e,
        mid_exit_da425451c8de636b,
        mid_freeMemory_058f5911dcf5d8a4,
        mid_gc_3353d9f14bbfd91a,
        mid_getRuntime_14fd89e170dbe8ca,
        mid_halt_da425451c8de636b,
        mid_load_4a883f7810d2effa,
        mid_loadLibrary_4a883f7810d2effa,
        mid_maxMemory_058f5911dcf5d8a4,
        mid_removeShutdownHook_d87b7c5ace5e996f,
        mid_runFinalization_3353d9f14bbfd91a,
        mid_totalMemory_058f5911dcf5d8a4,
        mid_traceInstructions_4f96af910856b303,
        mid_traceMethodCalls_4f96af910856b303,
        mid_version_e3e4ae04579cdfdd,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Runtime(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Runtime(const Runtime& obj) : ::java::lang::Object(obj) {}

      void addShutdownHook(const ::java::lang::Thread &) const;
      jint availableProcessors() const;
      ::java::lang::Process exec(const JArray< ::java::lang::String > &) const;
      ::java::lang::Process exec(const ::java::lang::String &) const;
      ::java::lang::Process exec(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &) const;
      ::java::lang::Process exec(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
      ::java::lang::Process exec(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::java::io::File &) const;
      ::java::lang::Process exec(const ::java::lang::String &, const JArray< ::java::lang::String > &, const ::java::io::File &) const;
      void exit(jint) const;
      jlong freeMemory() const;
      void gc() const;
      static Runtime getRuntime();
      void halt(jint) const;
      void load(const ::java::lang::String &) const;
      void loadLibrary(const ::java::lang::String &) const;
      jlong maxMemory() const;
      jboolean removeShutdownHook(const ::java::lang::Thread &) const;
      void runFinalization() const;
      jlong totalMemory() const;
      void traceInstructions(jboolean) const;
      void traceMethodCalls(jboolean) const;
      static ::java::lang::Runtime$Version version();
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Runtime);
    extern PyTypeObject *PY_TYPE(Runtime);

    class t_Runtime {
    public:
      PyObject_HEAD
      Runtime object;
      static PyObject *wrap_Object(const Runtime&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
