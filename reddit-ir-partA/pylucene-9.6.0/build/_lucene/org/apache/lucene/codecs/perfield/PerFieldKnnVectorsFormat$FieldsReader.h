#ifndef org_apache_lucene_codecs_perfield_PerFieldKnnVectorsFormat$FieldsReader_H
#define org_apache_lucene_codecs_perfield_PerFieldKnnVectorsFormat$FieldsReader_H

#include "org/apache/lucene/codecs/KnnVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TopDocs;
      }
      namespace index {
        class ByteVectorValues;
        class SegmentReadState;
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
        namespace perfield {

          class PerFieldKnnVectorsFormat$FieldsReader : public ::org::apache::lucene::codecs::KnnVectorsReader {
           public:
            enum {
              mid_init$_4d5e309329c9a9f9,
              mid_checkIntegrity_3353d9f14bbfd91a,
              mid_close_3353d9f14bbfd91a,
              mid_getByteVectorValues_2de47235ea37839f,
              mid_getFieldReader_9f696e584696ddad,
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

            explicit PerFieldKnnVectorsFormat$FieldsReader(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PerFieldKnnVectorsFormat$FieldsReader(const PerFieldKnnVectorsFormat$FieldsReader& obj) : ::org::apache::lucene::codecs::KnnVectorsReader(obj) {}

            PerFieldKnnVectorsFormat$FieldsReader(const ::org::apache::lucene::index::SegmentReadState &);

            void checkIntegrity() const;
            void close() const;
            ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
            ::org::apache::lucene::codecs::KnnVectorsReader getFieldReader(const ::java::lang::String &) const;
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
        namespace perfield {
          extern PyType_Def PY_TYPE_DEF(PerFieldKnnVectorsFormat$FieldsReader);
          extern PyTypeObject *PY_TYPE(PerFieldKnnVectorsFormat$FieldsReader);

          class t_PerFieldKnnVectorsFormat$FieldsReader {
          public:
            PyObject_HEAD
            PerFieldKnnVectorsFormat$FieldsReader object;
            static PyObject *wrap_Object(const PerFieldKnnVectorsFormat$FieldsReader&);
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
