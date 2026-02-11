#ifndef org_apache_lucene_queries_function_valuesource_ConstValueSource_H
#define org_apache_lucene_queries_function_valuesource_ConstValueSource_H

#include "org/apache/lucene/queries/function/valuesource/ConstNumberSource.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Number;
    class Class;
    class Object;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class FunctionValues;
        }
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class ConstValueSource : public ::org::apache::lucene::queries::function::valuesource::ConstNumberSource {
             public:
              enum {
                mid_init$_354c036766ff84b4,
                mid_description_dc633f13a47328a8,
                mid_equals_6084f78e09b6c0c3,
                mid_getBool_ee8b0a5fa521ddac,
                mid_getDouble_409d010a7a53d0d1,
                mid_getFloat_15cd8574741b1394,
                mid_getInt_15aa3d485e96b665,
                mid_getLong_058f5911dcf5d8a4,
                mid_getNumber_72def02dd614d827,
                mid_getValues_42c08c13b35119ed,
                mid_hashCode_15aa3d485e96b665,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ConstValueSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::ConstNumberSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ConstValueSource(const ConstValueSource& obj) : ::org::apache::lucene::queries::function::valuesource::ConstNumberSource(obj) {}

              ConstValueSource(jfloat);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              jboolean getBool() const;
              jdouble getDouble() const;
              jfloat getFloat() const;
              jint getInt() const;
              jlong getLong() const;
              ::java::lang::Number getNumber() const;
              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
              jint hashCode() const;
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
            extern PyType_Def PY_TYPE_DEF(ConstValueSource);
            extern PyTypeObject *PY_TYPE(ConstValueSource);

            class t_ConstValueSource {
            public:
              PyObject_HEAD
              ConstValueSource object;
              static PyObject *wrap_Object(const ConstValueSource&);
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
