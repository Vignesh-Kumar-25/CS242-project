#ifndef org_apache_lucene_util_CharsRef_H
#define org_apache_lucene_util_CharsRef_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class CharsRef;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
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

        class CharsRef : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_4a883f7810d2effa,
            mid_init$_da425451c8de636b,
            mid_init$_9df2689bc3d19600,
            mid_charAt_c36d5d142dcfe0b2,
            mid_charsEquals_26c887f00d5bd6da,
            mid_clone_468d122cdfa9c4af,
            mid_compareTo_ac3b569a5fe1c78e,
            mid_deepCopyOf_5b3da37b8064b362,
            mid_equals_6084f78e09b6c0c3,
            mid_getUTF16SortedAsUTF8Comparator_bfaba219acee2aff,
            mid_hashCode_15aa3d485e96b665,
            mid_isValid_ee8b0a5fa521ddac,
            mid_length_15aa3d485e96b665,
            mid_stringHashCode_cb7d7dc978d108f2,
            mid_subSequence_d258919c83060ac0,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          enum {
            fid_chars,
            fid_length,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharsRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharsRef(const CharsRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jchar > *EMPTY_CHARS;

          JArray< jchar > _get_chars() const;
          void _set_chars(const JArray< jchar > &) const;
          jint _get_length() const;
          void _set_length(jint) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          CharsRef();
          CharsRef(const ::java::lang::String &);
          CharsRef(jint);
          CharsRef(const JArray< jchar > &, jint, jint);

          jchar charAt(jint) const;
          jboolean charsEquals(const CharsRef &) const;
          CharsRef clone() const;
          jint compareTo(const CharsRef &) const;
          static CharsRef deepCopyOf(const CharsRef &);
          jboolean equals(const ::java::lang::Object &) const;
          static ::java::util::Comparator getUTF16SortedAsUTF8Comparator();
          jint hashCode() const;
          jboolean isValid() const;
          jint length() const;
          static jint stringHashCode(const JArray< jchar > &, jint, jint);
          ::java::lang::CharSequence subSequence(jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(CharsRef);
        extern PyTypeObject *PY_TYPE(CharsRef);

        class t_CharsRef {
        public:
          PyObject_HEAD
          CharsRef object;
          static PyObject *wrap_Object(const CharsRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
