#ifndef org_apache_lucene_analysis_compound_hyphenation_CharVector_H
#define org_apache_lucene_analysis_compound_hyphenation_CharVector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class CharVector;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Cloneable;
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

            class CharVector : public ::java::lang::Object {
             public:
              enum {
                mid_init$_3353d9f14bbfd91a,
                mid_init$_7d636082e71ec259,
                mid_init$_da425451c8de636b,
                mid_init$_8077910d0b141c99,
                mid_alloc_58b165b57740feff,
                mid_capacity_15aa3d485e96b665,
                mid_clear_3353d9f14bbfd91a,
                mid_clone_828d949816b677ec,
                mid_get_c36d5d142dcfe0b2,
                mid_getArray_44e5186a889ad767,
                mid_length_15aa3d485e96b665,
                mid_put_5219ca4e678668cb,
                mid_trimToSize_3353d9f14bbfd91a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CharVector(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CharVector(const CharVector& obj) : ::java::lang::Object(obj) {}

              CharVector();
              CharVector(const JArray< jchar > &);
              CharVector(jint);
              CharVector(const JArray< jchar > &, jint);

              jint alloc(jint) const;
              jint capacity() const;
              void clear() const;
              CharVector clone() const;
              jchar get(jint) const;
              JArray< jchar > getArray() const;
              jint length() const;
              void put(jint, jchar) const;
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
            extern PyType_Def PY_TYPE_DEF(CharVector);
            extern PyTypeObject *PY_TYPE(CharVector);

            class t_CharVector {
            public:
              PyObject_HEAD
              CharVector object;
              static PyObject *wrap_Object(const CharVector&);
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
