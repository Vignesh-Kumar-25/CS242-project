#ifndef org_apache_lucene_util_mutable_MutableValue_H
#define org_apache_lucene_util_mutable_MutableValue_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {
          class MutableValue;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {

          class MutableValue : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_compareSameType_cc82b01b9199bc71,
              mid_compareTo_657ef37e3cd49e95,
              mid_copy_8394ed8ea2cccde7,
              mid_duplicate_26f8f617e498c219,
              mid_equals_6084f78e09b6c0c3,
              mid_equalsSameType_6084f78e09b6c0c3,
              mid_exists_ee8b0a5fa521ddac,
              mid_hashCode_15aa3d485e96b665,
              mid_toObject_bdd51648087bae52,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            enum {
              fid_exists,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MutableValue(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MutableValue(const MutableValue& obj) : ::java::lang::Object(obj) {}

            jboolean _get_exists() const;
            void _set_exists(jboolean) const;

            MutableValue();

            jint compareSameType(const ::java::lang::Object &) const;
            jint compareTo(const MutableValue &) const;
            void copy(const MutableValue &) const;
            MutableValue duplicate() const;
            jboolean equals(const ::java::lang::Object &) const;
            jboolean equalsSameType(const ::java::lang::Object &) const;
            jboolean exists() const;
            jint hashCode() const;
            ::java::lang::Object toObject() const;
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {
          extern PyType_Def PY_TYPE_DEF(MutableValue);
          extern PyTypeObject *PY_TYPE(MutableValue);

          class t_MutableValue {
          public:
            PyObject_HEAD
            MutableValue object;
            static PyObject *wrap_Object(const MutableValue&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
