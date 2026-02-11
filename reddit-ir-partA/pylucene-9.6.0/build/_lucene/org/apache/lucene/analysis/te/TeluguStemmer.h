#ifndef org_apache_lucene_analysis_te_TeluguStemmer_H
#define org_apache_lucene_analysis_te_TeluguStemmer_H

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
        namespace te {

          class TeluguStemmer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_stem_2b0b4b7e30587253,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TeluguStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TeluguStemmer(const TeluguStemmer& obj) : ::java::lang::Object(obj) {}

            TeluguStemmer();

            jint stem(const JArray< jchar > &, jint) const;
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
        namespace te {
          extern PyType_Def PY_TYPE_DEF(TeluguStemmer);
          extern PyTypeObject *PY_TYPE(TeluguStemmer);

          class t_TeluguStemmer {
          public:
            PyObject_HEAD
            TeluguStemmer object;
            static PyObject *wrap_Object(const TeluguStemmer&);
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
