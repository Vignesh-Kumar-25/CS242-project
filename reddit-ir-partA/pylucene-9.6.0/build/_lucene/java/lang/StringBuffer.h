#ifndef java_lang_StringBuffer_H
#define java_lang_StringBuffer_H

#include "java/lang/AbstractStringBuilder.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Class;
    class Object;
    class String;
    class StringBuffer;
    class Comparable;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class StringBuffer : public ::java::lang::AbstractStringBuilder {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_4a883f7810d2effa,
        mid_init$_da425451c8de636b,
        mid_init$_b00f79ee482db81d,
        mid_append_c1d4fce7f336e672,
        mid_append_5c67f12c108412c0,
        mid_append_24cb6262959b7036,
        mid_append_c63c6a2d72fd2ec7,
        mid_append_e9eeb4749750622c,
        mid_append_f6d891328353c6de,
        mid_append_625f7b8e5c7f0ac8,
        mid_append_6fbd397c60550389,
        mid_append_1105edd56bc74f74,
        mid_append_fa19c7176037f029,
        mid_append_9dce49ffbf73bbdf,
        mid_append_d408fb0ad8403a02,
        mid_append_5d03ed67c148f439,
        mid_appendCodePoint_6fbd397c60550389,
        mid_capacity_15aa3d485e96b665,
        mid_charAt_c36d5d142dcfe0b2,
        mid_codePointAt_58b165b57740feff,
        mid_codePointBefore_58b165b57740feff,
        mid_codePointCount_cd4894667d94f4d3,
        mid_compareTo_4bd709c246b62dc7,
        mid_delete_0f82a0ba3695ccb1,
        mid_deleteCharAt_6fbd397c60550389,
        mid_ensureCapacity_da425451c8de636b,
        mid_getChars_586a9f2861d091c0,
        mid_indexOf_08c5dabd7f8f1590,
        mid_indexOf_386534c7af1bb368,
        mid_insert_e295ef41ab3b99c4,
        mid_insert_d937c304da7f4905,
        mid_insert_dc379bac34a54ac9,
        mid_insert_487feb5c93588476,
        mid_insert_f376a09909113bcf,
        mid_insert_cd983d6b04c29ded,
        mid_insert_0f82a0ba3695ccb1,
        mid_insert_718ec5e6734501c8,
        mid_insert_a3b1877338484eba,
        mid_insert_6082a073e171ef09,
        mid_insert_9138f0ab22715114,
        mid_insert_a135abab3fde4133,
        mid_lastIndexOf_08c5dabd7f8f1590,
        mid_lastIndexOf_386534c7af1bb368,
        mid_length_15aa3d485e96b665,
        mid_offsetByCodePoints_cd4894667d94f4d3,
        mid_replace_24a9fe14241e23d7,
        mid_reverse_4bfbf47d3889b287,
        mid_setCharAt_5219ca4e678668cb,
        mid_setLength_da425451c8de636b,
        mid_subSequence_d258919c83060ac0,
        mid_substring_78a7b318cefaee15,
        mid_substring_e98b2080aaec4364,
        mid_toString_dc633f13a47328a8,
        mid_trimToSize_3353d9f14bbfd91a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit StringBuffer(jobject obj) : ::java::lang::AbstractStringBuilder(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StringBuffer(const StringBuffer& obj) : ::java::lang::AbstractStringBuilder(obj) {}

      StringBuffer();
      StringBuffer(const ::java::lang::String &);
      StringBuffer(jint);
      StringBuffer(const ::java::lang::CharSequence &);

      StringBuffer append(const StringBuffer &) const;
      StringBuffer append(const JArray< jchar > &) const;
      StringBuffer append(const ::java::lang::String &) const;
      StringBuffer append(jboolean) const;
      StringBuffer append(jchar) const;
      StringBuffer append(jdouble) const;
      StringBuffer append(jfloat) const;
      StringBuffer append(jint) const;
      StringBuffer append(const ::java::lang::CharSequence &) const;
      StringBuffer append(const ::java::lang::Object &) const;
      StringBuffer append(jlong) const;
      StringBuffer append(const JArray< jchar > &, jint, jint) const;
      StringBuffer append(const ::java::lang::CharSequence &, jint, jint) const;
      StringBuffer appendCodePoint(jint) const;
      jint capacity() const;
      jchar charAt(jint) const;
      jint codePointAt(jint) const;
      jint codePointBefore(jint) const;
      jint codePointCount(jint, jint) const;
      jint compareTo(const StringBuffer &) const;
      StringBuffer delete$(jint, jint) const;
      StringBuffer deleteCharAt(jint) const;
      void ensureCapacity(jint) const;
      void getChars(jint, jint, const JArray< jchar > &, jint) const;
      jint indexOf(const ::java::lang::String &) const;
      jint indexOf(const ::java::lang::String &, jint) const;
      StringBuffer insert(jint, const JArray< jchar > &) const;
      StringBuffer insert(jint, const ::java::lang::String &) const;
      StringBuffer insert(jint, jboolean) const;
      StringBuffer insert(jint, jchar) const;
      StringBuffer insert(jint, jdouble) const;
      StringBuffer insert(jint, jfloat) const;
      StringBuffer insert(jint, jint) const;
      StringBuffer insert(jint, const ::java::lang::CharSequence &) const;
      StringBuffer insert(jint, const ::java::lang::Object &) const;
      StringBuffer insert(jint, jlong) const;
      StringBuffer insert(jint, const JArray< jchar > &, jint, jint) const;
      StringBuffer insert(jint, const ::java::lang::CharSequence &, jint, jint) const;
      jint lastIndexOf(const ::java::lang::String &) const;
      jint lastIndexOf(const ::java::lang::String &, jint) const;
      jint length() const;
      jint offsetByCodePoints(jint, jint) const;
      StringBuffer replace(jint, jint, const ::java::lang::String &) const;
      StringBuffer reverse() const;
      void setCharAt(jint, jchar) const;
      void setLength(jint) const;
      ::java::lang::CharSequence subSequence(jint, jint) const;
      ::java::lang::String substring(jint) const;
      ::java::lang::String substring(jint, jint) const;
      ::java::lang::String toString() const;
      void trimToSize() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(StringBuffer);
    extern PyTypeObject *PY_TYPE(StringBuffer);

    class t_StringBuffer {
    public:
      PyObject_HEAD
      StringBuffer object;
      static PyObject *wrap_Object(const StringBuffer&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
