#ifndef org_apache_lucene_document_LongField_H
#define org_apache_lucene_document_LongField_H

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

        class LongField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_0b8e13bc82520de1,
            mid_init$_135f8787cbc87f0b,
            mid_binaryValue_e6961a1ebae5a29a,
            mid_newDistanceFeatureQuery_717e0c4047886402,
            mid_newExactQuery_14356f32286ce928,
            mid_newRangeQuery_d6e8c62031c54888,
            mid_newSetQuery_62960f7aca98eb23,
            mid_newSortField_c4a94dacc9bb5e76,
            mid_setLongValue_db2028ac45cd5b77,
            mid_storedValue_8e72729249121ec4,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongField(const LongField& obj) : ::org::apache::lucene::document::Field(obj) {}

          LongField(const ::java::lang::String &, jlong);
          LongField(const ::java::lang::String &, jlong, const ::org::apache::lucene::document::Field$Store &);

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          static ::org::apache::lucene::search::Query newDistanceFeatureQuery(const ::java::lang::String &, jfloat, jlong, jlong);
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jlong);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jlong, jlong);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jlong > &);
          static ::org::apache::lucene::search::SortField newSortField(const ::java::lang::String &, jboolean, const ::org::apache::lucene::search::SortedNumericSelector$Type &);
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
        extern PyType_Def PY_TYPE_DEF(LongField);
        extern PyTypeObject *PY_TYPE(LongField);

        class t_LongField {
        public:
          PyObject_HEAD
          LongField object;
          static PyObject *wrap_Object(const LongField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
