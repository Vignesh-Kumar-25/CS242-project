#ifndef org_apache_lucene_util_packed_PackedInts_H
#define org_apache_lucene_util_packed_PackedInts_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
        class DataInput;
      }
      namespace util {
        namespace packed {
          class PackedInts$Writer;
          class PackedInts$Encoder;
          class PackedInts$Format;
          class PackedInts$Decoder;
          class PackedInts$Reader;
          class PackedInts$FormatAndBits;
          class PackedInts$ReaderIterator;
          class PackedInts$Mutable;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {

          class PackedInts : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_bitsRequired_0b5d0387e68ead8f,
              mid_checkVersion_da425451c8de636b,
              mid_copy_f8031eb3ef8e9eb0,
              mid_fastestFormatAndBits_74a793586c5a82a6,
              mid_getDecoder_4faa4cc7dd314dbd,
              mid_getEncoder_cb6c43ade61aae8b,
              mid_getMutable_565a22b65a7d8194,
              mid_getMutable_02ce88ad8198ad3e,
              mid_getReaderIteratorNoHeader_8989a6f6db9d83f9,
              mid_getWriterNoHeader_addbb978821e0df4,
              mid_maxValue_70b2a956d0e32bc7,
              mid_unsignedBitsRequired_0b5d0387e68ead8f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedInts(const PackedInts& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *CODEC_NAME;
            static jfloat COMPACT;
            static jfloat DEFAULT;
            static jint DEFAULT_BUFFER_SIZE;
            static jfloat FAST;
            static jfloat FASTEST;
            static jint VERSION_CURRENT;
            static jint VERSION_MONOTONIC_WITHOUT_ZIGZAG;
            static jint VERSION_START;

            PackedInts();

            static jint bitsRequired(jlong);
            static void checkVersion(jint);
            static void copy(const ::org::apache::lucene::util::packed::PackedInts$Reader &, jint, const ::org::apache::lucene::util::packed::PackedInts$Mutable &, jint, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$FormatAndBits fastestFormatAndBits(jint, jint, jfloat);
            static ::org::apache::lucene::util::packed::PackedInts$Decoder getDecoder(const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$Encoder getEncoder(const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$Mutable getMutable(jint, jint, const ::org::apache::lucene::util::packed::PackedInts$Format &);
            static ::org::apache::lucene::util::packed::PackedInts$Mutable getMutable(jint, jint, jfloat);
            static ::org::apache::lucene::util::packed::PackedInts$ReaderIterator getReaderIteratorNoHeader(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$Writer getWriterNoHeader(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint, jint);
            static jlong maxValue(jint);
            static jint unsignedBitsRequired(jlong);
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
      namespace util {
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(PackedInts);
          extern PyTypeObject *PY_TYPE(PackedInts);

          class t_PackedInts {
          public:
            PyObject_HEAD
            PackedInts object;
            static PyObject *wrap_Object(const PackedInts&);
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
