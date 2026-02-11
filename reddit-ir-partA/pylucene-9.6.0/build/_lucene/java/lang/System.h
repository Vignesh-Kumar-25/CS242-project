#ifndef java_lang_System_H
#define java_lang_System_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class ResourceBundle;
    class Properties;
  }
  namespace io {
    class InputStream;
    class Console;
    class PrintStream;
  }
  namespace lang {
    class SecurityManager;
    class Class;
    class System$Logger;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class System : public ::java::lang::Object {
     public:
      enum {
        mid_arraycopy_c832f6e9b966a60d,
        mid_clearProperty_04612c8360f09496,
        mid_console_13b7892de29df1cb,
        mid_currentTimeMillis_058f5911dcf5d8a4,
        mid_exit_da425451c8de636b,
        mid_gc_3353d9f14bbfd91a,
        mid_getLogger_d4d17b62bad9d036,
        mid_getLogger_406c66754a6c5a1d,
        mid_getProperties_5b5ce9ed2a96440b,
        mid_getProperty_04612c8360f09496,
        mid_getProperty_4178ea5d4aed7988,
        mid_getSecurityManager_a28f55bbb511e78e,
        mid_getenv_19f838df22aacf85,
        mid_getenv_04612c8360f09496,
        mid_identityHashCode_cc82b01b9199bc71,
        mid_lineSeparator_dc633f13a47328a8,
        mid_load_4a883f7810d2effa,
        mid_loadLibrary_4a883f7810d2effa,
        mid_mapLibraryName_04612c8360f09496,
        mid_nanoTime_058f5911dcf5d8a4,
        mid_runFinalization_3353d9f14bbfd91a,
        mid_setErr_b6308c09112257e7,
        mid_setIn_839363fac538f4b4,
        mid_setOut_b6308c09112257e7,
        mid_setProperties_7a569ea54e01d37b,
        mid_setProperty_4178ea5d4aed7988,
        mid_setSecurityManager_28c33b294fa2645e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit System(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      System(const System& obj) : ::java::lang::Object(obj) {}

      static ::java::io::PrintStream *err;
      static ::java::io::InputStream *in;
      static ::java::io::PrintStream *out;

      static void arraycopy(const ::java::lang::Object &, jint, const ::java::lang::Object &, jint, jint);
      static ::java::lang::String clearProperty(const ::java::lang::String &);
      static ::java::io::Console console();
      static jlong currentTimeMillis();
      static void exit(jint);
      static void gc();
      static ::java::lang::System$Logger getLogger(const ::java::lang::String &);
      static ::java::lang::System$Logger getLogger(const ::java::lang::String &, const ::java::util::ResourceBundle &);
      static ::java::util::Properties getProperties();
      static ::java::lang::String getProperty(const ::java::lang::String &);
      static ::java::lang::String getProperty(const ::java::lang::String &, const ::java::lang::String &);
      static ::java::lang::SecurityManager getSecurityManager();
      static ::java::util::Map getenv();
      static ::java::lang::String getenv(const ::java::lang::String &);
      static jint identityHashCode(const ::java::lang::Object &);
      static ::java::lang::String lineSeparator();
      static void load(const ::java::lang::String &);
      static void loadLibrary(const ::java::lang::String &);
      static ::java::lang::String mapLibraryName(const ::java::lang::String &);
      static jlong nanoTime();
      static void runFinalization();
      static void setErr(const ::java::io::PrintStream &);
      static void setIn(const ::java::io::InputStream &);
      static void setOut(const ::java::io::PrintStream &);
      static void setProperties(const ::java::util::Properties &);
      static ::java::lang::String setProperty(const ::java::lang::String &, const ::java::lang::String &);
      static void setSecurityManager(const ::java::lang::SecurityManager &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(System);
    extern PyTypeObject *PY_TYPE(System);

    class t_System {
    public:
      PyObject_HEAD
      System object;
      static PyObject *wrap_Object(const System&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
