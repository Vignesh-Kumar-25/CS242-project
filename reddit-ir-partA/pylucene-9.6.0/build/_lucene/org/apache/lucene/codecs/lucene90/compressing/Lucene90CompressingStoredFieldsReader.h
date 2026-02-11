#ifndef org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingStoredFieldsReader_H
#define org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingStoredFieldsReader_H

#include "org/apache/lucene/codecs/StoredFieldsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class StoredFieldVisitor;
        class SegmentInfo;
        class FieldInfos;
      }
      namespace codecs {
        namespace compressing {
          class CompressionMode;
        }
      }
      namespace store {
        class IOContext;
        class Directory;
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

            class Lucene90CompressingStoredFieldsReader : public ::org::apache::lucene::codecs::StoredFieldsReader {
             public:
              enum {
                mid_init$_11f5cd917b7586d8,
                mid_checkIntegrity_3353d9f14bbfd91a,
                mid_clone_a05f6d8282c7d18c,
                mid_close_3353d9f14bbfd91a,
                mid_document_554c42b3867e24d2,
                mid_getMergeInstance_a05f6d8282c7d18c,
                mid_toString_dc633f13a47328a8,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Lucene90CompressingStoredFieldsReader(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene90CompressingStoredFieldsReader(const Lucene90CompressingStoredFieldsReader& obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {}

              Lucene90CompressingStoredFieldsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &, const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &);

              void checkIntegrity() const;
              ::org::apache::lucene::codecs::StoredFieldsReader clone() const;
              void close() const;
              void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
              ::org::apache::lucene::codecs::StoredFieldsReader getMergeInstance() const;
              ::java::lang::String toString() const;
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
            extern PyType_Def PY_TYPE_DEF(Lucene90CompressingStoredFieldsReader);
            extern PyTypeObject *PY_TYPE(Lucene90CompressingStoredFieldsReader);

            class t_Lucene90CompressingStoredFieldsReader {
            public:
              PyObject_HEAD
              Lucene90CompressingStoredFieldsReader object;
              static PyObject *wrap_Object(const Lucene90CompressingStoredFieldsReader&);
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
