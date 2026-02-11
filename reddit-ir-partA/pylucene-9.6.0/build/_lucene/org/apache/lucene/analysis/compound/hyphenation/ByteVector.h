#ifndef org_apache_lucene_analysis_compound_hyphenation_ByteVector_H
#define org_apache_lucene_analysis_compound_hyphenation_ByteVector_H

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
        namespace compound {
          namespace hyphenation {

            class ByteVector : public ::java::lang::Object {
             public:
              enum {
                mid_init$_3353d9f14bbfd91a,
                mid_init$_e11791089a78895a,
                mid_init$_da425451c8de636b,
                mid_init$_316a601689372d68,
                mid_alloc_58b165b57740feff,
                mid_capacity_15aa3d485e96b665,
                mid_get_c69adb548510f994,
                mid_getArray_f4d7c022fb7af16d,
                mid_length_15aa3d485e96b665,
                mid_put_c17f767c0949882c,
                mid_trimToSize_3353d9f14bbfd91a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ByteVector(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ByteVector(const ByteVector& obj) : ::java::lang::Object(obj) {}

              ByteVector();
              ByteVector(const JArray< jbyte > &);
              ByteVector(jint);
              ByteVector(const JArray< jbyte > &, jint);

              jint alloc(jint) const;
              jint capacity() const;
              jbyte get(jint) const;
              JArray< jbyte > getArray() const;
              jint length() const;
              void put(jint, jbyte) const;
              void trimToSize() const;
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
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            extern PyType_Def PY_TYPE_DEF(ByteVector);
            extern PyTypeObject *PY_TYPE(ByteVector);

            class t_ByteVector {
            public:
              PyObject_HEAD
              ByteVector object;
              static PyObject *wrap_Object(const ByteVector&);
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
