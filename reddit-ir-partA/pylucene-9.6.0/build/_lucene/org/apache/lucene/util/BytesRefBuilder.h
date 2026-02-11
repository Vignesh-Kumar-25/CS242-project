#ifndef org_apache_lucene_util_BytesRefBuilder_H
#define org_apache_lucene_util_BytesRefBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefBuilder;
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class CharSequence;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BytesRefBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_append_46caeaebccf31ffe,
            mid_append_39921a90c631b3d1,
            mid_append_34c1f13335999aeb,
            mid_append_411019d3e65b5a2d,
            mid_byteAt_c69adb548510f994,
            mid_bytes_f4d7c022fb7af16d,
            mid_clear_3353d9f14bbfd91a,
            mid_copyBytes_46caeaebccf31ffe,
            mid_copyBytes_39921a90c631b3d1,
            mid_copyBytes_411019d3e65b5a2d,
            mid_copyChars_b00f79ee482db81d,
            mid_copyChars_9df2689bc3d19600,
            mid_copyChars_87f8ac64cb960c8d,
            mid_equals_6084f78e09b6c0c3,
            mid_get_e6961a1ebae5a29a,
            mid_grow_da425451c8de636b,
            mid_hashCode_15aa3d485e96b665,
            mid_length_15aa3d485e96b665,
            mid_setByteAt_c17f767c0949882c,
            mid_setLength_da425451c8de636b,
            mid_toBytesRef_e6961a1ebae5a29a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRefBuilder(const BytesRefBuilder& obj) : ::java::lang::Object(obj) {}

          BytesRefBuilder();

          void append(const ::org::apache::lucene::util::BytesRef &) const;
          void append(const BytesRefBuilder &) const;
          void append(jbyte) const;
          void append(const JArray< jbyte > &, jint, jint) const;
          jbyte byteAt(jint) const;
          JArray< jbyte > bytes() const;
          void clear() const;
          void copyBytes(const ::org::apache::lucene::util::BytesRef &) const;
          void copyBytes(const BytesRefBuilder &) const;
          void copyBytes(const JArray< jbyte > &, jint, jint) const;
          void copyChars(const ::java::lang::CharSequence &) const;
          void copyChars(const JArray< jchar > &, jint, jint) const;
          void copyChars(const ::java::lang::CharSequence &, jint, jint) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::BytesRef get() const;
          void grow(jint) const;
          jint hashCode() const;
          jint length() const;
          void setByteAt(jint, jbyte) const;
          void setLength(jint) const;
          ::org::apache::lucene::util::BytesRef toBytesRef() const;
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
        extern PyType_Def PY_TYPE_DEF(BytesRefBuilder);
        extern PyTypeObject *PY_TYPE(BytesRefBuilder);

        class t_BytesRefBuilder {
        public:
          PyObject_HEAD
          BytesRefBuilder object;
          static PyObject *wrap_Object(const BytesRefBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
