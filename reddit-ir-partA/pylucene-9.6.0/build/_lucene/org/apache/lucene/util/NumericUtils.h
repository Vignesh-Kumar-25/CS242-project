#ifndef org_apache_lucene_util_NumericUtils_H
#define org_apache_lucene_util_NumericUtils_H

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

        class NumericUtils : public ::java::lang::Object {
         public:
          enum {
            mid_add_6d721f580c763aca,
            mid_doubleToSortableLong_1dde19decfbbff0a,
            mid_floatToSortableInt_4472f45646b3744c,
            mid_intToSortableBytes_e0f588bd0ecedb93,
            mid_longToSortableBytes_33208fab899bf262,
            mid_sortableBytesToInt_c7101d48a57e78a5,
            mid_sortableBytesToLong_a54a8b108ad61fb6,
            mid_sortableDoubleBits_df4b83f9c1b9d174,
            mid_sortableFloatBits_58b165b57740feff,
            mid_sortableIntToFloat_cc3c9b7e666e88d5,
            mid_sortableLongToDouble_8936154681cd8b8e,
            mid_subtract_6d721f580c763aca,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NumericUtils(const NumericUtils& obj) : ::java::lang::Object(obj) {}

          static void add(jint, jint, const JArray< jbyte > &, const JArray< jbyte > &, const JArray< jbyte > &);
          static jlong doubleToSortableLong(jdouble);
          static jint floatToSortableInt(jfloat);
          static void intToSortableBytes(jint, const JArray< jbyte > &, jint);
          static void longToSortableBytes(jlong, const JArray< jbyte > &, jint);
          static jint sortableBytesToInt(const JArray< jbyte > &, jint);
          static jlong sortableBytesToLong(const JArray< jbyte > &, jint);
          static jlong sortableDoubleBits(jlong);
          static jint sortableFloatBits(jint);
          static jfloat sortableIntToFloat(jint);
          static jdouble sortableLongToDouble(jlong);
          static void subtract(jint, jint, const JArray< jbyte > &, const JArray< jbyte > &, const JArray< jbyte > &);
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
        extern PyType_Def PY_TYPE_DEF(NumericUtils);
        extern PyTypeObject *PY_TYPE(NumericUtils);

        class t_NumericUtils {
        public:
          PyObject_HEAD
          NumericUtils object;
          static PyObject *wrap_Object(const NumericUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
