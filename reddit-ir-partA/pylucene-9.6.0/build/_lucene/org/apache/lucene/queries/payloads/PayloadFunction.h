#ifndef org_apache_lucene_queries_payloads_PayloadFunction_H
#define org_apache_lucene_queries_payloads_PayloadFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {

          class PayloadFunction : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_currentScore_4f442075cde3886d,
              mid_docScore_09687e376cfda8bb,
              mid_equals_6084f78e09b6c0c3,
              mid_explain_76a82117b985da4b,
              mid_hashCode_15aa3d485e96b665,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadFunction(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PayloadFunction(const PayloadFunction& obj) : ::java::lang::Object(obj) {}

            PayloadFunction();

            jfloat currentScore(jint, const ::java::lang::String &, jint, jint, jint, jfloat, jfloat) const;
            jfloat docScore(jint, const ::java::lang::String &, jint, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::Explanation explain(jint, const ::java::lang::String &, jint, jfloat) const;
            jint hashCode() const;
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
      namespace queries {
        namespace payloads {
          extern PyType_Def PY_TYPE_DEF(PayloadFunction);
          extern PyTypeObject *PY_TYPE(PayloadFunction);

          class t_PayloadFunction {
          public:
            PyObject_HEAD
            PayloadFunction object;
            static PyObject *wrap_Object(const PayloadFunction&);
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
