#ifndef org_apache_lucene_document_DoubleField_H
#define org_apache_lucene_document_DoubleField_H

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

        class DoubleField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_8494653dfbc27b70,
            mid_init$_e969348a34df2fdd,
            mid_binaryValue_e6961a1ebae5a29a,
            mid_newExactQuery_5c2cae85a49caada,
            mid_newRangeQuery_b4f5479f03c55290,
            mid_newSetQuery_89da092abcf41451,
            mid_newSortField_c4a94dacc9bb5e76,
            mid_setDoubleValue_c1f7206c104d501e,
            mid_setLongValue_db2028ac45cd5b77,
            mid_storedValue_8e72729249121ec4,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoubleField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DoubleField(const DoubleField& obj) : ::org::apache::lucene::document::Field(obj) {}

          DoubleField(const ::java::lang::String &, jdouble);
          DoubleField(const ::java::lang::String &, jdouble, const ::org::apache::lucene::document::Field$Store &);

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jdouble);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jdouble > &);
          static ::org::apache::lucene::search::SortField newSortField(const ::java::lang::String &, jboolean, const ::org::apache::lucene::search::SortedNumericSelector$Type &);
          void setDoubleValue(jdouble) const;
          void setLongValue(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(DoubleField);
        extern PyTypeObject *PY_TYPE(DoubleField);

        class t_DoubleField {
        public:
          PyObject_HEAD
          DoubleField object;
          static PyObject *wrap_Object(const DoubleField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
