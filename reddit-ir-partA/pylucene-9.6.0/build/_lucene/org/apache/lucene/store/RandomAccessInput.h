#ifndef org_apache_lucene_store_RandomAccessInput_H
#define org_apache_lucene_store_RandomAccessInput_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class RandomAccessInput : public ::java::lang::Object {
         public:
          enum {
            mid_readByte_2854073926851a8e,
            mid_readInt_0b5d0387e68ead8f,
            mid_readLong_df4b83f9c1b9d174,
            mid_readShort_6f5e62c996394309,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RandomAccessInput(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RandomAccessInput(const RandomAccessInput& obj) : ::java::lang::Object(obj) {}

          jbyte readByte(jlong) const;
          jint readInt(jlong) const;
          jlong readLong(jlong) const;
          jshort readShort(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(RandomAccessInput);
        extern PyTypeObject *PY_TYPE(RandomAccessInput);

        class t_RandomAccessInput {
        public:
          PyObject_HEAD
          RandomAccessInput object;
          static PyObject *wrap_Object(const RandomAccessInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
