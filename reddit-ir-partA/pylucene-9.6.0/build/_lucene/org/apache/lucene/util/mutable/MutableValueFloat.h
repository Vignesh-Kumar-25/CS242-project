#ifndef org_apache_lucene_util_mutable_MutableValueFloat_H
#define org_apache_lucene_util_mutable_MutableValueFloat_H

#include "org/apache/lucene/util/mutable/MutableValue.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {

          class MutableValueFloat : public ::org::apache::lucene::util::mutable$::MutableValue {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_compareSameType_cc82b01b9199bc71,
              mid_copy_8394ed8ea2cccde7,
              mid_duplicate_26f8f617e498c219,
              mid_equalsSameType_6084f78e09b6c0c3,
              mid_hashCode_15aa3d485e96b665,
              mid_toObject_bdd51648087bae52,
              max_mid
            };

            enum {
              fid_value,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MutableValueFloat(jobject obj) : ::org::apache::lucene::util::mutable$::MutableValue(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MutableValueFloat(const MutableValueFloat& obj) : ::org::apache::lucene::util::mutable$::MutableValue(obj) {}

            jfloat _get_value() const;
            void _set_value(jfloat) const;

            MutableValueFloat();

            jint compareSameType(const ::java::lang::Object &) const;
            void copy(const ::org::apache::lucene::util::mutable$::MutableValue &) const;
            ::org::apache::lucene::util::mutable$::MutableValue duplicate() const;
            jboolean equalsSameType(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::java::lang::Object toObject() const;
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
          extern PyType_Def PY_TYPE_DEF(MutableValueFloat);
          extern PyTypeObject *PY_TYPE(MutableValueFloat);

          class t_MutableValueFloat {
          public:
            PyObject_HEAD
            MutableValueFloat object;
            static PyObject *wrap_Object(const MutableValueFloat&);
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
