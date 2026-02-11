#ifndef org_apache_lucene_store_OutputStreamIndexOutput_H
#define org_apache_lucene_store_OutputStreamIndexOutput_H

#include "org/apache/lucene/store/IndexOutput.h"

namespace java {
  namespace io {
    class IOException;
    class OutputStream;
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

        class OutputStreamIndexOutput : public ::org::apache::lucene::store::IndexOutput {
         public:
          enum {
            mid_init$_2f2ed4b2a6848711,
            mid_close_3353d9f14bbfd91a,
            mid_getChecksum_058f5911dcf5d8a4,
            mid_getFilePointer_058f5911dcf5d8a4,
            mid_writeByte_34c1f13335999aeb,
            mid_writeBytes_411019d3e65b5a2d,
            mid_writeInt_da425451c8de636b,
            mid_writeLong_db2028ac45cd5b77,
            mid_writeShort_aa54184a742ad854,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OutputStreamIndexOutput(jobject obj) : ::org::apache::lucene::store::IndexOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OutputStreamIndexOutput(const OutputStreamIndexOutput& obj) : ::org::apache::lucene::store::IndexOutput(obj) {}

          OutputStreamIndexOutput(const ::java::lang::String &, const ::java::lang::String &, const ::java::io::OutputStream &, jint);

          void close() const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
          void writeInt(jint) const;
          void writeLong(jlong) const;
          void writeShort(jshort) const;
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
        extern PyType_Def PY_TYPE_DEF(OutputStreamIndexOutput);
        extern PyTypeObject *PY_TYPE(OutputStreamIndexOutput);

        class t_OutputStreamIndexOutput {
        public:
          PyObject_HEAD
          OutputStreamIndexOutput object;
          static PyObject *wrap_Object(const OutputStreamIndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
