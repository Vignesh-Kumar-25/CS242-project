#ifndef org_apache_lucene_queries_function_ValueSource_H
#define org_apache_lucene_queries_function_ValueSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class LongValuesSource;
        class DoubleValuesSource;
        class SortField;
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
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {

          class ValueSource : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_asDoubleValuesSource_a1ec38fd305e2f49,
              mid_asLongValuesSource_f9e6e0f77d373cc1,
              mid_createWeight_9c4beb7a8f98aa85,
              mid_description_dc633f13a47328a8,
              mid_equals_6084f78e09b6c0c3,
              mid_fromDoubleValuesSource_da1645ff5837a97d,
              mid_getSortField_d261ca5cf3b961c7,
              mid_getValues_42c08c13b35119ed,
              mid_hashCode_15aa3d485e96b665,
              mid_newContext_f1008fff37842caf,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ValueSource(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ValueSource(const ValueSource& obj) : ::java::lang::Object(obj) {}

            ValueSource();

            ::org::apache::lucene::search::DoubleValuesSource asDoubleValuesSource() const;
            ::org::apache::lucene::search::LongValuesSource asLongValuesSource() const;
            void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
            ::java::lang::String description() const;
            jboolean equals(const ::java::lang::Object &) const;
            static ValueSource fromDoubleValuesSource(const ::org::apache::lucene::search::DoubleValuesSource &);
            ::org::apache::lucene::search::SortField getSortField(jboolean) const;
            ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
            jint hashCode() const;
            static ::java::util::Map newContext(const ::org::apache::lucene::search::IndexSearcher &);
            ::java::lang::String toString() const;
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
      namespace queries {
        namespace function {
          extern PyType_Def PY_TYPE_DEF(ValueSource);
          extern PyTypeObject *PY_TYPE(ValueSource);

          class t_ValueSource {
          public:
            PyObject_HEAD
            ValueSource object;
            static PyObject *wrap_Object(const ValueSource&);
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
