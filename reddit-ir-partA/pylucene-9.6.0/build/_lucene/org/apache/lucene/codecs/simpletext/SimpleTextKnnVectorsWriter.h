#ifndef org_apache_lucene_codecs_simpletext_SimpleTextKnnVectorsWriter_H
#define org_apache_lucene_codecs_simpletext_SimpleTextKnnVectorsWriter_H

#include "org/apache/lucene/codecs/BufferingKnnVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class ByteVectorValues;
        class FloatVectorValues;
        class FieldInfo;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace simpletext {

          class SimpleTextKnnVectorsWriter : public ::org::apache::lucene::codecs::BufferingKnnVectorsWriter {
           public:
            enum {
              mid_close_3353d9f14bbfd91a,
              mid_finish_3353d9f14bbfd91a,
              mid_writeField_2e7726fce13109bb,
              mid_writeField_1123c07d32b10f78,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextKnnVectorsWriter(jobject obj) : ::org::apache::lucene::codecs::BufferingKnnVectorsWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextKnnVectorsWriter(const SimpleTextKnnVectorsWriter& obj) : ::org::apache::lucene::codecs::BufferingKnnVectorsWriter(obj) {}

            void close() const;
            void finish() const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::ByteVectorValues &, jint) const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::FloatVectorValues &, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(SimpleTextKnnVectorsWriter);
          extern PyTypeObject *PY_TYPE(SimpleTextKnnVectorsWriter);

          class t_SimpleTextKnnVectorsWriter {
          public:
            PyObject_HEAD
            SimpleTextKnnVectorsWriter object;
            static PyObject *wrap_Object(const SimpleTextKnnVectorsWriter&);
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
