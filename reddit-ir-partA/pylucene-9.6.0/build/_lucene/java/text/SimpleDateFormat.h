#ifndef java_text_SimpleDateFormat_H
#define java_text_SimpleDateFormat_H

#include "java/text/DateFormat.h"

namespace java {
  namespace util {
    class Date;
    class Locale;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
    class StringBuffer;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class SimpleDateFormat : public ::java::text::DateFormat {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_4a883f7810d2effa,
        mid_init$_b5b89bca362eaf6f,
        mid_applyLocalizedPattern_4a883f7810d2effa,
        mid_applyPattern_4a883f7810d2effa,
        mid_clone_bdd51648087bae52,
        mid_equals_6084f78e09b6c0c3,
        mid_get2DigitYearStart_7860fa1e176ffd27,
        mid_hashCode_15aa3d485e96b665,
        mid_set2DigitYearStart_85d4aa059c7a9cf4,
        mid_toLocalizedPattern_dc633f13a47328a8,
        mid_toPattern_dc633f13a47328a8,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SimpleDateFormat(jobject obj) : ::java::text::DateFormat(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SimpleDateFormat(const SimpleDateFormat& obj) : ::java::text::DateFormat(obj) {}

      SimpleDateFormat();
      SimpleDateFormat(const ::java::lang::String &);
      SimpleDateFormat(const ::java::lang::String &, const ::java::util::Locale &);

      void applyLocalizedPattern(const ::java::lang::String &) const;
      void applyPattern(const ::java::lang::String &) const;
      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::util::Date get2DigitYearStart() const;
      jint hashCode() const;
      void set2DigitYearStart(const ::java::util::Date &) const;
      ::java::lang::String toLocalizedPattern() const;
      ::java::lang::String toPattern() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(SimpleDateFormat);
    extern PyTypeObject *PY_TYPE(SimpleDateFormat);

    class t_SimpleDateFormat {
    public:
      PyObject_HEAD
      SimpleDateFormat object;
      static PyObject *wrap_Object(const SimpleDateFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
