#ifndef org_apache_lucene_util_SmallFloat_H
#define org_apache_lucene_util_SmallFloat_H

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

        class SmallFloat : public ::java::lang::Object {
         public:
          enum {
            mid_byte315ToFloat_57bb5041970836e8,
            mid_byte4ToInt_130f81254b661ea8,
            mid_byteToFloat_67c44b31aea57ccd,
            mid_floatToByte_ff7de1cc2858bfde,
            mid_floatToByte315_715bad5cfaa386d1,
            mid_int4ToLong_70b2a956d0e32bc7,
            mid_intToByte4_c69adb548510f994,
            mid_longToInt4_0b5d0387e68ead8f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SmallFloat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SmallFloat(const SmallFloat& obj) : ::java::lang::Object(obj) {}

          static jfloat byte315ToFloat(jbyte);
          static jint byte4ToInt(jbyte);
          static jfloat byteToFloat(jbyte, jint, jint);
          static jbyte floatToByte(jfloat, jint, jint);
          static jbyte floatToByte315(jfloat);
          static jlong int4ToLong(jint);
          static jbyte intToByte4(jint);
          static jint longToInt4(jlong);
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
        extern PyType_Def PY_TYPE_DEF(SmallFloat);
        extern PyTypeObject *PY_TYPE(SmallFloat);

        class t_SmallFloat {
        public:
          PyObject_HEAD
          SmallFloat object;
          static PyObject *wrap_Object(const SmallFloat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
