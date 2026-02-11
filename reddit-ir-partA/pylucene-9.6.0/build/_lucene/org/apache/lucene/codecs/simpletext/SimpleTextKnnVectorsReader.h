#ifndef org_apache_lucene_codecs_simpletext_SimpleTextKnnVectorsReader_H
#define org_apache_lucene_codecs_simpletext_SimpleTextKnnVectorsReader_H

#include "org/apache/lucene/codecs/KnnVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TopDocs;
      }
      namespace index {
        class ByteVectorValues;
        class FloatVectorValues;
      }
      namespace util {
        class Bits;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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

          class SimpleTextKnnVectorsReader : public ::org::apache::lucene::codecs::KnnVectorsReader {
           public:
            enum {
              mid_checkIntegrity_3353d9f14bbfd91a,
              mid_close_3353d9f14bbfd91a,
              mid_getByteVectorValues_2de47235ea37839f,
              mid_getFloatVectorValues_0281d62202ab2972,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_search_d7281208578d6bcd,
              mid_search_3890e20c604b35ba,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextKnnVectorsReader(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextKnnVectorsReader(const SimpleTextKnnVectorsReader& obj) : ::org::apache::lucene::codecs::KnnVectorsReader(obj) {}

            void checkIntegrity() const;
            void close() const;
            ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
            ::org::apache::lucene::index::FloatVectorValues getFloatVectorValues(const ::java::lang::String &) const;
            jlong ramBytesUsed() const;
            ::org::apache::lucene::search::TopDocs search(const ::java::lang::String &, const JArray< jbyte > &, jint, const ::org::apache::lucene::util::Bits &, jint) const;
            ::org::apache::lucene::search::TopDocs search(const ::java::lang::String &, const JArray< jfloat > &, jint, const ::org::apache::lucene::util::Bits &, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(SimpleTextKnnVectorsReader);
          extern PyTypeObject *PY_TYPE(SimpleTextKnnVectorsReader);

          class t_SimpleTextKnnVectorsReader {
          public:
            PyObject_HEAD
            SimpleTextKnnVectorsReader object;
            static PyObject *wrap_Object(const SimpleTextKnnVectorsReader&);
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
