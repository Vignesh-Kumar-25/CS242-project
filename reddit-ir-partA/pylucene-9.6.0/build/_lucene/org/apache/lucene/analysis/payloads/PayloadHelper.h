#ifndef org_apache_lucene_analysis_payloads_PayloadHelper_H
#define org_apache_lucene_analysis_payloads_PayloadHelper_H

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
      namespace analysis {
        namespace payloads {

          class PayloadHelper : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_decodeFloat_cb6ac454b3c8b252,
              mid_decodeFloat_f8397f181c372ae3,
              mid_decodeInt_c7101d48a57e78a5,
              mid_encodeFloat_4ed400ad5783c299,
              mid_encodeFloat_55864735c0087771,
              mid_encodeInt_4b02f4de68fe5cae,
              mid_encodeInt_cae4c8610cc4250e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadHelper(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PayloadHelper(const PayloadHelper& obj) : ::java::lang::Object(obj) {}

            PayloadHelper();

            static jfloat decodeFloat(const JArray< jbyte > &);
            static jfloat decodeFloat(const JArray< jbyte > &, jint);
            static jint decodeInt(const JArray< jbyte > &, jint);
            static JArray< jbyte > encodeFloat(jfloat);
            static JArray< jbyte > encodeFloat(jfloat, const JArray< jbyte > &, jint);
            static JArray< jbyte > encodeInt(jint);
            static JArray< jbyte > encodeInt(jint, const JArray< jbyte > &, jint);
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
      namespace analysis {
        namespace payloads {
          extern PyType_Def PY_TYPE_DEF(PayloadHelper);
          extern PyTypeObject *PY_TYPE(PayloadHelper);

          class t_PayloadHelper {
          public:
            PyObject_HEAD
            PayloadHelper object;
            static PyObject *wrap_Object(const PayloadHelper&);
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
