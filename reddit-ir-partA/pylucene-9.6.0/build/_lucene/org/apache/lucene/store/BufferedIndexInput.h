#ifndef org_apache_lucene_store_BufferedIndexInput_H
#define org_apache_lucene_store_BufferedIndexInput_H

#include "org/apache/lucene/store/IndexInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class RandomAccessInput;
        class IOContext;
        class BufferedIndexInput;
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

        class BufferedIndexInput : public ::org::apache::lucene::store::IndexInput {
         public:
          enum {
            mid_init$_4a883f7810d2effa,
            mid_init$_1bb51ade5c18747d,
            mid_init$_751a1c1a1ca09c1d,
            mid_bufferSize_ad67c01d382224fa,
            mid_clone_d5328475b586f45e,
            mid_getBufferSize_15aa3d485e96b665,
            mid_getFilePointer_058f5911dcf5d8a4,
            mid_readByte_9fe2c7e31d2bc1ae,
            mid_readByte_2854073926851a8e,
            mid_readBytes_411019d3e65b5a2d,
            mid_readBytes_db43af468086f27c,
            mid_readInt_15aa3d485e96b665,
            mid_readInt_0b5d0387e68ead8f,
            mid_readLong_058f5911dcf5d8a4,
            mid_readLong_df4b83f9c1b9d174,
            mid_readShort_b83f3c5fe3ec2a58,
            mid_readShort_6f5e62c996394309,
            mid_readVInt_15aa3d485e96b665,
            mid_readVLong_058f5911dcf5d8a4,
            mid_seek_db2028ac45cd5b77,
            mid_slice_52ec3abab45ccfe1,
            mid_wrap_28bef7c1810735cf,
            mid_seekInternal_db2028ac45cd5b77,
            mid_readInternal_228ac23c9690c8eb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BufferedIndexInput(jobject obj) : ::org::apache::lucene::store::IndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BufferedIndexInput(const BufferedIndexInput& obj) : ::org::apache::lucene::store::IndexInput(obj) {}

          static jint BUFFER_SIZE;
          static jint MERGE_BUFFER_SIZE;
          static jint MIN_BUFFER_SIZE;

          BufferedIndexInput(const ::java::lang::String &);
          BufferedIndexInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);
          BufferedIndexInput(const ::java::lang::String &, jint);

          static jint bufferSize(const ::org::apache::lucene::store::IOContext &);
          BufferedIndexInput clone() const;
          jint getBufferSize() const;
          jlong getFilePointer() const;
          jbyte readByte() const;
          jbyte readByte(jlong) const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void readBytes(const JArray< jbyte > &, jint, jint, jboolean) const;
          jint readInt() const;
          jint readInt(jlong) const;
          jlong readLong() const;
          jlong readLong(jlong) const;
          jshort readShort() const;
          jshort readShort(jlong) const;
          jint readVInt() const;
          jlong readVLong() const;
          void seek(jlong) const;
          ::org::apache::lucene::store::IndexInput slice(const ::java::lang::String &, jlong, jlong) const;
          static BufferedIndexInput wrap(const ::java::lang::String &, const ::org::apache::lucene::store::IndexInput &, jlong, jlong);
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
        extern PyType_Def PY_TYPE_DEF(BufferedIndexInput);
        extern PyTypeObject *PY_TYPE(BufferedIndexInput);

        class t_BufferedIndexInput {
        public:
          PyObject_HEAD
          BufferedIndexInput object;
          static PyObject *wrap_Object(const BufferedIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
