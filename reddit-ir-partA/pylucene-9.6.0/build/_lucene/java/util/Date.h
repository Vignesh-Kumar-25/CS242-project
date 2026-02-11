#ifndef java_util_Date_H
#define java_util_Date_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace util {
    class Date;
  }
  namespace lang {
    class Class;
    class Cloneable;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Date : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_4a883f7810d2effa,
        mid_init$_db2028ac45cd5b77,
        mid_init$_324f62b85ee857be,
        mid_init$_0f049331da9fc9e7,
        mid_init$_de0fe24de07602f2,
        mid_UTC_25105fd26bba3c50,
        mid_after_7d7f45a5d98aca9a,
        mid_before_7d7f45a5d98aca9a,
        mid_clone_bdd51648087bae52,
        mid_compareTo_93b3f923c0913b25,
        mid_equals_6084f78e09b6c0c3,
        mid_getDate_15aa3d485e96b665,
        mid_getDay_15aa3d485e96b665,
        mid_getHours_15aa3d485e96b665,
        mid_getMinutes_15aa3d485e96b665,
        mid_getMonth_15aa3d485e96b665,
        mid_getSeconds_15aa3d485e96b665,
        mid_getTime_058f5911dcf5d8a4,
        mid_getTimezoneOffset_15aa3d485e96b665,
        mid_getYear_15aa3d485e96b665,
        mid_hashCode_15aa3d485e96b665,
        mid_parse_f9e0f284a35cbac5,
        mid_setDate_da425451c8de636b,
        mid_setHours_da425451c8de636b,
        mid_setMinutes_da425451c8de636b,
        mid_setMonth_da425451c8de636b,
        mid_setSeconds_da425451c8de636b,
        mid_setTime_db2028ac45cd5b77,
        mid_setYear_da425451c8de636b,
        mid_toGMTString_dc633f13a47328a8,
        mid_toLocaleString_dc633f13a47328a8,
        mid_toString_dc633f13a47328a8,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Date(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Date(const Date& obj) : ::java::lang::Object(obj) {}

      Date();
      Date(const ::java::lang::String &);
      Date(jlong);
      Date(jint, jint, jint);
      Date(jint, jint, jint, jint, jint);
      Date(jint, jint, jint, jint, jint, jint);

      static jlong UTC(jint, jint, jint, jint, jint, jint);
      jboolean after(const Date &) const;
      jboolean before(const Date &) const;
      ::java::lang::Object clone() const;
      jint compareTo(const Date &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jint getDate() const;
      jint getDay() const;
      jint getHours() const;
      jint getMinutes() const;
      jint getMonth() const;
      jint getSeconds() const;
      jlong getTime() const;
      jint getTimezoneOffset() const;
      jint getYear() const;
      jint hashCode() const;
      static jlong parse(const ::java::lang::String &);
      void setDate(jint) const;
      void setHours(jint) const;
      void setMinutes(jint) const;
      void setMonth(jint) const;
      void setSeconds(jint) const;
      void setTime(jlong) const;
      void setYear(jint) const;
      ::java::lang::String toGMTString() const;
      ::java::lang::String toLocaleString() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Date);
    extern PyTypeObject *PY_TYPE(Date);

    class t_Date {
    public:
      PyObject_HEAD
      Date object;
      static PyObject *wrap_Object(const Date&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
