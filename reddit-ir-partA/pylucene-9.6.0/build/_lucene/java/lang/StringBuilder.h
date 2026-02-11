#ifndef java_lang_StringBuilder_H
#define java_lang_StringBuilder_H

#include "java/lang/AbstractStringBuilder.h"

namespace java {
  namespace lang {
    class StringBuilder;
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

    class StringBuilder : public ::java::lang::AbstractStringBuilder {
     public:
      enum {
        mid_init$_3353d9f14bbfd91a,
        mid_init$_4a883f7810d2effa,
        mid_init$_da425451c8de636b,
        mid_init$_b00f79ee482db81d,
        mid_append_32504c29912356d2,
        mid_append_9a4f9f37aeeb176b,
        mid_append_bead5d27f375ba0b,
        mid_append_51d6053bd5d23816,
        mid_append_bb841c82d5ae9270,
        mid_append_76ce49f54f4fc0ee,
        mid_append_b1ae5c3b41c68895,
        mid_append_d0bfd1734f4745ab,
        mid_append_ff3eb45f4fab9cc9,
        mid_append_677964735739e92e,
        mid_append_0c2e473d711d48b9,
        mid_append_a4e6b661ca96b2b4,
        mid_append_728c17ebb21a1934,
        mid_appendCodePoint_d0bfd1734f4745ab,
        mid_compareTo_1208b6bc34d82f8c,
        mid_delete_ef7dceb2effb9d98,
        mid_deleteCharAt_d0bfd1734f4745ab,
        mid_indexOf_08c5dabd7f8f1590,
        mid_indexOf_386534c7af1bb368,
        mid_insert_26c9cc4874ab9f05,
        mid_insert_75994b96441fe4b6,
        mid_insert_ce1faff0acfbe7e1,
        mid_insert_f5aefeaad65a4403,
        mid_insert_6316380a1d7a4811,
        mid_insert_72ce02ead8fee206,
        mid_insert_ef7dceb2effb9d98,
        mid_insert_d024e5e899778254,
        mid_insert_9bb043b3b3b89fb0,
        mid_insert_86338bc602e0ba9c,
        mid_insert_9a0351f476e0c823,
        mid_insert_7075e42effa8192a,
        mid_lastIndexOf_08c5dabd7f8f1590,
        mid_lastIndexOf_386534c7af1bb368,
        mid_replace_5045e2e299a8924b,
        mid_reverse_936f0cfad67426c9,
        mid_toString_dc633f13a47328a8,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit StringBuilder(jobject obj) : ::java::lang::AbstractStringBuilder(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StringBuilder(const StringBuilder& obj) : ::java::lang::AbstractStringBuilder(obj) {}

      StringBuilder();
      StringBuilder(const ::java::lang::String &);
      StringBuilder(jint);
      StringBuilder(const ::java::lang::CharSequence &);

      StringBuilder append(const ::java::lang::StringBuffer &) const;
      StringBuilder append(const JArray< jchar > &) const;
      StringBuilder append(const ::java::lang::String &) const;
      StringBuilder append(jboolean) const;
      StringBuilder append(jchar) const;
      StringBuilder append(jdouble) const;
      StringBuilder append(jfloat) const;
      StringBuilder append(jint) const;
      StringBuilder append(const ::java::lang::CharSequence &) const;
      StringBuilder append(const ::java::lang::Object &) const;
      StringBuilder append(jlong) const;
      StringBuilder append(const JArray< jchar > &, jint, jint) const;
      StringBuilder append(const ::java::lang::CharSequence &, jint, jint) const;
      StringBuilder appendCodePoint(jint) const;
      jint compareTo(const StringBuilder &) const;
      StringBuilder delete$(jint, jint) const;
      StringBuilder deleteCharAt(jint) const;
      jint indexOf(const ::java::lang::String &) const;
      jint indexOf(const ::java::lang::String &, jint) const;
      StringBuilder insert(jint, const JArray< jchar > &) const;
      StringBuilder insert(jint, const ::java::lang::String &) const;
      StringBuilder insert(jint, jboolean) const;
      StringBuilder insert(jint, jchar) const;
      StringBuilder insert(jint, jdouble) const;
      StringBuilder insert(jint, jfloat) const;
      StringBuilder insert(jint, jint) const;
      StringBuilder insert(jint, const ::java::lang::CharSequence &) const;
      StringBuilder insert(jint, const ::java::lang::Object &) const;
      StringBuilder insert(jint, jlong) const;
      StringBuilder insert(jint, const JArray< jchar > &, jint, jint) const;
      StringBuilder insert(jint, const ::java::lang::CharSequence &, jint, jint) const;
      jint lastIndexOf(const ::java::lang::String &) const;
      jint lastIndexOf(const ::java::lang::String &, jint) const;
      StringBuilder replace(jint, jint, const ::java::lang::String &) const;
      StringBuilder reverse() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(StringBuilder);
    extern PyTypeObject *PY_TYPE(StringBuilder);

    class t_StringBuilder {
    public:
      PyObject_HEAD
      StringBuilder object;
      static PyObject *wrap_Object(const StringBuilder&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
