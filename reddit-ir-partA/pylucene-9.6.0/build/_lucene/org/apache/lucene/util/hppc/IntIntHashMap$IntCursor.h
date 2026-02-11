#ifndef org_apache_lucene_util_hppc_IntIntHashMap$IntCursor_H
#define org_apache_lucene_util_hppc_IntIntHashMap$IntCursor_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hppc {
          class IntIntHashMap;
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
        namespace hppc {

          class IntIntHashMap$IntCursor : public ::java::lang::Object {
           public:
            enum {
              mid_init$_22e4ac388df03500,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            enum {
              fid_index,
              fid_value,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntIntHashMap$IntCursor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntIntHashMap$IntCursor(const IntIntHashMap$IntCursor& obj) : ::java::lang::Object(obj) {}

            jint _get_index() const;
            void _set_index(jint) const;
            jint _get_value() const;
            void _set_value(jint) const;

            IntIntHashMap$IntCursor(const ::org::apache::lucene::util::hppc::IntIntHashMap &);

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
        namespace hppc {
          extern PyType_Def PY_TYPE_DEF(IntIntHashMap$IntCursor);
          extern PyTypeObject *PY_TYPE(IntIntHashMap$IntCursor);

          class t_IntIntHashMap$IntCursor {
          public:
            PyObject_HEAD
            IntIntHashMap$IntCursor object;
            static PyObject *wrap_Object(const IntIntHashMap$IntCursor&);
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
