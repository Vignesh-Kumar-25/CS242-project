#ifndef java_util_Calendar_H
#define java_util_Calendar_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Date;
    class TimeZone;
    class Calendar;
    class Set;
    class Locale;
  }
  namespace lang {
    class Integer;
    class Class;
    class Cloneable;
    class String;
    class Comparable;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Calendar : public ::java::lang::Object {
     public:
      enum {
        mid_add_078cef180abf5351,
        mid_after_6084f78e09b6c0c3,
        mid_before_6084f78e09b6c0c3,
        mid_clear_3353d9f14bbfd91a,
        mid_clear_da425451c8de636b,
        mid_clone_bdd51648087bae52,
        mid_compareTo_2f54a190d8757a9b,
        mid_equals_6084f78e09b6c0c3,
        mid_get_58b165b57740feff,
        mid_getActualMaximum_58b165b57740feff,
        mid_getActualMinimum_58b165b57740feff,
        mid_getAvailableCalendarTypes_9a625d56b67c7390,
        mid_getAvailableLocales_40108ee1d11c7d0c,
        mid_getCalendarType_dc633f13a47328a8,
        mid_getDisplayName_f2e6b7f4c2c8f648,
        mid_getDisplayNames_caf8a42f897314a4,
        mid_getFirstDayOfWeek_15aa3d485e96b665,
        mid_getGreatestMinimum_58b165b57740feff,
        mid_getInstance_f2d04497346fe9af,
        mid_getInstance_736c2d4ff1415d1a,
        mid_getInstance_e67e840ab24f9c57,
        mid_getInstance_e3add4f943746216,
        mid_getLeastMaximum_58b165b57740feff,
        mid_getMaximum_58b165b57740feff,
        mid_getMinimalDaysInFirstWeek_15aa3d485e96b665,
        mid_getMinimum_58b165b57740feff,
        mid_getTime_7860fa1e176ffd27,
        mid_getTimeInMillis_058f5911dcf5d8a4,
        mid_getTimeZone_61b7d58bc7f6c9d9,
        mid_getWeekYear_15aa3d485e96b665,
        mid_getWeeksInWeekYear_15aa3d485e96b665,
        mid_hashCode_15aa3d485e96b665,
        mid_isLenient_ee8b0a5fa521ddac,
        mid_isSet_92eccba87b045bbc,
        mid_isWeekDateSupported_ee8b0a5fa521ddac,
        mid_roll_5a9df8809b7e2c79,
        mid_roll_078cef180abf5351,
        mid_set_078cef180abf5351,
        mid_set_324f62b85ee857be,
        mid_set_0f049331da9fc9e7,
        mid_set_de0fe24de07602f2,
        mid_setFirstDayOfWeek_da425451c8de636b,
        mid_setLenient_4f96af910856b303,
        mid_setMinimalDaysInFirstWeek_da425451c8de636b,
        mid_setTime_85d4aa059c7a9cf4,
        mid_setTimeInMillis_db2028ac45cd5b77,
        mid_setTimeZone_9e38f0fe40f0619b,
        mid_setWeekDate_324f62b85ee857be,
        mid_toString_dc633f13a47328a8,
        mid_complete_3353d9f14bbfd91a,
        mid_computeTime_3353d9f14bbfd91a,
        mid_computeFields_3353d9f14bbfd91a,
        mid_internalGet_58b165b57740feff,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Calendar(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Calendar(const Calendar& obj) : ::java::lang::Object(obj) {}

      static jint ALL_STYLES;
      static jint AM;
      static jint AM_PM;
      static jint APRIL;
      static jint AUGUST;
      static jint DATE;
      static jint DAY_OF_MONTH;
      static jint DAY_OF_WEEK;
      static jint DAY_OF_WEEK_IN_MONTH;
      static jint DAY_OF_YEAR;
      static jint DECEMBER;
      static jint DST_OFFSET;
      static jint ERA;
      static jint FEBRUARY;
      static jint FIELD_COUNT;
      static jint FRIDAY;
      static jint HOUR;
      static jint HOUR_OF_DAY;
      static jint JANUARY;
      static jint JULY;
      static jint JUNE;
      static jint LONG;
      static jint LONG_FORMAT;
      static jint LONG_STANDALONE;
      static jint MARCH;
      static jint MAY;
      static jint MILLISECOND;
      static jint MINUTE;
      static jint MONDAY;
      static jint MONTH;
      static jint NARROW_FORMAT;
      static jint NARROW_STANDALONE;
      static jint NOVEMBER;
      static jint OCTOBER;
      static jint PM;
      static jint SATURDAY;
      static jint SECOND;
      static jint SEPTEMBER;
      static jint SHORT;
      static jint SHORT_FORMAT;
      static jint SHORT_STANDALONE;
      static jint SUNDAY;
      static jint THURSDAY;
      static jint TUESDAY;
      static jint UNDECIMBER;
      static jint WEDNESDAY;
      static jint WEEK_OF_MONTH;
      static jint WEEK_OF_YEAR;
      static jint YEAR;
      static jint ZONE_OFFSET;

      void add(jint, jint) const;
      jboolean after(const ::java::lang::Object &) const;
      jboolean before(const ::java::lang::Object &) const;
      void clear() const;
      void clear(jint) const;
      ::java::lang::Object clone() const;
      jint compareTo(const Calendar &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jint get(jint) const;
      jint getActualMaximum(jint) const;
      jint getActualMinimum(jint) const;
      static ::java::util::Set getAvailableCalendarTypes();
      static JArray< ::java::util::Locale > getAvailableLocales();
      ::java::lang::String getCalendarType() const;
      ::java::lang::String getDisplayName(jint, jint, const ::java::util::Locale &) const;
      ::java::util::Map getDisplayNames(jint, jint, const ::java::util::Locale &) const;
      jint getFirstDayOfWeek() const;
      jint getGreatestMinimum(jint) const;
      static Calendar getInstance();
      static Calendar getInstance(const ::java::util::Locale &);
      static Calendar getInstance(const ::java::util::TimeZone &);
      static Calendar getInstance(const ::java::util::TimeZone &, const ::java::util::Locale &);
      jint getLeastMaximum(jint) const;
      jint getMaximum(jint) const;
      jint getMinimalDaysInFirstWeek() const;
      jint getMinimum(jint) const;
      ::java::util::Date getTime() const;
      jlong getTimeInMillis() const;
      ::java::util::TimeZone getTimeZone() const;
      jint getWeekYear() const;
      jint getWeeksInWeekYear() const;
      jint hashCode() const;
      jboolean isLenient() const;
      jboolean isSet(jint) const;
      jboolean isWeekDateSupported() const;
      void roll(jint, jboolean) const;
      void roll(jint, jint) const;
      void set(jint, jint) const;
      void set(jint, jint, jint) const;
      void set(jint, jint, jint, jint, jint) const;
      void set(jint, jint, jint, jint, jint, jint) const;
      void setFirstDayOfWeek(jint) const;
      void setLenient(jboolean) const;
      void setMinimalDaysInFirstWeek(jint) const;
      void setTime(const ::java::util::Date &) const;
      void setTimeInMillis(jlong) const;
      void setTimeZone(const ::java::util::TimeZone &) const;
      void setWeekDate(jint, jint, jint) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Calendar);
    extern PyTypeObject *PY_TYPE(Calendar);

    class t_Calendar {
    public:
      PyObject_HEAD
      Calendar object;
      static PyObject *wrap_Object(const Calendar&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
