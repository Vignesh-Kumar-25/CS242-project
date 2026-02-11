#ifndef org_apache_lucene_document_Field_H
#define org_apache_lucene_document_Field_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace analysis {
        class TokenStream;
        class Analyzer;
      }
      namespace index {
        class IndexableField;
        class IndexableFieldType;
      }
      namespace document {
        class InvertableType;
        class StoredValue;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Number;
    class CharSequence;
    class Class;
    class String;
  }
  namespace io {
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class Field : public ::java::lang::Object {
         public:
          enum {
            mid_init$_5a5fca0aaa7b3988,
            mid_init$_39ca4da871baf020,
            mid_init$_48e1bb9ba14baee1,
            mid_init$_22569c5b815c044e,
            mid_init$_1828ce199fb11c3b,
            mid_init$_a702475c507662d3,
            mid_binaryValue_e6961a1ebae5a29a,
            mid_fieldType_3e8932d3a0a9bfc7,
            mid_getCharSequenceValue_1487175e1bd58fa5,
            mid_invertableType_26d6be76ba09fc8f,
            mid_name_dc633f13a47328a8,
            mid_numericValue_72def02dd614d827,
            mid_readerValue_2399d04a4493d41f,
            mid_setByteValue_34c1f13335999aeb,
            mid_setBytesValue_e11791089a78895a,
            mid_setBytesValue_46caeaebccf31ffe,
            mid_setDoubleValue_c1f7206c104d501e,
            mid_setFloatValue_354c036766ff84b4,
            mid_setIntValue_da425451c8de636b,
            mid_setLongValue_db2028ac45cd5b77,
            mid_setReaderValue_48be8a5844a4c6e0,
            mid_setShortValue_aa54184a742ad854,
            mid_setStringValue_4a883f7810d2effa,
            mid_setTokenStream_ceb0c1d5a3508f22,
            mid_storedValue_8e72729249121ec4,
            mid_stringValue_dc633f13a47328a8,
            mid_toString_dc633f13a47328a8,
            mid_tokenStream_ae53b87790ecd0e0,
            mid_tokenStreamValue_5e6c3f11ccc6eb07,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Field(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Field(const Field& obj) : ::java::lang::Object(obj) {}

          Field(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::index::IndexableFieldType &);
          Field(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::index::IndexableFieldType &);
          Field(const ::java::lang::String &, const ::java::io::Reader &, const ::org::apache::lucene::index::IndexableFieldType &);
          Field(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::IndexableFieldType &);
          Field(const ::java::lang::String &, const ::java::lang::CharSequence &, const ::org::apache::lucene::index::IndexableFieldType &);
          Field(const ::java::lang::String &, const JArray< jbyte > &, jint, jint, const ::org::apache::lucene::index::IndexableFieldType &);

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          ::org::apache::lucene::index::IndexableFieldType fieldType() const;
          ::java::lang::CharSequence getCharSequenceValue() const;
          ::org::apache::lucene::document::InvertableType invertableType() const;
          ::java::lang::String name() const;
          ::java::lang::Number numericValue() const;
          ::java::io::Reader readerValue() const;
          void setByteValue(jbyte) const;
          void setBytesValue(const JArray< jbyte > &) const;
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setDoubleValue(jdouble) const;
          void setFloatValue(jfloat) const;
          void setIntValue(jint) const;
          void setLongValue(jlong) const;
          void setReaderValue(const ::java::io::Reader &) const;
          void setShortValue(jshort) const;
          void setStringValue(const ::java::lang::String &) const;
          void setTokenStream(const ::org::apache::lucene::analysis::TokenStream &) const;
          ::org::apache::lucene::document::StoredValue storedValue() const;
          ::java::lang::String stringValue() const;
          ::java::lang::String toString() const;
          ::org::apache::lucene::analysis::TokenStream tokenStream(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::TokenStream &) const;
          ::org::apache::lucene::analysis::TokenStream tokenStreamValue() const;
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
        extern PyType_Def PY_TYPE_DEF(Field);
        extern PyTypeObject *PY_TYPE(Field);

        class t_Field {
        public:
          PyObject_HEAD
          Field object;
          static PyObject *wrap_Object(const Field&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
