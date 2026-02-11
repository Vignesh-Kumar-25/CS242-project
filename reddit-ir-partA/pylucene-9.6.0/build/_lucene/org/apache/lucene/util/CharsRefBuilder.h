#ifndef org_apache_lucene_util_CharsRefBuilder_H
#define org_apache_lucene_util_CharsRefBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class CharsRef;
        class CharsRefBuilder;
      }
    }
  }
}
namespace java {
  namespace lang {
    class CharSequence;
    class Appendable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class CharsRefBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_append_b49fc24bd5210278,
            mid_append_632bed5d2b1faf59,
            mid_append_9df2689bc3d19600,
            mid_append_b9dc01d405da4a8f,
            mid_charAt_c36d5d142dcfe0b2,
            mid_chars_44e5186a889ad767,
            mid_clear_3353d9f14bbfd91a,
            mid_copyChars_6eaf80a5dcf8e709,
            mid_copyChars_9df2689bc3d19600,
            mid_copyUTF8Bytes_46caeaebccf31ffe,
            mid_copyUTF8Bytes_411019d3e65b5a2d,
            mid_equals_6084f78e09b6c0c3,
            mid_get_468d122cdfa9c4af,
            mid_grow_da425451c8de636b,
            mid_hashCode_15aa3d485e96b665,
            mid_length_15aa3d485e96b665,
            mid_setCharAt_5219ca4e678668cb,
            mid_setLength_da425451c8de636b,
            mid_toCharsRef_468d122cdfa9c4af,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharsRefBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharsRefBuilder(const CharsRefBuilder& obj) : ::java::lang::Object(obj) {}

          CharsRefBuilder();

          CharsRefBuilder append(jchar) const;
          CharsRefBuilder append(const ::java::lang::CharSequence &) const;
          void append(const JArray< jchar > &, jint, jint) const;
          CharsRefBuilder append(const ::java::lang::CharSequence &, jint, jint) const;
          jchar charAt(jint) const;
          JArray< jchar > chars() const;
          void clear() const;
          void copyChars(const ::org::apache::lucene::util::CharsRef &) const;
          void copyChars(const JArray< jchar > &, jint, jint) const;
          void copyUTF8Bytes(const ::org::apache::lucene::util::BytesRef &) const;
          void copyUTF8Bytes(const JArray< jbyte > &, jint, jint) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::CharsRef get() const;
          void grow(jint) const;
          jint hashCode() const;
          jint length() const;
          void setCharAt(jint, jchar) const;
          void setLength(jint) const;
          ::org::apache::lucene::util::CharsRef toCharsRef() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(CharsRefBuilder);
        extern PyTypeObject *PY_TYPE(CharsRefBuilder);

        class t_CharsRefBuilder {
        public:
          PyObject_HEAD
          CharsRefBuilder object;
          static PyObject *wrap_Object(const CharsRefBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
