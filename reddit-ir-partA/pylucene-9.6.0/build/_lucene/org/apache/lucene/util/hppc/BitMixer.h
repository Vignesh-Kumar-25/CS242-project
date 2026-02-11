#ifndef org_apache_lucene_util_hppc_BitMixer_H
#define org_apache_lucene_util_hppc_BitMixer_H

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
        namespace hppc {

          class BitMixer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_mix_130f81254b661ea8,
              mid_mix_01bbf7fd37c1198f,
              mid_mix_32aa492f89a44f0c,
              mid_mix_4472f45646b3744c,
              mid_mix_58b165b57740feff,
              mid_mix_cc82b01b9199bc71,
              mid_mix_0b5d0387e68ead8f,
              mid_mix_b2464a0412a5f920,
              mid_mix32_58b165b57740feff,
              mid_mix64_df4b83f9c1b9d174,
              mid_mixPhi_130f81254b661ea8,
              mid_mixPhi_01bbf7fd37c1198f,
              mid_mixPhi_32aa492f89a44f0c,
              mid_mixPhi_4472f45646b3744c,
              mid_mixPhi_58b165b57740feff,
              mid_mixPhi_cc82b01b9199bc71,
              mid_mixPhi_0b5d0387e68ead8f,
              mid_mixPhi_b2464a0412a5f920,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BitMixer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BitMixer(const BitMixer& obj) : ::java::lang::Object(obj) {}

            BitMixer();

            static jint mix(jbyte);
            static jint mix(jchar);
            static jint mix(jdouble);
            static jint mix(jfloat);
            static jint mix(jint);
            static jint mix(const ::java::lang::Object &);
            static jint mix(jlong);
            static jint mix(jshort);
            static jint mix32(jint);
            static jlong mix64(jlong);
            static jint mixPhi(jbyte);
            static jint mixPhi(jchar);
            static jint mixPhi(jdouble);
            static jint mixPhi(jfloat);
            static jint mixPhi(jint);
            static jint mixPhi(const ::java::lang::Object &);
            static jint mixPhi(jlong);
            static jint mixPhi(jshort);
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
          extern PyType_Def PY_TYPE_DEF(BitMixer);
          extern PyTypeObject *PY_TYPE(BitMixer);

          class t_BitMixer {
          public:
            PyObject_HEAD
            BitMixer object;
            static PyObject *wrap_Object(const BitMixer&);
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
