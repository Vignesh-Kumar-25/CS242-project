#ifndef org_apache_lucene_queries_function_valuesource_ConstNumberSource_H
#define org_apache_lucene_queries_function_valuesource_ConstNumberSource_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace java {
  namespace lang {
    class Number;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class ConstNumberSource : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_3353d9f14bbfd91a,
                mid_getBool_ee8b0a5fa521ddac,
                mid_getDouble_409d010a7a53d0d1,
                mid_getFloat_15cd8574741b1394,
                mid_getInt_15aa3d485e96b665,
                mid_getLong_058f5911dcf5d8a4,
                mid_getNumber_72def02dd614d827,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ConstNumberSource(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ConstNumberSource(const ConstNumberSource& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              ConstNumberSource();

              jboolean getBool() const;
              jdouble getDouble() const;
              jfloat getFloat() const;
              jint getInt() const;
              jlong getLong() const;
              ::java::lang::Number getNumber() const;
            };
          }
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
        namespace function {
          namespace valuesource {
            extern PyType_Def PY_TYPE_DEF(ConstNumberSource);
            extern PyTypeObject *PY_TYPE(ConstNumberSource);

            class t_ConstNumberSource {
            public:
              PyObject_HEAD
              ConstNumberSource object;
              static PyObject *wrap_Object(const ConstNumberSource&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
