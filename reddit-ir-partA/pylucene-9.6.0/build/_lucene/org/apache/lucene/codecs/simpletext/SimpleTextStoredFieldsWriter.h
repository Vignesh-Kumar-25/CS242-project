#ifndef org_apache_lucene_codecs_simpletext_SimpleTextStoredFieldsWriter_H
#define org_apache_lucene_codecs_simpletext_SimpleTextStoredFieldsWriter_H

#include "org/apache/lucene/codecs/StoredFieldsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace index {
        class FieldInfo;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace simpletext {

          class SimpleTextStoredFieldsWriter : public ::org::apache::lucene::codecs::StoredFieldsWriter {
           public:
            enum {
              mid_init$_31b2a25e004013d7,
              mid_close_3353d9f14bbfd91a,
              mid_finish_da425451c8de636b,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_startDocument_3353d9f14bbfd91a,
              mid_writeField_e28727547c823993,
              mid_writeField_eeaae4dde80c7a16,
              mid_writeField_301fef80cc8ba173,
              mid_writeField_88eacd1e10e53a68,
              mid_writeField_557a1c42e699541c,
              mid_writeField_282137181cb68431,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextStoredFieldsWriter(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextStoredFieldsWriter(const SimpleTextStoredFieldsWriter& obj) : ::org::apache::lucene::codecs::StoredFieldsWriter(obj) {}

            SimpleTextStoredFieldsWriter(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);

            void close() const;
            void finish(jint) const;
            jlong ramBytesUsed() const;
            void startDocument() const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, const ::java::lang::String &) const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::util::BytesRef &) const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, jdouble) const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, jfloat) const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, jint) const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, jlong) const;
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
      namespace codecs {
        namespace simpletext {
          extern PyType_Def PY_TYPE_DEF(SimpleTextStoredFieldsWriter);
          extern PyTypeObject *PY_TYPE(SimpleTextStoredFieldsWriter);

          class t_SimpleTextStoredFieldsWriter {
          public:
            PyObject_HEAD
            SimpleTextStoredFieldsWriter object;
            static PyObject *wrap_Object(const SimpleTextStoredFieldsWriter&);
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
