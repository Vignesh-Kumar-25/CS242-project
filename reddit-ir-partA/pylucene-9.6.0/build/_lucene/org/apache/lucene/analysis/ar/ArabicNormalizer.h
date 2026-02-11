#ifndef org_apache_lucene_analysis_ar_ArabicNormalizer_H
#define org_apache_lucene_analysis_ar_ArabicNormalizer_H

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
        namespace ar {

          class ArabicNormalizer : public ::java::lang::Object {
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

            explicit ArabicNormalizer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ArabicNormalizer(const ArabicNormalizer& obj) : ::java::lang::Object(obj) {}

            static jchar ALEF;
            static jchar ALEF_HAMZA_ABOVE;
            static jchar ALEF_HAMZA_BELOW;
            static jchar ALEF_MADDA;
            static jchar DAMMA;
            static jchar DAMMATAN;
            static jchar DOTLESS_YEH;
            static jchar FATHA;
            static jchar FATHATAN;
            static jchar HEH;
            static jchar KASRA;
            static jchar KASRATAN;
            static jchar SHADDA;
            static jchar SUKUN;
            static jchar TATWEEL;
            static jchar TEH_MARBUTA;
            static jchar YEH;

            ArabicNormalizer();

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
        namespace ar {
          extern PyType_Def PY_TYPE_DEF(ArabicNormalizer);
          extern PyTypeObject *PY_TYPE(ArabicNormalizer);

          class t_ArabicNormalizer {
          public:
            PyObject_HEAD
            ArabicNormalizer object;
            static PyObject *wrap_Object(const ArabicNormalizer&);
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
