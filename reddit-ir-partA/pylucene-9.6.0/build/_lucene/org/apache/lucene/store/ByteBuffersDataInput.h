#ifndef org_apache_lucene_store_ByteBuffersDataInput_H
#define org_apache_lucene_store_ByteBuffersDataInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class RandomAccessInput;
        class ByteBuffersDataInput;
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace io {
    class EOFException;
    class IOException;
  }
  namespace util {
    class List;
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

        class ByteBuffersDataInput : public ::org::apache::lucene::store::DataInput {
         public:
          enum {
            mid_position_058f5911dcf5d8a4,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            mid_readByte_9fe2c7e31d2bc1ae,
            mid_readByte_2854073926851a8e,
            mid_readBytes_411019d3e65b5a2d,
            mid_readFloats_31ea054a5cbac743,
            mid_readInt_15aa3d485e96b665,
            mid_readInt_0b5d0387e68ead8f,
            mid_readLong_058f5911dcf5d8a4,
            mid_readLong_df4b83f9c1b9d174,
            mid_readLongs_4e526d67da638372,
            mid_readShort_b83f3c5fe3ec2a58,
            mid_readShort_6f5e62c996394309,
            mid_seek_db2028ac45cd5b77,
            mid_size_058f5911dcf5d8a4,
            mid_skipBytes_db2028ac45cd5b77,
            mid_slice_2e429972a96214ca,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBuffersDataInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBuffersDataInput(const ByteBuffersDataInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          jlong position() const;
          jlong ramBytesUsed() const;
          jbyte readByte() const;
          jbyte readByte(jlong) const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void readFloats(const JArray< jfloat > &, jint, jint) const;
          jint readInt() const;
          jint readInt(jlong) const;
          jlong readLong() const;
          jlong readLong(jlong) const;
          void readLongs(const JArray< jlong > &, jint, jint) const;
          jshort readShort() const;
          jshort readShort(jlong) const;
          void seek(jlong) const;
          jlong size() const;
          void skipBytes(jlong) const;
          ByteBuffersDataInput slice(jlong, jlong) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(ByteBuffersDataInput);
        extern PyTypeObject *PY_TYPE(ByteBuffersDataInput);

        class t_ByteBuffersDataInput {
        public:
          PyObject_HEAD
          ByteBuffersDataInput object;
          static PyObject *wrap_Object(const ByteBuffersDataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
