#ifndef org_apache_lucene_store_BufferedChecksumIndexInput_H
#define org_apache_lucene_store_BufferedChecksumIndexInput_H

#include "org/apache/lucene/store/ChecksumIndexInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class BufferedChecksumIndexInput : public ::org::apache::lucene::store::ChecksumIndexInput {
         public:
          enum {
            mid_init$_634ba7e2f6f5896b,
            mid_clone_ba49fd48bdedccdf,
            mid_close_3353d9f14bbfd91a,
            mid_getChecksum_058f5911dcf5d8a4,
            mid_getFilePointer_058f5911dcf5d8a4,
            mid_length_058f5911dcf5d8a4,
            mid_readByte_9fe2c7e31d2bc1ae,
            mid_readBytes_411019d3e65b5a2d,
            mid_slice_52ec3abab45ccfe1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BufferedChecksumIndexInput(jobject obj) : ::org::apache::lucene::store::ChecksumIndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BufferedChecksumIndexInput(const BufferedChecksumIndexInput& obj) : ::org::apache::lucene::store::ChecksumIndexInput(obj) {}

          BufferedChecksumIndexInput(const ::org::apache::lucene::store::IndexInput &);

          ::org::apache::lucene::store::IndexInput clone() const;
          void close() const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          jlong length() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          ::org::apache::lucene::store::IndexInput slice(const ::java::lang::String &, jlong, jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(BufferedChecksumIndexInput);
        extern PyTypeObject *PY_TYPE(BufferedChecksumIndexInput);

        class t_BufferedChecksumIndexInput {
        public:
          PyObject_HEAD
          BufferedChecksumIndexInput object;
          static PyObject *wrap_Object(const BufferedChecksumIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
