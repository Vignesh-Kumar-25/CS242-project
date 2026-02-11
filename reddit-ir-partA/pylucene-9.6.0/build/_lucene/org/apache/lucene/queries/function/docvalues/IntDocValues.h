#ifndef org_apache_lucene_queries_function_docvalues_IntDocValues_H
#define org_apache_lucene_queries_function_docvalues_IntDocValues_H

#include "org/apache/lucene/queries/function/FunctionValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class ValueSource;
          class ValueSourceScorer;
          class FunctionValues$ValueFiller;
        }
      }
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class Weight;
      }
    }
  }
}
namespace java {
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
          namespace docvalues {

            class IntDocValues : public ::org::apache::lucene::queries::function::FunctionValues {
             public:
              enum {
                mid_init$_0c74dd0add1f0fb9,
                mid_byteVal_c69adb548510f994,
                mid_doubleVal_1b05331da910c88e,
                mid_floatVal_cc3c9b7e666e88d5,
                mid_getRangeScorer_185309f7ce175126,
                mid_getValueFiller_a6c70c7f25459999,
                mid_intVal_58b165b57740feff,
                mid_longVal_70b2a956d0e32bc7,
                mid_objectVal_5eabe496ef99f2e4,
                mid_shortVal_cc7687477f5c82b5,
                mid_strVal_78a7b318cefaee15,
                mid_toString_78a7b318cefaee15,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit IntDocValues(jobject obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              IntDocValues(const IntDocValues& obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {}

              IntDocValues(const ::org::apache::lucene::queries::function::ValueSource &);

              jbyte byteVal(jint) const;
              jdouble doubleVal(jint) const;
              jfloat floatVal(jint) const;
              ::org::apache::lucene::queries::function::ValueSourceScorer getRangeScorer(const ::org::apache::lucene::search::Weight &, const ::org::apache::lucene::index::LeafReaderContext &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean) const;
              ::org::apache::lucene::queries::function::FunctionValues$ValueFiller getValueFiller() const;
              jint intVal(jint) const;
              jlong longVal(jint) const;
              ::java::lang::Object objectVal(jint) const;
              jshort shortVal(jint) const;
              ::java::lang::String strVal(jint) const;
              ::java::lang::String toString(jint) const;
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
          namespace docvalues {
            extern PyType_Def PY_TYPE_DEF(IntDocValues);
            extern PyTypeObject *PY_TYPE(IntDocValues);

            class t_IntDocValues {
            public:
              PyObject_HEAD
              IntDocValues object;
              static PyObject *wrap_Object(const IntDocValues&);
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
