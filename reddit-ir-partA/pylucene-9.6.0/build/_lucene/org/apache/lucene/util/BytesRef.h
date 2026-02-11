#ifndef org_apache_lucene_util_BytesRef_H
#define org_apache_lucene_util_BytesRef_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class CharSequence;
    class Class;
    class Cloneable;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BytesRef : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_e11791089a78895a,
            mid_init$_da425451c8de636b,
            mid_init$_b00f79ee482db81d,
            mid_init$_411019d3e65b5a2d,
            mid_bytesEquals_d146ede34c2ecacf,
            mid_clone_e6961a1ebae5a29a,
            mid_compareTo_7e43af883cb79fc2,
            mid_deepCopyOf_0231fd9dce4d8773,
            mid_equals_6084f78e09b6c0c3,
            mid_hashCode_15aa3d485e96b665,
            mid_isValid_ee8b0a5fa521ddac,
            mid_toString_dc633f13a47328a8,
            mid_utf8ToString_dc633f13a47328a8,
            max_mid
          };

          enum {
            fid_bytes,
            fid_length,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRef(const BytesRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jbyte > *EMPTY_BYTES;

          JArray< jbyte > _get_bytes() const;
          void _set_bytes(const JArray< jbyte > &) const;
          jint _get_length() const;
          void _set_length(jint) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          BytesRef();
          BytesRef(const JArray< jbyte > &);
          BytesRef(jint);
          BytesRef(const ::java::lang::CharSequence &);
          BytesRef(const JArray< jbyte > &, jint, jint);

          jboolean bytesEquals(const BytesRef &) const;
          BytesRef clone() const;
          jint compareTo(const BytesRef &) const;
          static BytesRef deepCopyOf(const BytesRef &);
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean isValid() const;
          ::java::lang::String toString() const;
          ::java::lang::String utf8ToString() const;
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
        extern PyType_Def PY_TYPE_DEF(BytesRef);
        extern PyTypeObject *PY_TYPE(BytesRef);

        class t_BytesRef {
        public:
          PyObject_HEAD
          BytesRef object;
          static PyObject *wrap_Object(const BytesRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
