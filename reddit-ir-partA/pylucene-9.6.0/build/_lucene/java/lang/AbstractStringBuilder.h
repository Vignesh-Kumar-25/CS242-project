#ifndef java_lang_AbstractStringBuilder_H
#define java_lang_AbstractStringBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Appendable;
    class AbstractStringBuilder;
    class Class;
    class String;
    class StringBuffer;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class AbstractStringBuilder : public ::java::lang::Object {
     public:
      enum {
        mid_append_4ac96f3a8c8b15fb,
        mid_append_29231f784e3b9f31,
        mid_append_852bf490436c1383,
        mid_append_736aeceee1cae29c,
        mid_append_f246346a5988601f,
        mid_append_37ef69dfd2f3c0c5,
        mid_append_b8f61a4a2acf1532,
        mid_append_2c0ba99ac747b449,
        mid_append_2ef80f0954e7e15c,
        mid_append_9be9c67131d8b5fb,
        mid_append_359e21fefb7ab60c,
        mid_append_6940bb86360e429a,
        mid_append_01696a410c26dd6c,
        mid_appendCodePoint_2c0ba99ac747b449,
        mid_capacity_15aa3d485e96b665,
        mid_charAt_c36d5d142dcfe0b2,
        mid_codePointAt_58b165b57740feff,
        mid_codePointBefore_58b165b57740feff,
        mid_codePointCount_cd4894667d94f4d3,
        mid_delete_1ff4766eca47fc3b,
        mid_deleteCharAt_2c0ba99ac747b449,
        mid_ensureCapacity_da425451c8de636b,
        mid_getChars_586a9f2861d091c0,
        mid_indexOf_08c5dabd7f8f1590,
        mid_indexOf_386534c7af1bb368,
        mid_insert_4e5ddc7b01d62f92,
        mid_insert_0404c03cc6bddd18,
        mid_insert_44bccdb1a3901cc9,
        mid_insert_2c1b1b8393605b4c,
        mid_insert_141b47b131b7df6b,
        mid_insert_c14a9070791d4260,
        mid_insert_1ff4766eca47fc3b,
        mid_insert_551c575da92c1699,
        mid_insert_057f73a8fbf15523,
        mid_insert_592681fa4e07d885,
        mid_insert_7f8c92f6cae676cb,
        mid_insert_7d6c7810fed31417,
        mid_lastIndexOf_08c5dabd7f8f1590,
        mid_lastIndexOf_386534c7af1bb368,
        mid_length_15aa3d485e96b665,
        mid_offsetByCodePoints_cd4894667d94f4d3,
        mid_replace_591d05638553040d,
        mid_reverse_e3d9f8b5cc19ad89,
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

      explicit AbstractStringBuilder(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AbstractStringBuilder(const AbstractStringBuilder& obj) : ::java::lang::Object(obj) {}

      AbstractStringBuilder append(const ::java::lang::StringBuffer &) const;
      AbstractStringBuilder append(const JArray< jchar > &) const;
      AbstractStringBuilder append(const ::java::lang::String &) const;
      AbstractStringBuilder append(jboolean) const;
      AbstractStringBuilder append(jchar) const;
      AbstractStringBuilder append(jdouble) const;
      AbstractStringBuilder append(jfloat) const;
      AbstractStringBuilder append(jint) const;
      AbstractStringBuilder append(const ::java::lang::CharSequence &) const;
      AbstractStringBuilder append(const ::java::lang::Object &) const;
      AbstractStringBuilder append(jlong) const;
      AbstractStringBuilder append(const JArray< jchar > &, jint, jint) const;
      AbstractStringBuilder append(const ::java::lang::CharSequence &, jint, jint) const;
      AbstractStringBuilder appendCodePoint(jint) const;
      jint capacity() const;
      jchar charAt(jint) const;
      jint codePointAt(jint) const;
      jint codePointBefore(jint) const;
      jint codePointCount(jint, jint) const;
      AbstractStringBuilder delete$(jint, jint) const;
      AbstractStringBuilder deleteCharAt(jint) const;
      void ensureCapacity(jint) const;
      void getChars(jint, jint, const JArray< jchar > &, jint) const;
      jint indexOf(const ::java::lang::String &) const;
      jint indexOf(const ::java::lang::String &, jint) const;
      AbstractStringBuilder insert(jint, const JArray< jchar > &) const;
      AbstractStringBuilder insert(jint, const ::java::lang::String &) const;
      AbstractStringBuilder insert(jint, jboolean) const;
      AbstractStringBuilder insert(jint, jchar) const;
      AbstractStringBuilder insert(jint, jdouble) const;
      AbstractStringBuilder insert(jint, jfloat) const;
      AbstractStringBuilder insert(jint, jint) const;
      AbstractStringBuilder insert(jint, const ::java::lang::CharSequence &) const;
      AbstractStringBuilder insert(jint, const ::java::lang::Object &) const;
      AbstractStringBuilder insert(jint, jlong) const;
      AbstractStringBuilder insert(jint, const JArray< jchar > &, jint, jint) const;
      AbstractStringBuilder insert(jint, const ::java::lang::CharSequence &, jint, jint) const;
      jint lastIndexOf(const ::java::lang::String &) const;
      jint lastIndexOf(const ::java::lang::String &, jint) const;
      jint length() const;
      jint offsetByCodePoints(jint, jint) const;
      AbstractStringBuilder replace(jint, jint, const ::java::lang::String &) const;
      AbstractStringBuilder reverse() const;
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
    extern PyType_Def PY_TYPE_DEF(AbstractStringBuilder);
    extern PyTypeObject *PY_TYPE(AbstractStringBuilder);

    class t_AbstractStringBuilder {
    public:
      PyObject_HEAD
      AbstractStringBuilder object;
      static PyObject *wrap_Object(const AbstractStringBuilder&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
