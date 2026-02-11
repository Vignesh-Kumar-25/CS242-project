#ifndef java_lang_System$Logger_H
#define java_lang_System$Logger_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class System$Logger$Level;
    class Throwable;
    class Class;
    class String;
  }
  namespace util {
    namespace function {
      class Supplier;
    }
    class ResourceBundle;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class System$Logger : public ::java::lang::Object {
     public:
      enum {
        mid_getName_dc633f13a47328a8,
        mid_isLoggable_ba85531238b2e3b3,
        mid_log_b34625a9c21b3136,
        mid_log_5cf7bae6184e371b,
        mid_log_85f66922e1efe08e,
        mid_log_ebc39ae310585806,
        mid_log_10c185289cdf3423,
        mid_log_171fe7092c1a2c5c,
        mid_log_30e4ce75c2fd71c5,
        mid_log_e94923e489cee95d,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit System$Logger(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      System$Logger(const System$Logger& obj) : ::java::lang::Object(obj) {}

      ::java::lang::String getName() const;
      jboolean isLoggable(const ::java::lang::System$Logger$Level &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::lang::String &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::lang::Object &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::util::function::Supplier &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::lang::String &, const ::java::lang::Throwable &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::util::function::Supplier &, const ::java::lang::Throwable &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::util::ResourceBundle &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::util::ResourceBundle &, const ::java::lang::String &, const ::java::lang::Throwable &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(System$Logger);
    extern PyTypeObject *PY_TYPE(System$Logger);

    class t_System$Logger {
    public:
      PyObject_HEAD
      System$Logger object;
      static PyObject *wrap_Object(const System$Logger&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
