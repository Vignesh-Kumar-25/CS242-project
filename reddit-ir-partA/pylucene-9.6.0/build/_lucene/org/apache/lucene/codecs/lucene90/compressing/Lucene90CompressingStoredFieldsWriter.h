#ifndef org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingStoredFieldsWriter_H
#define org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingStoredFieldsWriter_H

#include "org/apache/lucene/codecs/StoredFieldsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class FieldInfo;
      }
      namespace util {
        class BytesRef;
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
        namespace lucene90 {
          namespace compressing {

            class Lucene90CompressingStoredFieldsWriter : public ::org::apache::lucene::codecs::StoredFieldsWriter {
             public:
              enum {
                mid_close_3353d9f14bbfd91a,
                mid_finish_da425451c8de636b,
                mid_finishDocument_3353d9f14bbfd91a,
                mid_merge_acf7515d140161a5,
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

              explicit Lucene90CompressingStoredFieldsWriter(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene90CompressingStoredFieldsWriter(const Lucene90CompressingStoredFieldsWriter& obj) : ::org::apache::lucene::codecs::StoredFieldsWriter(obj) {}

              static ::java::lang::String *FIELDS_EXTENSION;
              static ::java::lang::String *INDEX_CODEC_NAME;
              static ::java::lang::String *INDEX_EXTENSION;
              static ::java::lang::String *META_EXTENSION;

              void close() const;
              void finish(jint) const;
              void finishDocument() const;
              jint merge(const ::org::apache::lucene::index::MergeState &) const;
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
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {
          namespace compressing {
            extern PyType_Def PY_TYPE_DEF(Lucene90CompressingStoredFieldsWriter);
            extern PyTypeObject *PY_TYPE(Lucene90CompressingStoredFieldsWriter);

            class t_Lucene90CompressingStoredFieldsWriter {
            public:
              PyObject_HEAD
              Lucene90CompressingStoredFieldsWriter object;
              static PyObject *wrap_Object(const Lucene90CompressingStoredFieldsWriter&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
