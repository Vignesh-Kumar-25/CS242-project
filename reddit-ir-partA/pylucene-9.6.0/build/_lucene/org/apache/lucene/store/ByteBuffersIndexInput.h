#ifndef org_apache_lucene_store_ByteBuffersIndexInput_H
#define org_apache_lucene_store_ByteBuffersIndexInput_H

#include "org/apache/lucene/store/IndexInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class RandomAccessInput;
        class ByteBuffersDataInput;
        class ByteBuffersIndexInput;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Set;
  }
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

        class ByteBuffersIndexInput : public ::org::apache::lucene::store::IndexInput {
         public:
          enum {
            mid_init$_f1c575b94cc71ccf,
            mid_clone_ba49fd48bdedccdf,
            mid_close_3353d9f14bbfd91a,
            mid_getFilePointer_058f5911dcf5d8a4,
            mid_length_058f5911dcf5d8a4,
            mid_randomAccessSlice_10902e8a41953859,
            mid_readByte_9fe2c7e31d2bc1ae,
            mid_readByte_2854073926851a8e,
            mid_readBytes_411019d3e65b5a2d,
            mid_readBytes_db43af468086f27c,
            mid_readFloats_31ea054a5cbac743,
            mid_readInt_15aa3d485e96b665,
            mid_readInt_0b5d0387e68ead8f,
            mid_readLong_058f5911dcf5d8a4,
            mid_readLong_df4b83f9c1b9d174,
            mid_readLongs_4e526d67da638372,
            mid_readMapOfStrings_19f838df22aacf85,
            mid_readSetOfStrings_9a625d56b67c7390,
            mid_readShort_b83f3c5fe3ec2a58,
            mid_readShort_6f5e62c996394309,
            mid_readString_dc633f13a47328a8,
            mid_readVInt_15aa3d485e96b665,
            mid_readVLong_058f5911dcf5d8a4,
            mid_readZInt_15aa3d485e96b665,
            mid_readZLong_058f5911dcf5d8a4,
            mid_seek_db2028ac45cd5b77,
            mid_skipBytes_db2028ac45cd5b77,
            mid_slice_95f3ebe6a595a692,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBuffersIndexInput(jobject obj) : ::org::apache::lucene::store::IndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBuffersIndexInput(const ByteBuffersIndexInput& obj) : ::org::apache::lucene::store::IndexInput(obj) {}

          ByteBuffersIndexInput(const ::org::apache::lucene::store::ByteBuffersDataInput &, const ::java::lang::String &);

          ::org::apache::lucene::store::IndexInput clone() const;
          void close() const;
          jlong getFilePointer() const;
          jlong length() const;
          ::org::apache::lucene::store::RandomAccessInput randomAccessSlice(jlong, jlong) const;
          jbyte readByte() const;
          jbyte readByte(jlong) const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void readBytes(const JArray< jbyte > &, jint, jint, jboolean) const;
          void readFloats(const JArray< jfloat > &, jint, jint) const;
          jint readInt() const;
          jint readInt(jlong) const;
          jlong readLong() const;
          jlong readLong(jlong) const;
          void readLongs(const JArray< jlong > &, jint, jint) const;
          ::java::util::Map readMapOfStrings() const;
          ::java::util::Set readSetOfStrings() const;
          jshort readShort() const;
          jshort readShort(jlong) const;
          ::java::lang::String readString() const;
          jint readVInt() const;
          jlong readVLong() const;
          jint readZInt() const;
          jlong readZLong() const;
          void seek(jlong) const;
          void skipBytes(jlong) const;
          ByteBuffersIndexInput slice(const ::java::lang::String &, jlong, jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(ByteBuffersIndexInput);
        extern PyTypeObject *PY_TYPE(ByteBuffersIndexInput);

        class t_ByteBuffersIndexInput {
        public:
          PyObject_HEAD
          ByteBuffersIndexInput object;
          static PyObject *wrap_Object(const ByteBuffersIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
