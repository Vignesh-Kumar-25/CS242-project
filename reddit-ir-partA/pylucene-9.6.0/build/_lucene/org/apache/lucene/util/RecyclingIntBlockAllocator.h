#ifndef org_apache_lucene_util_RecyclingIntBlockAllocator_H
#define org_apache_lucene_util_RecyclingIntBlockAllocator_H

#include "org/apache/lucene/util/IntBlockPool$Allocator.h"

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

        class RecyclingIntBlockAllocator : public ::org::apache::lucene::util::IntBlockPool$Allocator {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_078cef180abf5351,
            mid_init$_3d4c75f2c1f4364e,
            mid_bytesUsed_058f5911dcf5d8a4,
            mid_freeBlocks_58b165b57740feff,
            mid_getIntBlock_7880494ffe2d4089,
            mid_maxBufferedBlocks_15aa3d485e96b665,
            mid_numBufferedBlocks_15aa3d485e96b665,
            mid_recycleIntBlocks_352fb62c31a61fef,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RecyclingIntBlockAllocator(jobject obj) : ::org::apache::lucene::util::IntBlockPool$Allocator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RecyclingIntBlockAllocator(const RecyclingIntBlockAllocator& obj) : ::org::apache::lucene::util::IntBlockPool$Allocator(obj) {}

          static jint DEFAULT_BUFFERED_BLOCKS;

          RecyclingIntBlockAllocator();
          RecyclingIntBlockAllocator(jint, jint);
          RecyclingIntBlockAllocator(jint, jint, const ::org::apache::lucene::util::Counter &);

          jlong bytesUsed() const;
          jint freeBlocks(jint) const;
          JArray< jint > getIntBlock() const;
          jint maxBufferedBlocks() const;
          jint numBufferedBlocks() const;
          void recycleIntBlocks(const JArray< JArray< jint > > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(RecyclingIntBlockAllocator);
        extern PyTypeObject *PY_TYPE(RecyclingIntBlockAllocator);

        class t_RecyclingIntBlockAllocator {
        public:
          PyObject_HEAD
          RecyclingIntBlockAllocator object;
          static PyObject *wrap_Object(const RecyclingIntBlockAllocator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
