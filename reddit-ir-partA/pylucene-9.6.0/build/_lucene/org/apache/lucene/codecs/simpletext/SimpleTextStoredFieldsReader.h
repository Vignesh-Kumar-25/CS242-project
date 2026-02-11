#ifndef org_apache_lucene_codecs_simpletext_SimpleTextStoredFieldsReader_H
#define org_apache_lucene_codecs_simpletext_SimpleTextStoredFieldsReader_H

#include "org/apache/lucene/codecs/StoredFieldsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class StoredFieldVisitor;
        class SegmentInfo;
        class FieldInfos;
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
        namespace simpletext {

          class SimpleTextStoredFieldsReader : public ::org::apache::lucene::codecs::StoredFieldsReader {
           public:
            enum {
              mid_init$_9816ec06719c150a,
              mid_checkIntegrity_3353d9f14bbfd91a,
              mid_clone_a05f6d8282c7d18c,
              mid_close_3353d9f14bbfd91a,
              mid_document_554c42b3867e24d2,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextStoredFieldsReader(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextStoredFieldsReader(const SimpleTextStoredFieldsReader& obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {}

            SimpleTextStoredFieldsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &);

            void checkIntegrity() const;
            ::org::apache::lucene::codecs::StoredFieldsReader clone() const;
            void close() const;
            void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(SimpleTextStoredFieldsReader);
          extern PyTypeObject *PY_TYPE(SimpleTextStoredFieldsReader);

          class t_SimpleTextStoredFieldsReader {
          public:
            PyObject_HEAD
            SimpleTextStoredFieldsReader object;
            static PyObject *wrap_Object(const SimpleTextStoredFieldsReader&);
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
