#ifndef org_apache_lucene_codecs_StoredFieldsWriter_H
#define org_apache_lucene_codecs_StoredFieldsWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class FieldInfo;
      }
      namespace util {
        class BytesRef;
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
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

        class StoredFieldsWriter : public ::java::lang::Object {
         public:
          enum {
            mid_close_3353d9f14bbfd91a,
            mid_finish_da425451c8de636b,
            mid_finishDocument_3353d9f14bbfd91a,
            mid_merge_acf7515d140161a5,
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

          explicit StoredFieldsWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StoredFieldsWriter(const StoredFieldsWriter& obj) : ::java::lang::Object(obj) {}

          void close() const;
          void finish(jint) const;
          void finishDocument() const;
          jint merge(const ::org::apache::lucene::index::MergeState &) const;
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

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(StoredFieldsWriter);
        extern PyTypeObject *PY_TYPE(StoredFieldsWriter);

        class t_StoredFieldsWriter {
        public:
          PyObject_HEAD
          StoredFieldsWriter object;
          static PyObject *wrap_Object(const StoredFieldsWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
