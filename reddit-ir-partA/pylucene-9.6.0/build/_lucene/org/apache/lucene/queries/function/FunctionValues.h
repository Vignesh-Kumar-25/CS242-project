#ifndef org_apache_lucene_queries_function_FunctionValues_H
#define org_apache_lucene_queries_function_FunctionValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefBuilder;
      }
      namespace search {
        class Explanation;
        class Weight;
      }
      namespace queries {
        namespace function {
          class ValueSourceScorer;
          class FunctionValues$ValueFiller;
        }
      }
      namespace index {
        class LeafReaderContext;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {

          class FunctionValues : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_boolVal_92eccba87b045bbc,
              mid_byteVal_c69adb548510f994,
              mid_byteVal_3a1419ee5dee65ff,
              mid_bytesVal_91c44ca6912783a8,
              mid_cost_15cd8574741b1394,
              mid_doubleVal_1b05331da910c88e,
              mid_doubleVal_882a40aae75cdf64,
              mid_exists_92eccba87b045bbc,
              mid_explain_1ddc86aff4ad7c32,
              mid_floatVal_cc3c9b7e666e88d5,
              mid_floatVal_2434e6c3e2bb4e91,
              mid_getRangeScorer_185309f7ce175126,
              mid_getScorer_3000545842333b11,
              mid_getValueFiller_a6c70c7f25459999,
              mid_intVal_58b165b57740feff,
              mid_intVal_980940c4aa028630,
              mid_longVal_70b2a956d0e32bc7,
              mid_longVal_732a6f9ceca85b20,
              mid_numOrd_15aa3d485e96b665,
              mid_objectVal_5eabe496ef99f2e4,
              mid_ordVal_58b165b57740feff,
              mid_shortVal_cc7687477f5c82b5,
              mid_shortVal_24c9a95bfd439723,
              mid_strVal_78a7b318cefaee15,
              mid_strVal_761ba1f7d236c581,
              mid_toString_78a7b318cefaee15,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FunctionValues(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FunctionValues(const FunctionValues& obj) : ::java::lang::Object(obj) {}

            FunctionValues();

            jboolean boolVal(jint) const;
            jbyte byteVal(jint) const;
            void byteVal(jint, const JArray< jbyte > &) const;
            jboolean bytesVal(jint, const ::org::apache::lucene::util::BytesRefBuilder &) const;
            jfloat cost() const;
            jdouble doubleVal(jint) const;
            void doubleVal(jint, const JArray< jdouble > &) const;
            jboolean exists(jint) const;
            ::org::apache::lucene::search::Explanation explain(jint) const;
            jfloat floatVal(jint) const;
            void floatVal(jint, const JArray< jfloat > &) const;
            ::org::apache::lucene::queries::function::ValueSourceScorer getRangeScorer(const ::org::apache::lucene::search::Weight &, const ::org::apache::lucene::index::LeafReaderContext &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean) const;
            ::org::apache::lucene::queries::function::ValueSourceScorer getScorer(const ::org::apache::lucene::search::Weight &, const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::queries::function::FunctionValues$ValueFiller getValueFiller() const;
            jint intVal(jint) const;
            void intVal(jint, const JArray< jint > &) const;
            jlong longVal(jint) const;
            void longVal(jint, const JArray< jlong > &) const;
            jint numOrd() const;
            ::java::lang::Object objectVal(jint) const;
            jint ordVal(jint) const;
            jshort shortVal(jint) const;
            void shortVal(jint, const JArray< jshort > &) const;
            ::java::lang::String strVal(jint) const;
            void strVal(jint, const JArray< ::java::lang::String > &) const;
            ::java::lang::String toString(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(FunctionValues);
          extern PyTypeObject *PY_TYPE(FunctionValues);

          class t_FunctionValues {
          public:
            PyObject_HEAD
            FunctionValues object;
            static PyObject *wrap_Object(const FunctionValues&);
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
