#ifndef java_util_TimeZone_H
#define java_util_TimeZone_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace util {
    class Date;
    class TimeZone;
    class Locale;
  }
  namespace lang {
    class Class;
    class Cloneable;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class TimeZone : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_clone_bdd51648087bae52,
        mid_getAvailableIDs_995db70818ff4363,
        mid_getAvailableIDs_902044642a8b8f7e,
        mid_getDSTSavings_15aa3d485e96b665,
        mid_getDefault_61b7d58bc7f6c9d9,
        mid_getDisplayName_dc633f13a47328a8,
        mid_getDisplayName_477c45bdc4979c5d,
        mid_getDisplayName_e1b59d799e67239c,
        mid_getDisplayName_67a0d2c34ab0c79d,
        mid_getID_dc633f13a47328a8,
        mid_getOffset_0b5d0387e68ead8f,
        mid_getOffset_ee0dd37bcd2508ce,
        mid_getRawOffset_15aa3d485e96b665,
        mid_getTimeZone_20b4185dd62be063,
        mid_hasSameRules_4b6a9fcfb9983fa6,
        mid_inDaylightTime_7d7f45a5d98aca9a,
        mid_observesDaylightTime_ee8b0a5fa521ddac,
        mid_setDefault_9e38f0fe40f0619b,
        mid_setID_4a883f7810d2effa,
        mid_setRawOffset_da425451c8de636b,
        mid_useDaylightTime_ee8b0a5fa521ddac,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit TimeZone(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      TimeZone(const TimeZone& obj) : ::java::lang::Object(obj) {}

      static jint LONG;
      static jint SHORT;

      TimeZone();

      ::java::lang::Object clone() const;
      static JArray< ::java::lang::String > getAvailableIDs();
      static JArray< ::java::lang::String > getAvailableIDs(jint);
      jint getDSTSavings() const;
      static TimeZone getDefault();
      ::java::lang::String getDisplayName() const;
      ::java::lang::String getDisplayName(const ::java::util::Locale &) const;
      ::java::lang::String getDisplayName(jboolean, jint) const;
      ::java::lang::String getDisplayName(jboolean, jint, const ::java::util::Locale &) const;
      ::java::lang::String getID() const;
      jint getOffset(jlong) const;
      jint getOffset(jint, jint, jint, jint, jint, jint) const;
      jint getRawOffset() const;
      static TimeZone getTimeZone(const ::java::lang::String &);
      jboolean hasSameRules(const TimeZone &) const;
      jboolean inDaylightTime(const ::java::util::Date &) const;
      jboolean observesDaylightTime() const;
      static void setDefault(const TimeZone &);
      void setID(const ::java::lang::String &) const;
      void setRawOffset(jint) const;
      jboolean useDaylightTime() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(TimeZone);
    extern PyTypeObject *PY_TYPE(TimeZone);

    class t_TimeZone {
    public:
      PyObject_HEAD
      TimeZone object;
      static PyObject *wrap_Object(const TimeZone&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
