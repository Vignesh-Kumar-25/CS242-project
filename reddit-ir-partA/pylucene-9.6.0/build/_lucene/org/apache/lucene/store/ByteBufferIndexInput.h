#ifndef org_apache_lucene_store_ByteBufferIndexInput_H
#define org_apache_lucene_store_ByteBufferIndexInput_H

#include "org/apache/lucene/store/IndexInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class RandomAccessInput;
        class ByteBufferIndexInput;
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
      namespace store {

        class ByteBufferIndexInput : public ::org::apache::lucene::store::IndexInput {
         public:
          enum {
            mid_clone_d2b780e9b5ca6422,
            mid_close_3353d9f14bbfd91a,
            mid_getFilePointer_058f5911dcf5d8a4,
            mid_length_058f5911dcf5d8a4,
            mid_readByte_9fe2c7e31d2bc1ae,
            mid_readByte_2854073926851a8e,
            mid_readBytes_411019d3e65b5a2d,
            mid_readFloats_31ea054a5cbac743,
            mid_readInt_15aa3d485e96b665,
            mid_readInt_0b5d0387e68ead8f,
            mid_readInts_4aa7571f728d6752,
            mid_readLong_058f5911dcf5d8a4,
            mid_readLong_df4b83f9c1b9d174,
            mid_readLongs_4e526d67da638372,
            mid_readShort_b83f3c5fe3ec2a58,
            mid_readShort_6f5e62c996394309,
            mid_seek_db2028ac45cd5b77,
            mid_slice_d3d9d196f5c8b8f0,
            mid_setCurBuf_228ac23c9690c8eb,
            mid_buildSlice_d3d9d196f5c8b8f0,
            mid_newCloneInstance_cc994a0febd4d52b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBufferIndexInput(jobject obj) : ::org::apache::lucene::store::IndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBufferIndexInput(const ByteBufferIndexInput& obj) : ::org::apache::lucene::store::IndexInput(obj) {}

          ByteBufferIndexInput clone() const;
          void close() const;
          jlong getFilePointer() const;
          jlong length() const;
          jbyte readByte() const;
          jbyte readByte(jlong) const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void readFloats(const JArray< jfloat > &, jint, jint) const;
          jint readInt() const;
          jint readInt(jlong) const;
          void readInts(const JArray< jint > &, jint, jint) const;
          jlong readLong() const;
          jlong readLong(jlong) const;
          void readLongs(const JArray< jlong > &, jint, jint) const;
          jshort readShort() const;
          jshort readShort(jlong) const;
          void seek(jlong) const;
          ByteBufferIndexInput slice(const ::java::lang::String &, jlong, jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(ByteBufferIndexInput);
        extern PyTypeObject *PY_TYPE(ByteBufferIndexInput);

        class t_ByteBufferIndexInput {
        public:
          PyObject_HEAD
          ByteBufferIndexInput object;
          static PyObject *wrap_Object(const ByteBufferIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
