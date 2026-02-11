#ifndef org_apache_lucene_util_PagedBytes_H
#define org_apache_lucene_util_PagedBytes_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class Accountable;
        class PagedBytes$PagedBytesDataInput;
        class PagedBytes$PagedBytesDataOutput;
        class PagedBytes$Reader;
      }
      namespace store {
        class IndexInput;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class PagedBytes : public ::java::lang::Object {
         public:
          enum {
            mid_init$_da425451c8de636b,
            mid_copy_e93412da156a4802,
            mid_copy_3624ea9269b2366f,
            mid_copyUsingLengthPrefix_cac4add48ae85e95,
            mid_freeze_13380ac919b1c860,
            mid_getDataInput_fa27a15bafc1f8ad,
            mid_getDataOutput_ae79b6e88b089676,
            mid_getPointer_058f5911dcf5d8a4,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PagedBytes(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PagedBytes(const PagedBytes& obj) : ::java::lang::Object(obj) {}

          PagedBytes(jint);

          void copy(const ::org::apache::lucene::store::IndexInput &, jlong) const;
          void copy(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
          jlong copyUsingLengthPrefix(const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::util::PagedBytes$Reader freeze(jboolean) const;
          ::org::apache::lucene::util::PagedBytes$PagedBytesDataInput getDataInput() const;
          ::org::apache::lucene::util::PagedBytes$PagedBytesDataOutput getDataOutput() const;
          jlong getPointer() const;
          jlong ramBytesUsed() const;
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
        extern PyType_Def PY_TYPE_DEF(PagedBytes);
        extern PyTypeObject *PY_TYPE(PagedBytes);

        class t_PagedBytes {
        public:
          PyObject_HEAD
          PagedBytes object;
          static PyObject *wrap_Object(const PagedBytes&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
