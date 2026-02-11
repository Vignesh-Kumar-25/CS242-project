#ifndef org_apache_lucene_analysis_in_IndicNormalizer_H
#define org_apache_lucene_analysis_in_IndicNormalizer_H

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
        namespace in {

          class IndicNormalizer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_normalize_2b0b4b7e30587253,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndicNormalizer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndicNormalizer(const IndicNormalizer& obj) : ::java::lang::Object(obj) {}

            IndicNormalizer();

            jint normalize(const JArray< jchar > &, jint) const;
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
        namespace in {
          extern PyType_Def PY_TYPE_DEF(IndicNormalizer);
          extern PyTypeObject *PY_TYPE(IndicNormalizer);

          class t_IndicNormalizer {
          public:
            PyObject_HEAD
            IndicNormalizer object;
            static PyObject *wrap_Object(const IndicNormalizer&);
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
