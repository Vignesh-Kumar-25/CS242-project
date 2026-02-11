#ifndef org_apache_lucene_queries_function_valuesource_LongFieldSource_H
#define org_apache_lucene_queries_function_valuesource_LongFieldSource_H

#include "org/apache/lucene/queries/function/valuesource/FieldCacheSource.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
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
      namespace search {
        class SortField;
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

            class LongFieldSource : public ::org::apache::lucene::queries::function::valuesource::FieldCacheSource {
             public:
              enum {
                mid_init$_4a883f7810d2effa,
                mid_description_dc633f13a47328a8,
                mid_equals_6084f78e09b6c0c3,
                mid_externalToLong_f9e0f284a35cbac5,
                mid_getSortField_d261ca5cf3b961c7,
                mid_getValues_42c08c13b35119ed,
                mid_hashCode_15aa3d485e96b665,
                mid_longToObject_69762c2e03ea2be1,
                mid_longToString_23522a84630bd8fe,
                mid_getNumericDocValues_bdaf0b1020f4be47,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LongFieldSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LongFieldSource(const LongFieldSource& obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {}

              LongFieldSource(const ::java::lang::String &);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              jlong externalToLong(const ::java::lang::String &) const;
              ::org::apache::lucene::search::SortField getSortField(jboolean) const;
              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
              jint hashCode() const;
              ::java::lang::Object longToObject(jlong) const;
              ::java::lang::String longToString(jlong) const;
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
            extern PyType_Def PY_TYPE_DEF(LongFieldSource);
            extern PyTypeObject *PY_TYPE(LongFieldSource);

            class t_LongFieldSource {
            public:
              PyObject_HEAD
              LongFieldSource object;
              static PyObject *wrap_Object(const LongFieldSource&);
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
