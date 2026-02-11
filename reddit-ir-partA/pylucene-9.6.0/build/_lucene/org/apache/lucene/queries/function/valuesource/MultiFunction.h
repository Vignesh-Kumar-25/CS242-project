#ifndef org_apache_lucene_queries_function_valuesource_MultiFunction_H
#define org_apache_lucene_queries_function_valuesource_MultiFunction_H

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
  namespace util {
    class Map;
    class List;
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class MultiFunction : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_1a2e28000748bc88,
                mid_allExists_3e3bec9d7cd4d541,
                mid_allExists_60b9d3832fb0f97a,
                mid_anyExists_3e3bec9d7cd4d541,
                mid_anyExists_60b9d3832fb0f97a,
                mid_createWeight_9c4beb7a8f98aa85,
                mid_description_dc633f13a47328a8,
                mid_description_5c6e56e91f304981,
                mid_equals_6084f78e09b6c0c3,
                mid_hashCode_15aa3d485e96b665,
                mid_toString_7dab5f75df04d225,
                mid_valsArr_e04dbc5f8241b2e5,
                mid_name_dc633f13a47328a8,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MultiFunction(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MultiFunction(const MultiFunction& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              MultiFunction(const ::java::util::List &);

              static jboolean allExists(jint, const JArray< ::org::apache::lucene::queries::function::FunctionValues > &);
              static jboolean allExists(jint, const ::org::apache::lucene::queries::function::FunctionValues &, const ::org::apache::lucene::queries::function::FunctionValues &);
              static jboolean anyExists(jint, const JArray< ::org::apache::lucene::queries::function::FunctionValues > &);
              static jboolean anyExists(jint, const ::org::apache::lucene::queries::function::FunctionValues &, const ::org::apache::lucene::queries::function::FunctionValues &);
              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              static ::java::lang::String description(const ::java::lang::String &, const ::java::util::List &);
              jboolean equals(const ::java::lang::Object &) const;
              jint hashCode() const;
              static ::java::lang::String toString(const ::java::lang::String &, const JArray< ::org::apache::lucene::queries::function::FunctionValues > &, jint);
              static JArray< ::org::apache::lucene::queries::function::FunctionValues > valsArr(const ::java::util::List &, const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &);
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
            extern PyType_Def PY_TYPE_DEF(MultiFunction);
            extern PyTypeObject *PY_TYPE(MultiFunction);

            class t_MultiFunction {
            public:
              PyObject_HEAD
              MultiFunction object;
              static PyObject *wrap_Object(const MultiFunction&);
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
