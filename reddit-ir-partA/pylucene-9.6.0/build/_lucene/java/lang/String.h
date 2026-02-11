#ifndef java_lang_String_H
#define java_lang_String_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class StringBuilder;
    class Iterable;
    class CharSequence;
    class Class;
    class String;
    class StringBuffer;
    class Comparable;
  }
  namespace util {
    class Comparator;
    class Locale;
  }
  namespace io {
    class Serializable;
    class UnsupportedEncodingException;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class String : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_2857b4ed7b1ac690,
        mid_init$_94e20f3c4a3e724b,
        mid_init$_e11791089a78895a,
        mid_init$_7d636082e71ec259,
        mid_init$_7f621642b9bebca9,
        mid_init$_316a601689372d68,
        mid_init$_411019d3e65b5a2d,
        mid_init$_9df2689bc3d19600,
        mid_init$_4aa7571f728d6752,
        mid_init$_ec914cf1a0407167,
        mid_init$_deee30a8e8e25fa9,
        mid_charAt_c36d5d142dcfe0b2,
        mid_codePointAt_58b165b57740feff,
        mid_codePointBefore_58b165b57740feff,
        mid_codePointCount_cd4894667d94f4d3,
        mid_compareTo_08c5dabd7f8f1590,
        mid_compareToIgnoreCase_08c5dabd7f8f1590,
        mid_concat_04612c8360f09496,
        mid_contains_f6ed35df00b05129,
        mid_contentEquals_4251e5b1a7b2d8fa,
        mid_contentEquals_f6ed35df00b05129,
        mid_copyValueOf_4ca7828cf6cc172c,
        mid_copyValueOf_10ef0dcd2e6173a1,
        mid_endsWith_77e0b5c3eb1962ba,
        mid_equals_6084f78e09b6c0c3,
        mid_equalsIgnoreCase_77e0b5c3eb1962ba,
        mid_format_da059d0d052cd373,
        mid_format_c325747f70e7b7c6,
        mid_getBytes_f4d7c022fb7af16d,
        mid_getBytes_86b0eaa83340b5a7,
        mid_getBytes_b76d225a6b80f5af,
        mid_getChars_586a9f2861d091c0,
        mid_hashCode_15aa3d485e96b665,
        mid_indexOf_08c5dabd7f8f1590,
        mid_indexOf_58b165b57740feff,
        mid_indexOf_386534c7af1bb368,
        mid_indexOf_cd4894667d94f4d3,
        mid_intern_dc633f13a47328a8,
        mid_isBlank_ee8b0a5fa521ddac,
        mid_isEmpty_ee8b0a5fa521ddac,
        mid_join_e6c0c6991cb225da,
        mid_join_0bd2f27539043ea9,
        mid_lastIndexOf_08c5dabd7f8f1590,
        mid_lastIndexOf_58b165b57740feff,
        mid_lastIndexOf_386534c7af1bb368,
        mid_lastIndexOf_cd4894667d94f4d3,
        mid_length_15aa3d485e96b665,
        mid_matches_77e0b5c3eb1962ba,
        mid_offsetByCodePoints_cd4894667d94f4d3,
        mid_regionMatches_5c076d59f0a33d61,
        mid_regionMatches_09f777869bf2268e,
        mid_repeat_78a7b318cefaee15,
        mid_replace_3cb6c185afd19048,
        mid_replace_8c4fa6f0780bcf70,
        mid_replaceAll_4178ea5d4aed7988,
        mid_replaceFirst_4178ea5d4aed7988,
        mid_split_5dfe22b47e50fb54,
        mid_split_fd11a4f8b9efb6ae,
        mid_startsWith_77e0b5c3eb1962ba,
        mid_startsWith_c1d70a8a22ccfd04,
        mid_strip_dc633f13a47328a8,
        mid_stripLeading_dc633f13a47328a8,
        mid_stripTrailing_dc633f13a47328a8,
        mid_subSequence_d258919c83060ac0,
        mid_substring_78a7b318cefaee15,
        mid_substring_e98b2080aaec4364,
        mid_toCharArray_44e5186a889ad767,
        mid_toLowerCase_dc633f13a47328a8,
        mid_toLowerCase_477c45bdc4979c5d,
        mid_toString_dc633f13a47328a8,
        mid_toUpperCase_dc633f13a47328a8,
        mid_toUpperCase_477c45bdc4979c5d,
        mid_trim_dc633f13a47328a8,
        mid_valueOf_4ca7828cf6cc172c,
        mid_valueOf_5a10629f333319c8,
        mid_valueOf_19f4a1bbde9148a2,
        mid_valueOf_207c881979c67b52,
        mid_valueOf_c8e40c7484e79ae2,
        mid_valueOf_78a7b318cefaee15,
        mid_valueOf_8b996882aac19745,
        mid_valueOf_23522a84630bd8fe,
        mid_valueOf_10ef0dcd2e6173a1,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit String(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      String(const String& obj) : ::java::lang::Object(obj) {}

      static ::java::util::Comparator *CASE_INSENSITIVE_ORDER;

      String();
      String(const ::java::lang::StringBuffer &);
      String(const ::java::lang::StringBuilder &);
      String(const JArray< jbyte > &);
      String(const JArray< jchar > &);
      String(const JArray< jbyte > &, const String &);
      String(const JArray< jbyte > &, jint);
      String(const JArray< jbyte > &, jint, jint);
      String(const JArray< jchar > &, jint, jint);
      String(const JArray< jint > &, jint, jint);
      String(const JArray< jbyte > &, jint, jint, const String &);
      String(const JArray< jbyte > &, jint, jint, jint);

      jchar charAt(jint) const;
      jint codePointAt(jint) const;
      jint codePointBefore(jint) const;
      jint codePointCount(jint, jint) const;
      jint compareTo(const String &) const;
      jint compareToIgnoreCase(const String &) const;
      String concat(const String &) const;
      jboolean contains(const ::java::lang::CharSequence &) const;
      jboolean contentEquals(const ::java::lang::StringBuffer &) const;
      jboolean contentEquals(const ::java::lang::CharSequence &) const;
      static String copyValueOf(const JArray< jchar > &);
      static String copyValueOf(const JArray< jchar > &, jint, jint);
      jboolean endsWith(const String &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jboolean equalsIgnoreCase(const String &) const;
      static String format(const String &, const JArray< ::java::lang::Object > &);
      static String format(const ::java::util::Locale &, const String &, const JArray< ::java::lang::Object > &);
      JArray< jbyte > getBytes() const;
      JArray< jbyte > getBytes(const String &) const;
      void getBytes(jint, jint, const JArray< jbyte > &, jint) const;
      void getChars(jint, jint, const JArray< jchar > &, jint) const;
      jint hashCode() const;
      jint indexOf(const String &) const;
      jint indexOf(jint) const;
      jint indexOf(const String &, jint) const;
      jint indexOf(jint, jint) const;
      String intern() const;
      jboolean isBlank() const;
      jboolean isEmpty() const;
      static String join(const ::java::lang::CharSequence &, const JArray< ::java::lang::CharSequence > &);
      static String join(const ::java::lang::CharSequence &, const ::java::lang::Iterable &);
      jint lastIndexOf(const String &) const;
      jint lastIndexOf(jint) const;
      jint lastIndexOf(const String &, jint) const;
      jint lastIndexOf(jint, jint) const;
      jint length() const;
      jboolean matches(const String &) const;
      jint offsetByCodePoints(jint, jint) const;
      jboolean regionMatches(jint, const String &, jint, jint) const;
      jboolean regionMatches(jboolean, jint, const String &, jint, jint) const;
      String repeat(jint) const;
      String replace(jchar, jchar) const;
      String replace(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
      String replaceAll(const String &, const String &) const;
      String replaceFirst(const String &, const String &) const;
      JArray< String > split(const String &) const;
      JArray< String > split(const String &, jint) const;
      jboolean startsWith(const String &) const;
      jboolean startsWith(const String &, jint) const;
      String strip() const;
      String stripLeading() const;
      String stripTrailing() const;
      ::java::lang::CharSequence subSequence(jint, jint) const;
      String substring(jint) const;
      String substring(jint, jint) const;
      JArray< jchar > toCharArray() const;
      String toLowerCase() const;
      String toLowerCase(const ::java::util::Locale &) const;
      String toString() const;
      String toUpperCase() const;
      String toUpperCase(const ::java::util::Locale &) const;
      String trim() const;
      static String valueOf(const JArray< jchar > &);
      static String valueOf(jboolean);
      static String valueOf(jchar);
      static String valueOf(jdouble);
      static String valueOf(jfloat);
      static String valueOf(jint);
      static String valueOf(const ::java::lang::Object &);
      static String valueOf(jlong);
      static String valueOf(const JArray< jchar > &, jint, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(String);
    extern PyTypeObject *PY_TYPE(String);

    class t_String {
    public:
      PyObject_HEAD
      String object;
      static PyObject *wrap_Object(const String&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
