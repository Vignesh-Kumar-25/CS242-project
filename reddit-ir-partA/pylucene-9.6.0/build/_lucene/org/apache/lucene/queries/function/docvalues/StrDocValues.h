#ifndef org_apache_lucene_queries_function_docvalues_StrDocValues_H
#define org_apache_lucene_queries_function_docvalues_StrDocValues_H

#include "org/apache/lucene/queries/function/FunctionValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class ValueSource;
          class FunctionValues$ValueFiller;
        }
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

            class StrDocValues : public ::org::apache::lucene::queries::function::FunctionValues {
             public:
              enum {
                mid_init$_0c74dd0add1f0fb9,
                mid_boolVal_92eccba87b045bbc,
                mid_getValueFiller_a6c70c7f25459999,
                mid_objectVal_5eabe496ef99f2e4,
                mid_strVal_78a7b318cefaee15,
                mid_toString_78a7b318cefaee15,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit StrDocValues(jobject obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              StrDocValues(const StrDocValues& obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {}

              StrDocValues(const ::org::apache::lucene::queries::function::ValueSource &);

              jboolean boolVal(jint) const;
              ::org::apache::lucene::queries::function::FunctionValues$ValueFiller getValueFiller() const;
              ::java::lang::Object objectVal(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(StrDocValues);
            extern PyTypeObject *PY_TYPE(StrDocValues);

            class t_StrDocValues {
            public:
              PyObject_HEAD
              StrDocValues object;
              static PyObject *wrap_Object(const StrDocValues&);
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
