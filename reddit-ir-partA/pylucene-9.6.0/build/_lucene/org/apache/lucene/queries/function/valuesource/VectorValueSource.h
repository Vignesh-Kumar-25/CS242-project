#ifndef org_apache_lucene_queries_function_valuesource_VectorValueSource_H
#define org_apache_lucene_queries_function_valuesource_VectorValueSource_H

#include "org/apache/lucene/queries/function/valuesource/MultiValueSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
      }
      namespace queries {
        namespace function {
          class ValueSource;
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

            class VectorValueSource : public ::org::apache::lucene::queries::function::valuesource::MultiValueSource {
             public:
              enum {
                mid_init$_1a2e28000748bc88,
                mid_createWeight_9c4beb7a8f98aa85,
                mid_description_dc633f13a47328a8,
                mid_dimension_15aa3d485e96b665,
                mid_equals_6084f78e09b6c0c3,
                mid_getSources_0bc66e960964b70a,
                mid_getValues_42c08c13b35119ed,
                mid_hashCode_15aa3d485e96b665,
                mid_name_dc633f13a47328a8,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit VectorValueSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::MultiValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              VectorValueSource(const VectorValueSource& obj) : ::org::apache::lucene::queries::function::valuesource::MultiValueSource(obj) {}

              VectorValueSource(const ::java::util::List &);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              jint dimension() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::java::util::List getSources() const;
              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
              jint hashCode() const;
              ::java::lang::String name() const;
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
            extern PyType_Def PY_TYPE_DEF(VectorValueSource);
            extern PyTypeObject *PY_TYPE(VectorValueSource);

            class t_VectorValueSource {
            public:
              PyObject_HEAD
              VectorValueSource object;
              static PyObject *wrap_Object(const VectorValueSource&);
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
