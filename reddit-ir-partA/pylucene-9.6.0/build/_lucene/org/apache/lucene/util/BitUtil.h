#ifndef org_apache_lucene_util_BitUtil_H
#define org_apache_lucene_util_BitUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BitUtil : public ::java::lang::Object {
         public:
          enum {
            mid_deinterleave_df4b83f9c1b9d174,
            mid_flipFlop_df4b83f9c1b9d174,
            mid_interleave_d77bbfe41845e683,
            mid_nextHighestPowerOfTwo_58b165b57740feff,
            mid_nextHighestPowerOfTwo_df4b83f9c1b9d174,
            mid_zigZagDecode_58b165b57740feff,
            mid_zigZagDecode_df4b83f9c1b9d174,
            mid_zigZagEncode_58b165b57740feff,
            mid_zigZagEncode_df4b83f9c1b9d174,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BitUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BitUtil(const BitUtil& obj) : ::java::lang::Object(obj) {}

          static jlong deinterleave(jlong);
          static jlong flipFlop(jlong);
          static jlong interleave(jint, jint);
          static jint nextHighestPowerOfTwo(jint);
          static jlong nextHighestPowerOfTwo(jlong);
          static jint zigZagDecode(jint);
          static jlong zigZagDecode(jlong);
          static jint zigZagEncode(jint);
          static jlong zigZagEncode(jlong);
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
        extern PyType_Def PY_TYPE_DEF(BitUtil);
        extern PyTypeObject *PY_TYPE(BitUtil);

        class t_BitUtil {
        public:
          PyObject_HEAD
          BitUtil object;
          static PyObject *wrap_Object(const BitUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
