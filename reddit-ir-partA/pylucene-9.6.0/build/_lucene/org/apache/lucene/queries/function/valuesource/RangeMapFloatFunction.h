#ifndef org_apache_lucene_queries_function_valuesource_RangeMapFloatFunction_H
#define org_apache_lucene_queries_function_valuesource_RangeMapFloatFunction_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
      }
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
namespace java {
  namespace lang {
    class Float;
    class Class;
    class Object;
    class String;
  }
  namespace util {
    class Map;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class RangeMapFloatFunction : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_a86ec4c43a1e7734,
                mid_init$_2d1c3b5255a470bf,
                mid_createWeight_9c4beb7a8f98aa85,
                mid_description_dc633f13a47328a8,
                mid_equals_6084f78e09b6c0c3,
                mid_getValues_42c08c13b35119ed,
                mid_hashCode_15aa3d485e96b665,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RangeMapFloatFunction(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              RangeMapFloatFunction(const RangeMapFloatFunction& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              RangeMapFloatFunction(const ::org::apache::lucene::queries::function::ValueSource &, jfloat, jfloat, jfloat, const ::java::lang::Float &);
              RangeMapFloatFunction(const ::org::apache::lucene::queries::function::ValueSource &, jfloat, jfloat, const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::queries::function::ValueSource &);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
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
            extern PyType_Def PY_TYPE_DEF(RangeMapFloatFunction);
            extern PyTypeObject *PY_TYPE(RangeMapFloatFunction);

            class t_RangeMapFloatFunction {
            public:
              PyObject_HEAD
              RangeMapFloatFunction object;
              static PyObject *wrap_Object(const RangeMapFloatFunction&);
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
