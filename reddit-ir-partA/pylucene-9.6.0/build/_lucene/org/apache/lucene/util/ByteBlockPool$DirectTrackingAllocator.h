#ifndef org_apache_lucene_util_ByteBlockPool$DirectTrackingAllocator_H
#define org_apache_lucene_util_ByteBlockPool$DirectTrackingAllocator_H

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

        class ByteBlockPool$DirectTrackingAllocator : public ::org::apache::lucene::util::ByteBlockPool$Allocator {
         public:
          enum {
            mid_init$_40d8bf87115e049e,
            mid_init$_d451dd3766489855,
            mid_getByteBlock_f4d7c022fb7af16d,
            mid_recycleByteBlocks_e33925f355a64d72,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBlockPool$DirectTrackingAllocator(jobject obj) : ::org::apache::lucene::util::ByteBlockPool$Allocator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBlockPool$DirectTrackingAllocator(const ByteBlockPool$DirectTrackingAllocator& obj) : ::org::apache::lucene::util::ByteBlockPool$Allocator(obj) {}

          ByteBlockPool$DirectTrackingAllocator(const ::org::apache::lucene::util::Counter &);
          ByteBlockPool$DirectTrackingAllocator(jint, const ::org::apache::lucene::util::Counter &);

          JArray< jbyte > getByteBlock() const;
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
        extern PyType_Def PY_TYPE_DEF(ByteBlockPool$DirectTrackingAllocator);
        extern PyTypeObject *PY_TYPE(ByteBlockPool$DirectTrackingAllocator);

        class t_ByteBlockPool$DirectTrackingAllocator {
        public:
          PyObject_HEAD
          ByteBlockPool$DirectTrackingAllocator object;
          static PyObject *wrap_Object(const ByteBlockPool$DirectTrackingAllocator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
