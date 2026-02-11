#ifndef org_apache_lucene_util_RecyclingByteBlockAllocator_H
#define org_apache_lucene_util_RecyclingByteBlockAllocator_H

#include "org/apache/lucene/util/ByteBlockPool$Allocator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Counter;
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

        class RecyclingByteBlockAllocator : public ::org::apache::lucene::util::ByteBlockPool$Allocator {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_078cef180abf5351,
            mid_init$_3d4c75f2c1f4364e,
            mid_bytesUsed_058f5911dcf5d8a4,
            mid_freeBlocks_58b165b57740feff,
            mid_getByteBlock_f4d7c022fb7af16d,
            mid_maxBufferedBlocks_15aa3d485e96b665,
            mid_numBufferedBlocks_15aa3d485e96b665,
            mid_recycleByteBlocks_e33925f355a64d72,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RecyclingByteBlockAllocator(jobject obj) : ::org::apache::lucene::util::ByteBlockPool$Allocator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RecyclingByteBlockAllocator(const RecyclingByteBlockAllocator& obj) : ::org::apache::lucene::util::ByteBlockPool$Allocator(obj) {}

          static jint DEFAULT_BUFFERED_BLOCKS;

          RecyclingByteBlockAllocator();
          RecyclingByteBlockAllocator(jint, jint);
          RecyclingByteBlockAllocator(jint, jint, const ::org::apache::lucene::util::Counter &);

          jlong bytesUsed() const;
          jint freeBlocks(jint) const;
          JArray< jbyte > getByteBlock() const;
          jint maxBufferedBlocks() const;
          jint numBufferedBlocks() const;
          void recycleByteBlocks(const JArray< JArray< jbyte > > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(RecyclingByteBlockAllocator);
        extern PyTypeObject *PY_TYPE(RecyclingByteBlockAllocator);

        class t_RecyclingByteBlockAllocator {
        public:
          PyObject_HEAD
          RecyclingByteBlockAllocator object;
          static PyObject *wrap_Object(const RecyclingByteBlockAllocator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
