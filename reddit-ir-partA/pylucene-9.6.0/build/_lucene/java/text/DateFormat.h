#ifndef java_text_DateFormat_H
#define java_text_DateFormat_H

#include "java/text/Format.h"

namespace java {
  namespace util {
    class Date;
    class TimeZone;
    class Calendar;
    class Locale;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
    class StringBuffer;
  }
  namespace text {
    class DateFormat;
    class NumberFormat;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class DateFormat : public ::java::text::Format {
     public:
      enum {
        mid_clone_bdd51648087bae52,
        mid_equals_6084f78e09b6c0c3,
        mid_format_ae4e10844db33ba0,
        mid_getAvailableLocales_40108ee1d11c7d0c,
        mid_getCalendar_f2d04497346fe9af,
        mid_getDateInstance_f6448f3ace88cdc6,
        mid_getDateInstance_598bdae67723d989,
        mid_getDateInstance_b2b107c6994e4919,
        mid_getDateTimeInstance_f6448f3ace88cdc6,
        mid_getDateTimeInstance_aac9bb94c22473df,
        mid_getDateTimeInstance_ec78d2bafb520c19,
        mid_getInstance_f6448f3ace88cdc6,
        mid_getNumberFormat_3f16f67992196800,
        mid_getTimeInstance_f6448f3ace88cdc6,
        mid_getTimeInstance_598bdae67723d989,
        mid_getTimeInstance_b2b107c6994e4919,
        mid_getTimeZone_61b7d58bc7f6c9d9,
        mid_hashCode_15aa3d485e96b665,
        mid_isLenient_ee8b0a5fa521ddac,
        mid_parse_f7654485dce78eb9,
        mid_setCalendar_69d84e335ceb2a77,
        mid_setLenient_4f96af910856b303,
        mid_setNumberFormat_35b56184f5da0c68,
        mid_setTimeZone_9e38f0fe40f0619b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit DateFormat(jobject obj) : ::java::text::Format(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      DateFormat(const DateFormat& obj) : ::java::text::Format(obj) {}

      static jint AM_PM_FIELD;
      static jint DATE_FIELD;
      static jint DAY_OF_WEEK_FIELD;
      static jint DAY_OF_WEEK_IN_MONTH_FIELD;
      static jint DAY_OF_YEAR_FIELD;
      static jint DEFAULT;
      static jint ERA_FIELD;
      static jint FULL;
      static jint HOUR0_FIELD;
      static jint HOUR1_FIELD;
      static jint HOUR_OF_DAY0_FIELD;
      static jint HOUR_OF_DAY1_FIELD;
      static jint LONG;
      static jint MEDIUM;
      static jint MILLISECOND_FIELD;
      static jint MINUTE_FIELD;
      static jint MONTH_FIELD;
      static jint SECOND_FIELD;
      static jint SHORT;
      static jint TIMEZONE_FIELD;
      static jint WEEK_OF_MONTH_FIELD;
      static jint WEEK_OF_YEAR_FIELD;
      static jint YEAR_FIELD;

      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::String format(const ::java::util::Date &) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      ::java::util::Calendar getCalendar() const;
      static DateFormat getDateInstance();
      static DateFormat getDateInstance(jint);
      static DateFormat getDateInstance(jint, const ::java::util::Locale &);
      static DateFormat getDateTimeInstance();
      static DateFormat getDateTimeInstance(jint, jint);
      static DateFormat getDateTimeInstance(jint, jint, const ::java::util::Locale &);
      static DateFormat getInstance();
      ::java::text::NumberFormat getNumberFormat() const;
      static DateFormat getTimeInstance();
      static DateFormat getTimeInstance(jint);
      static DateFormat getTimeInstance(jint, const ::java::util::Locale &);
      ::java::util::TimeZone getTimeZone() const;
      jint hashCode() const;
      jboolean isLenient() const;
      ::java::util::Date parse(const ::java::lang::String &) const;
      void setCalendar(const ::java::util::Calendar &) const;
      void setLenient(jboolean) const;
      void setNumberFormat(const ::java::text::NumberFormat &) const;
      void setTimeZone(const ::java::util::TimeZone &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(DateFormat);
    extern PyTypeObject *PY_TYPE(DateFormat);

    class t_DateFormat {
    public:
      PyObject_HEAD
      DateFormat object;
      static PyObject *wrap_Object(const DateFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
