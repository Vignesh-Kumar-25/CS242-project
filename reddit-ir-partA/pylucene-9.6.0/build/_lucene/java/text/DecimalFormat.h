#ifndef java_text_DecimalFormat_H
#define java_text_DecimalFormat_H

#include "java/text/NumberFormat.h"

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
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class DecimalFormat : public ::java::text::NumberFormat {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_4a883f7810d2effa,
        mid_applyLocalizedPattern_4a883f7810d2effa,
        mid_applyPattern_4a883f7810d2effa,
        mid_clone_bdd51648087bae52,
        mid_equals_6084f78e09b6c0c3,
        mid_getCurrency_e830591cd033c7a4,
        mid_getGroupingSize_15aa3d485e96b665,
        mid_getMaximumFractionDigits_15aa3d485e96b665,
        mid_getMaximumIntegerDigits_15aa3d485e96b665,
        mid_getMinimumFractionDigits_15aa3d485e96b665,
        mid_getMinimumIntegerDigits_15aa3d485e96b665,
        mid_getMultiplier_15aa3d485e96b665,
        mid_getNegativePrefix_dc633f13a47328a8,
        mid_getNegativeSuffix_dc633f13a47328a8,
        mid_getPositivePrefix_dc633f13a47328a8,
        mid_getPositiveSuffix_dc633f13a47328a8,
        mid_hashCode_15aa3d485e96b665,
        mid_isDecimalSeparatorAlwaysShown_ee8b0a5fa521ddac,
        mid_isParseBigDecimal_ee8b0a5fa521ddac,
        mid_setCurrency_37c8c815f3a3d647,
        mid_setDecimalSeparatorAlwaysShown_4f96af910856b303,
        mid_setGroupingSize_da425451c8de636b,
        mid_setGroupingUsed_4f96af910856b303,
        mid_setMaximumFractionDigits_da425451c8de636b,
        mid_setMaximumIntegerDigits_da425451c8de636b,
        mid_setMinimumFractionDigits_da425451c8de636b,
        mid_setMinimumIntegerDigits_da425451c8de636b,
        mid_setMultiplier_da425451c8de636b,
        mid_setNegativePrefix_4a883f7810d2effa,
        mid_setNegativeSuffix_4a883f7810d2effa,
        mid_setParseBigDecimal_4f96af910856b303,
        mid_setPositivePrefix_4a883f7810d2effa,
        mid_setPositiveSuffix_4a883f7810d2effa,
        mid_toLocalizedPattern_dc633f13a47328a8,
        mid_toPattern_dc633f13a47328a8,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit DecimalFormat(jobject obj) : ::java::text::NumberFormat(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      DecimalFormat(const DecimalFormat& obj) : ::java::text::NumberFormat(obj) {}

      DecimalFormat();
      DecimalFormat(const ::java::lang::String &);

      void applyLocalizedPattern(const ::java::lang::String &) const;
      void applyPattern(const ::java::lang::String &) const;
      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::util::Currency getCurrency() const;
      jint getGroupingSize() const;
      jint getMaximumFractionDigits() const;
      jint getMaximumIntegerDigits() const;
      jint getMinimumFractionDigits() const;
      jint getMinimumIntegerDigits() const;
      jint getMultiplier() const;
      ::java::lang::String getNegativePrefix() const;
      ::java::lang::String getNegativeSuffix() const;
      ::java::lang::String getPositivePrefix() const;
      ::java::lang::String getPositiveSuffix() const;
      jint hashCode() const;
      jboolean isDecimalSeparatorAlwaysShown() const;
      jboolean isParseBigDecimal() const;
      void setCurrency(const ::java::util::Currency &) const;
      void setDecimalSeparatorAlwaysShown(jboolean) const;
      void setGroupingSize(jint) const;
      void setGroupingUsed(jboolean) const;
      void setMaximumFractionDigits(jint) const;
      void setMaximumIntegerDigits(jint) const;
      void setMinimumFractionDigits(jint) const;
      void setMinimumIntegerDigits(jint) const;
      void setMultiplier(jint) const;
      void setNegativePrefix(const ::java::lang::String &) const;
      void setNegativeSuffix(const ::java::lang::String &) const;
      void setParseBigDecimal(jboolean) const;
      void setPositivePrefix(const ::java::lang::String &) const;
      void setPositiveSuffix(const ::java::lang::String &) const;
      ::java::lang::String toLocalizedPattern() const;
      ::java::lang::String toPattern() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(DecimalFormat);
    extern PyTypeObject *PY_TYPE(DecimalFormat);

    class t_DecimalFormat {
    public:
      PyObject_HEAD
      DecimalFormat object;
      static PyObject *wrap_Object(const DecimalFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
