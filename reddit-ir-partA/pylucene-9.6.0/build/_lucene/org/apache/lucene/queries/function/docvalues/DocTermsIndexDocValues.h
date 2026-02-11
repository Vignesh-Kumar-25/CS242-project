#ifndef org_apache_lucene_queries_function_docvalues_DocTermsIndexDocValues_H
#define org_apache_lucene_queries_function_docvalues_DocTermsIndexDocValues_H

#include "org/apache/lucene/queries/function/FunctionValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefBuilder;
      }
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

            class DocTermsIndexDocValues : public ::org::apache::lucene::queries::function::FunctionValues {
             public:
              enum {
                mid_init$_373c3c5d7f658434,
                mid_boolVal_92eccba87b045bbc,
                mid_bytesVal_91c44ca6912783a8,
                mid_exists_92eccba87b045bbc,
                mid_getRangeScorer_185309f7ce175126,
                mid_getValueFiller_a6c70c7f25459999,
                mid_numOrd_15aa3d485e96b665,
                mid_objectVal_5eabe496ef99f2e4,
                mid_ordVal_58b165b57740feff,
                mid_strVal_78a7b318cefaee15,
                mid_toString_78a7b318cefaee15,
                mid_toTerm_04612c8360f09496,
                mid_getOrdForDoc_58b165b57740feff,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DocTermsIndexDocValues(jobject obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DocTermsIndexDocValues(const DocTermsIndexDocValues& obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {}

              DocTermsIndexDocValues(const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::index::LeafReaderContext &, const ::java::lang::String &);

              jboolean boolVal(jint) const;
              jboolean bytesVal(jint, const ::org::apache::lucene::util::BytesRefBuilder &) const;
              jboolean exists(jint) const;
              ::org::apache::lucene::queries::function::ValueSourceScorer getRangeScorer(const ::org::apache::lucene::search::Weight &, const ::org::apache::lucene::index::LeafReaderContext &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean) const;
              ::org::apache::lucene::queries::function::FunctionValues$ValueFiller getValueFiller() const;
              jint numOrd() const;
              ::java::lang::Object objectVal(jint) const;
              jint ordVal(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(DocTermsIndexDocValues);
            extern PyTypeObject *PY_TYPE(DocTermsIndexDocValues);

            class t_DocTermsIndexDocValues {
            public:
              PyObject_HEAD
              DocTermsIndexDocValues object;
              static PyObject *wrap_Object(const DocTermsIndexDocValues&);
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
