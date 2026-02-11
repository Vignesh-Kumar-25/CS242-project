#ifndef org_apache_lucene_document_SortedNumericDocValuesField_H
#define org_apache_lucene_document_SortedNumericDocValuesField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace document {
        class FieldType;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class SortedNumericDocValuesField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_0b8e13bc82520de1,
            mid_newSlowExactQuery_14356f32286ce928,
            mid_newSlowRangeQuery_d6e8c62031c54888,
            mid_newSlowSetQuery_62960f7aca98eb23,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedNumericDocValuesField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedNumericDocValuesField(const SortedNumericDocValuesField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          SortedNumericDocValuesField(const ::java::lang::String &, jlong);

          static ::org::apache::lucene::search::Query newSlowExactQuery(const ::java::lang::String &, jlong);
          static ::org::apache::lucene::search::Query newSlowRangeQuery(const ::java::lang::String &, jlong, jlong);
          static ::org::apache::lucene::search::Query newSlowSetQuery(const ::java::lang::String &, const JArray< jlong > &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(SortedNumericDocValuesField);
        extern PyTypeObject *PY_TYPE(SortedNumericDocValuesField);

        class t_SortedNumericDocValuesField {
        public:
          PyObject_HEAD
          SortedNumericDocValuesField object;
          static PyObject *wrap_Object(const SortedNumericDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
