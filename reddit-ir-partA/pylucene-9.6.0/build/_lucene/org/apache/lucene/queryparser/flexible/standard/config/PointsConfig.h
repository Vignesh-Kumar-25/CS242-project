#ifndef org_apache_lucene_queryparser_flexible_standard_config_PointsConfig_H
#define org_apache_lucene_queryparser_flexible_standard_config_PointsConfig_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Number;
    class Class;
  }
  namespace text {
    class NumberFormat;
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

              class PointsConfig : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_5fac22dda3708ea6,
                  mid_equals_6084f78e09b6c0c3,
                  mid_getNumberFormat_3f16f67992196800,
                  mid_getType_18822df052d4f846,
                  mid_hashCode_15aa3d485e96b665,
                  mid_setNumberFormat_35b56184f5da0c68,
                  mid_setType_9759e0f29e70b30d,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PointsConfig(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PointsConfig(const PointsConfig& obj) : ::java::lang::Object(obj) {}

                PointsConfig(const ::java::text::NumberFormat &, const ::java::lang::Class &);

                jboolean equals(const ::java::lang::Object &) const;
                ::java::text::NumberFormat getNumberFormat() const;
                ::java::lang::Class getType() const;
                jint hashCode() const;
                void setNumberFormat(const ::java::text::NumberFormat &) const;
                void setType(const ::java::lang::Class &) const;
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
              extern PyType_Def PY_TYPE_DEF(PointsConfig);
              extern PyTypeObject *PY_TYPE(PointsConfig);

              class t_PointsConfig {
              public:
                PyObject_HEAD
                PointsConfig object;
                static PyObject *wrap_Object(const PointsConfig&);
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
