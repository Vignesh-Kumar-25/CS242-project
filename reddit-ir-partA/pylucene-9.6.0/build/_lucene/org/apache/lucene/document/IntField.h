#ifndef org_apache_lucene_document_IntField_H
#define org_apache_lucene_document_IntField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class Query;
        class SortedNumericSelector$Type;
        class SortField;
      }
      namespace document {
        class StoredValue;
        class Field$Store;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class IntField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_751a1c1a1ca09c1d,
            mid_init$_6bd011378359b597,
            mid_binaryValue_e6961a1ebae5a29a,
            mid_newExactQuery_5964353fb115a3ed,
            mid_newRangeQuery_cf34815af7810b0d,
            mid_newSetQuery_fca7855ab89118b5,
            mid_newSortField_c4a94dacc9bb5e76,
            mid_setIntValue_da425451c8de636b,
            mid_storedValue_8e72729249121ec4,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntField(const IntField& obj) : ::org::apache::lucene::document::Field(obj) {}

          IntField(const ::java::lang::String &, jint);
          IntField(const ::java::lang::String &, jint, const ::org::apache::lucene::document::Field$Store &);

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jint);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jint, jint);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jint > &);
          static ::org::apache::lucene::search::SortField newSortField(const ::java::lang::String &, jboolean, const ::org::apache::lucene::search::SortedNumericSelector$Type &);
          void setIntValue(jint) const;
          ::org::apache::lucene::document::StoredValue storedValue() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(IntField);
        extern PyTypeObject *PY_TYPE(IntField);

        class t_IntField {
        public:
          PyObject_HEAD
          IntField object;
          static PyObject *wrap_Object(const IntField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
