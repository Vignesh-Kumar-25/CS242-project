#ifndef org_apache_lucene_queryparser_flexible_standard_config_FuzzyConfig_H
#define org_apache_lucene_queryparser_flexible_standard_config_FuzzyConfig_H

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
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace config {

              class FuzzyConfig : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_3353d9f14bbfd91a,
                  mid_getMinSimilarity_15cd8574741b1394,
                  mid_getPrefixLength_15aa3d485e96b665,
                  mid_setMinSimilarity_354c036766ff84b4,
                  mid_setPrefixLength_da425451c8de636b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FuzzyConfig(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                FuzzyConfig(const FuzzyConfig& obj) : ::java::lang::Object(obj) {}

                FuzzyConfig();

                jfloat getMinSimilarity() const;
                jint getPrefixLength() const;
                void setMinSimilarity(jfloat) const;
                void setPrefixLength(jint) const;
              };
            }
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
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace config {
              extern PyType_Def PY_TYPE_DEF(FuzzyConfig);
              extern PyTypeObject *PY_TYPE(FuzzyConfig);

              class t_FuzzyConfig {
              public:
                PyObject_HEAD
                FuzzyConfig object;
                static PyObject *wrap_Object(const FuzzyConfig&);
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
}

#endif
