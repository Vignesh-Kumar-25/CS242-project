#ifndef java_text_NumberFormat_H
#define java_text_NumberFormat_H

#include "java/text/Format.h"

namespace java {
  namespace lang {
    class Number;
    class Class;
    class Object;
    class String;
    class StringBuffer;
  }
  namespace util {
    class Currency;
    class Locale;
  }
  namespace text {
    class NumberFormat;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class NumberFormat : public ::java::text::Format {
     public:
      enum {
        mid_clone_bdd51648087bae52,
        mid_equals_6084f78e09b6c0c3,
        mid_format_207c881979c67b52,
        mid_format_23522a84630bd8fe,
        mid_getAvailableLocales_40108ee1d11c7d0c,
        mid_getCurrency_e830591cd033c7a4,
        mid_getCurrencyInstance_3f16f67992196800,
        mid_getCurrencyInstance_c1b47445a5aff2f6,
        mid_getInstance_3f16f67992196800,
        mid_getInstance_c1b47445a5aff2f6,
        mid_getIntegerInstance_3f16f67992196800,
        mid_getIntegerInstance_c1b47445a5aff2f6,
        mid_getMaximumFractionDigits_15aa3d485e96b665,
        mid_getMaximumIntegerDigits_15aa3d485e96b665,
        mid_getMinimumFractionDigits_15aa3d485e96b665,
        mid_getMinimumIntegerDigits_15aa3d485e96b665,
        mid_getNumberInstance_3f16f67992196800,
        mid_getNumberInstance_c1b47445a5aff2f6,
        mid_getPercentInstance_3f16f67992196800,
        mid_getPercentInstance_c1b47445a5aff2f6,
        mid_hashCode_15aa3d485e96b665,
        mid_isGroupingUsed_ee8b0a5fa521ddac,
        mid_isParseIntegerOnly_ee8b0a5fa521ddac,
        mid_parse_ab5331539f095af6,
        mid_setCurrency_37c8c815f3a3d647,
        mid_setGroupingUsed_4f96af910856b303,
        mid_setMaximumFractionDigits_da425451c8de636b,
        mid_setMaximumIntegerDigits_da425451c8de636b,
        mid_setMinimumFractionDigits_da425451c8de636b,
        mid_setMinimumIntegerDigits_da425451c8de636b,
        mid_setParseIntegerOnly_4f96af910856b303,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit NumberFormat(jobject obj) : ::java::text::Format(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      NumberFormat(const NumberFormat& obj) : ::java::text::Format(obj) {}

      static jint FRACTION_FIELD;
      static jint INTEGER_FIELD;

      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::String format(jdouble) const;
      ::java::lang::String format(jlong) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      ::java::util::Currency getCurrency() const;
      static NumberFormat getCurrencyInstance();
      static NumberFormat getCurrencyInstance(const ::java::util::Locale &);
      static NumberFormat getInstance();
      static NumberFormat getInstance(const ::java::util::Locale &);
      static NumberFormat getIntegerInstance();
      static NumberFormat getIntegerInstance(const ::java::util::Locale &);
      jint getMaximumFractionDigits() const;
      jint getMaximumIntegerDigits() const;
      jint getMinimumFractionDigits() const;
      jint getMinimumIntegerDigits() const;
      static NumberFormat getNumberInstance();
      static NumberFormat getNumberInstance(const ::java::util::Locale &);
      static NumberFormat getPercentInstance();
      static NumberFormat getPercentInstance(const ::java::util::Locale &);
      jint hashCode() const;
      jboolean isGroupingUsed() const;
      jboolean isParseIntegerOnly() const;
      ::java::lang::Number parse(const ::java::lang::String &) const;
      void setCurrency(const ::java::util::Currency &) const;
      void setGroupingUsed(jboolean) const;
      void setMaximumFractionDigits(jint) const;
      void setMaximumIntegerDigits(jint) const;
      void setMinimumFractionDigits(jint) const;
      void setMinimumIntegerDigits(jint) const;
      void setParseIntegerOnly(jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(NumberFormat);
    extern PyTypeObject *PY_TYPE(NumberFormat);

    class t_NumberFormat {
    public:
      PyObject_HEAD
      NumberFormat object;
      static PyObject *wrap_Object(const NumberFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
