#ifndef org_apache_lucene_store_IndexInput_H
#define org_apache_lucene_store_IndexInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class RandomAccessInput;
        class IndexInput;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
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

        class IndexInput : public ::org::apache::lucene::store::DataInput {
         public:
          enum {
            mid_clone_ba49fd48bdedccdf,
            mid_close_3353d9f14bbfd91a,
            mid_getFilePointer_058f5911dcf5d8a4,
            mid_length_058f5911dcf5d8a4,
            mid_randomAccessSlice_10902e8a41953859,
            mid_seek_db2028ac45cd5b77,
            mid_skipBytes_db2028ac45cd5b77,
            mid_slice_52ec3abab45ccfe1,
            mid_toString_dc633f13a47328a8,
            mid_getFullSliceDescription_04612c8360f09496,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexInput(const IndexInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          IndexInput clone() const;
          void close() const;
          jlong getFilePointer() const;
          jlong length() const;
          ::org::apache::lucene::store::RandomAccessInput randomAccessSlice(jlong, jlong) const;
          void seek(jlong) const;
          void skipBytes(jlong) const;
          IndexInput slice(const ::java::lang::String &, jlong, jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(IndexInput);
        extern PyTypeObject *PY_TYPE(IndexInput);

        class t_IndexInput {
        public:
          PyObject_HEAD
          IndexInput object;
          static PyObject *wrap_Object(const IndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
