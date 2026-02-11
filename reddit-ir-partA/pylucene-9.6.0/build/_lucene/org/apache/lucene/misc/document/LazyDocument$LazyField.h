#ifndef org_apache_lucene_misc_document_LazyDocument$LazyField_H
#define org_apache_lucene_misc_document_LazyDocument$LazyField_H

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
      namespace misc {
        namespace document {

          class LazyDocument$LazyField : public ::java::lang::Object {
           public:
            enum {
              mid_binaryValue_e6961a1ebae5a29a,
              mid_fieldType_3e8932d3a0a9bfc7,
              mid_hasBeenLoaded_ee8b0a5fa521ddac,
              mid_invertableType_26d6be76ba09fc8f,
              mid_name_dc633f13a47328a8,
              mid_numericValue_72def02dd614d827,
              mid_readerValue_2399d04a4493d41f,
              mid_storedValue_8e72729249121ec4,
              mid_stringValue_dc633f13a47328a8,
              mid_tokenStream_ae53b87790ecd0e0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LazyDocument$LazyField(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LazyDocument$LazyField(const LazyDocument$LazyField& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::BytesRef binaryValue() const;
            ::org::apache::lucene::index::IndexableFieldType fieldType() const;
            jboolean hasBeenLoaded() const;
            ::org::apache::lucene::document::InvertableType invertableType() const;
            ::java::lang::String name() const;
            ::java::lang::Number numericValue() const;
            ::java::io::Reader readerValue() const;
            ::org::apache::lucene::document::StoredValue storedValue() const;
            ::java::lang::String stringValue() const;
            ::org::apache::lucene::analysis::TokenStream tokenStream(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::TokenStream &) const;
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
      namespace misc {
        namespace document {
          extern PyType_Def PY_TYPE_DEF(LazyDocument$LazyField);
          extern PyTypeObject *PY_TYPE(LazyDocument$LazyField);

          class t_LazyDocument$LazyField {
          public:
            PyObject_HEAD
            LazyDocument$LazyField object;
            static PyObject *wrap_Object(const LazyDocument$LazyField&);
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
