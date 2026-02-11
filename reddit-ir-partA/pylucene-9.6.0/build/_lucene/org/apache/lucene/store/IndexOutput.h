#ifndef org_apache_lucene_store_IndexOutput_H
#define org_apache_lucene_store_IndexOutput_H

#include "org/apache/lucene/store/DataOutput.h"

namespace java {
  namespace io {
    class Closeable;
    class IOException;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class IndexOutput : public ::org::apache::lucene::store::DataOutput {
         public:
          enum {
            mid_alignFilePointer_70b2a956d0e32bc7,
            mid_alignOffset_df21ac30c0f304d1,
            mid_close_3353d9f14bbfd91a,
            mid_getChecksum_058f5911dcf5d8a4,
            mid_getFilePointer_058f5911dcf5d8a4,
            mid_getName_dc633f13a47328a8,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexOutput(const IndexOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          jlong alignFilePointer(jint) const;
          static jlong alignOffset(jlong, jint);
          void close() const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          ::java::lang::String getName() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexOutput);
        extern PyTypeObject *PY_TYPE(IndexOutput);

        class t_IndexOutput {
        public:
          PyObject_HEAD
          IndexOutput object;
          static PyObject *wrap_Object(const IndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
