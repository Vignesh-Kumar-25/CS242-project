#ifndef org_apache_lucene_analysis_no_NorwegianLightStemmer_H
#define org_apache_lucene_analysis_no_NorwegianLightStemmer_H

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
        namespace no {

          class NorwegianLightStemmer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_da425451c8de636b,
              mid_stem_2b0b4b7e30587253,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NorwegianLightStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NorwegianLightStemmer(const NorwegianLightStemmer& obj) : ::java::lang::Object(obj) {}

            static jint BOKMAAL;
            static jint NYNORSK;

            NorwegianLightStemmer(jint);

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
        namespace no {
          extern PyType_Def PY_TYPE_DEF(NorwegianLightStemmer);
          extern PyTypeObject *PY_TYPE(NorwegianLightStemmer);

          class t_NorwegianLightStemmer {
          public:
            PyObject_HEAD
            NorwegianLightStemmer object;
            static PyObject *wrap_Object(const NorwegianLightStemmer&);
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
