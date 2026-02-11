#ifndef org_apache_lucene_util_IntsRef_H
#define org_apache_lucene_util_IntsRef_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
      }
    }
  }
}
namespace java {
  namespace lang {
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

        class IntsRef : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_da425451c8de636b,
            mid_init$_4aa7571f728d6752,
            mid_clone_7eb5056455b30fe6,
            mid_compareTo_d20bbabbdb17e8a1,
            mid_deepCopyOf_0a956a0d53b4eb82,
            mid_equals_6084f78e09b6c0c3,
            mid_hashCode_15aa3d485e96b665,
            mid_intsEquals_2be50c6403f797e5,
            mid_isValid_ee8b0a5fa521ddac,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          enum {
            fid_ints,
            fid_length,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntsRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntsRef(const IntsRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jint > *EMPTY_INTS;

          JArray< jint > _get_ints() const;
          void _set_ints(const JArray< jint > &) const;
          jint _get_length() const;
          void _set_length(jint) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          IntsRef();
          IntsRef(jint);
          IntsRef(const JArray< jint > &, jint, jint);

          IntsRef clone() const;
          jint compareTo(const IntsRef &) const;
          static IntsRef deepCopyOf(const IntsRef &);
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean intsEquals(const IntsRef &) const;
          jboolean isValid() const;
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
        extern PyType_Def PY_TYPE_DEF(IntsRef);
        extern PyTypeObject *PY_TYPE(IntsRef);

        class t_IntsRef {
        public:
          PyObject_HEAD
          IntsRef object;
          static PyObject *wrap_Object(const IntsRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
