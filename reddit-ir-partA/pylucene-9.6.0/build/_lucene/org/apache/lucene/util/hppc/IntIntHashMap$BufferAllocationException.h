#ifndef org_apache_lucene_util_hppc_IntIntHashMap$BufferAllocationException_H
#define org_apache_lucene_util_hppc_IntIntHashMap$BufferAllocationException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
    class Object;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hppc {

          class IntIntHashMap$BufferAllocationException : public ::java::lang::RuntimeException {
           public:
            enum {
              mid_init$_4a883f7810d2effa,
              mid_init$_8af9a40c27868d98,
              mid_init$_8f7ea2ffa087f147,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntIntHashMap$BufferAllocationException(jobject obj) : ::java::lang::RuntimeException(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntIntHashMap$BufferAllocationException(const IntIntHashMap$BufferAllocationException& obj) : ::java::lang::RuntimeException(obj) {}

            IntIntHashMap$BufferAllocationException(const ::java::lang::String &);
            IntIntHashMap$BufferAllocationException(const ::java::lang::String &, const JArray< ::java::lang::Object > &);
            IntIntHashMap$BufferAllocationException(const ::java::lang::String &, const ::java::lang::Throwable &, const JArray< ::java::lang::Object > &);
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
          extern PyType_Def PY_TYPE_DEF(IntIntHashMap$BufferAllocationException);
          extern PyTypeObject *PY_TYPE(IntIntHashMap$BufferAllocationException);

          class t_IntIntHashMap$BufferAllocationException {
          public:
            PyObject_HEAD
            IntIntHashMap$BufferAllocationException object;
            static PyObject *wrap_Object(const IntIntHashMap$BufferAllocationException&);
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
