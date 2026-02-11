#ifndef org_apache_lucene_document_FloatField_H
#define org_apache_lucene_document_FloatField_H

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

        class FloatField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_eaf556967a2a1531,
            mid_init$_212bb27d1014fe6b,
            mid_binaryValue_e6961a1ebae5a29a,
            mid_newExactQuery_6cd86f896f53df26,
            mid_newRangeQuery_ed1a38e9a35ea9dc,
            mid_newSetQuery_99bc7b264db6a12f,
            mid_newSortField_c4a94dacc9bb5e76,
            mid_setFloatValue_354c036766ff84b4,
            mid_setLongValue_db2028ac45cd5b77,
            mid_storedValue_8e72729249121ec4,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FloatField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FloatField(const FloatField& obj) : ::org::apache::lucene::document::Field(obj) {}

          FloatField(const ::java::lang::String &, jfloat);
          FloatField(const ::java::lang::String &, jfloat, const ::org::apache::lucene::document::Field$Store &);

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jfloat);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jfloat > &);
          static ::org::apache::lucene::search::SortField newSortField(const ::java::lang::String &, jboolean, const ::org::apache::lucene::search::SortedNumericSelector$Type &);
          void setFloatValue(jfloat) const;
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
        extern PyType_Def PY_TYPE_DEF(FloatField);
        extern PyTypeObject *PY_TYPE(FloatField);

        class t_FloatField {
        public:
          PyObject_HEAD
          FloatField object;
          static PyObject *wrap_Object(const FloatField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
