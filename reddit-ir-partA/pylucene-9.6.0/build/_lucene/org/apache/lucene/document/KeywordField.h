#ifndef org_apache_lucene_document_KeywordField_H
#define org_apache_lucene_document_KeywordField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class Query;
        class SortedSetSelector$Type;
        class SortField;
      }
      namespace document {
        class InvertableType;
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

        class KeywordField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_721bc06dddd42a97,
            mid_init$_fcbaea1a31c68173,
            mid_binaryValue_e6961a1ebae5a29a,
            mid_invertableType_26d6be76ba09fc8f,
            mid_newExactQuery_8b970d057e017e30,
            mid_newExactQuery_e52b4bd6b97f0dd9,
            mid_newSetQuery_cb49542dbe7158d3,
            mid_newSortField_f4476056d10ef473,
            mid_setBytesValue_46caeaebccf31ffe,
            mid_setStringValue_4a883f7810d2effa,
            mid_storedValue_8e72729249121ec4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KeywordField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KeywordField(const KeywordField& obj) : ::org::apache::lucene::document::Field(obj) {}

          KeywordField(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::document::Field$Store &);
          KeywordField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::document::Field$Store &);

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          ::org::apache::lucene::document::InvertableType invertableType() const;
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, const ::java::lang::String &);
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::util::BytesRef > &);
          static ::org::apache::lucene::search::SortField newSortField(const ::java::lang::String &, jboolean, const ::org::apache::lucene::search::SortedSetSelector$Type &);
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setStringValue(const ::java::lang::String &) const;
          ::org::apache::lucene::document::StoredValue storedValue() const;
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
        extern PyType_Def PY_TYPE_DEF(KeywordField);
        extern PyTypeObject *PY_TYPE(KeywordField);

        class t_KeywordField {
        public:
          PyObject_HEAD
          KeywordField object;
          static PyObject *wrap_Object(const KeywordField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
