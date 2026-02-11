#ifndef org_apache_lucene_util_ByteBlockPool_H
#define org_apache_lucene_util_ByteBlockPool_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class Accountable;
        class ByteBlockPool$Allocator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class ByteBlockPool : public ::java::lang::Object {
         public:
          enum {
            mid_init$_38c680d5078a1430,
            mid_allocKnownSizeSlice_c7101d48a57e78a5,
            mid_allocSlice_c7101d48a57e78a5,
            mid_append_46caeaebccf31ffe,
            mid_newSlice_58b165b57740feff,
            mid_nextBuffer_3353d9f14bbfd91a,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            mid_readBytes_643753a32b33bbbd,
            mid_reset_3353d9f14bbfd91a,
            mid_reset_d8388b1e026b6cdb,
            mid_setBytesRef_77db1b29bc525299,
            mid_setRawBytesRef_9b421e4b3cf5edb5,
            max_mid
          };

          enum {
            fid_buffer,
            fid_buffers,
            fid_byteOffset,
            fid_byteUpto,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBlockPool(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBlockPool(const ByteBlockPool& obj) : ::java::lang::Object(obj) {}

          static jint BYTE_BLOCK_MASK;
          static jint BYTE_BLOCK_SHIFT;
          static jint BYTE_BLOCK_SIZE;
          static jint FIRST_LEVEL_SIZE;
          static JArray< jint > *LEVEL_SIZE_ARRAY;
          static JArray< jint > *NEXT_LEVEL_ARRAY;

          JArray< jbyte > _get_buffer() const;
          void _set_buffer(const JArray< jbyte > &) const;
          JArray< JArray< jbyte > > _get_buffers() const;
          void _set_buffers(const JArray< JArray< jbyte > > &) const;
          jint _get_byteOffset() const;
          void _set_byteOffset(jint) const;
          jint _get_byteUpto() const;
          void _set_byteUpto(jint) const;

          ByteBlockPool(const ::org::apache::lucene::util::ByteBlockPool$Allocator &);

          jint allocKnownSizeSlice(const JArray< jbyte > &, jint) const;
          jint allocSlice(const JArray< jbyte > &, jint) const;
          void append(const ::org::apache::lucene::util::BytesRef &) const;
          jint newSlice(jint) const;
          void nextBuffer() const;
          jlong ramBytesUsed() const;
          void readBytes(jlong, const JArray< jbyte > &, jint, jint) const;
          void reset() const;
          void reset(jboolean, jboolean) const;
          void setBytesRef(const ::org::apache::lucene::util::BytesRef &, jint) const;
          void setRawBytesRef(const ::org::apache::lucene::util::BytesRef &, jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(ByteBlockPool);
        extern PyTypeObject *PY_TYPE(ByteBlockPool);

        class t_ByteBlockPool {
        public:
          PyObject_HEAD
          ByteBlockPool object;
          static PyObject *wrap_Object(const ByteBlockPool&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
