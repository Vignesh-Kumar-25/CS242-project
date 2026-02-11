#ifndef org_apache_lucene_document_StoredField_H
#define org_apache_lucene_document_StoredField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace document {
        class FieldType;
      }
    }
  }
}
namespace java {
  namespace lang {
    class CharSequence;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class StoredField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_174a976e57f9dbb5,
            mid_init$_1c92f57e5f37bb8d,
            mid_init$_a1759014af2a70fe,
            mid_init$_8494653dfbc27b70,
            mid_init$_eaf556967a2a1531,
            mid_init$_751a1c1a1ca09c1d,
            mid_init$_0b8e13bc82520de1,
            mid_init$_3421bdf97998363c,
            mid_init$_a3bbcdaed92e689e,
            mid_init$_52ba9018809d3596,
            mid_init$_221cb6d69fb74a13,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StoredField(const StoredField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          StoredField(const ::java::lang::String &, const JArray< jbyte > &);
          StoredField(const ::java::lang::String &, const ::java::lang::String &);
          StoredField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          StoredField(const ::java::lang::String &, jdouble);
          StoredField(const ::java::lang::String &, jfloat);
          StoredField(const ::java::lang::String &, jint);
          StoredField(const ::java::lang::String &, jlong);
          StoredField(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::document::FieldType &);
          StoredField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::document::FieldType &);
          StoredField(const ::java::lang::String &, const ::java::lang::CharSequence &, const ::org::apache::lucene::document::FieldType &);
          StoredField(const ::java::lang::String &, const JArray< jbyte > &, jint, jint);
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
        extern PyType_Def PY_TYPE_DEF(StoredField);
        extern PyTypeObject *PY_TYPE(StoredField);

        class t_StoredField {
        public:
          PyObject_HEAD
          StoredField object;
          static PyObject *wrap_Object(const StoredField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
