#ifndef org_apache_lucene_store_ByteBuffersIndexOutput_H
#define org_apache_lucene_store_ByteBuffersIndexOutput_H

#include "org/apache/lucene/store/IndexOutput.h"

namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class ByteBuffersDataOutput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ByteBuffersIndexOutput : public ::org::apache::lucene::store::IndexOutput {
         public:
          enum {
            mid_init$_e625028f60e9504f,
            mid_close_3353d9f14bbfd91a,
            mid_copyBytes_c25416f993f8b675,
            mid_getChecksum_058f5911dcf5d8a4,
            mid_getFilePointer_058f5911dcf5d8a4,
            mid_toArrayCopy_f4d7c022fb7af16d,
            mid_writeByte_34c1f13335999aeb,
            mid_writeBytes_316a601689372d68,
            mid_writeBytes_411019d3e65b5a2d,
            mid_writeInt_da425451c8de636b,
            mid_writeLong_db2028ac45cd5b77,
            mid_writeMapOfStrings_62c0fdc62292ffbf,
            mid_writeSetOfStrings_d0cb68c4009fd1b5,
            mid_writeShort_aa54184a742ad854,
            mid_writeString_4a883f7810d2effa,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBuffersIndexOutput(jobject obj) : ::org::apache::lucene::store::IndexOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBuffersIndexOutput(const ByteBuffersIndexOutput& obj) : ::org::apache::lucene::store::IndexOutput(obj) {}

          ByteBuffersIndexOutput(const ::org::apache::lucene::store::ByteBuffersDataOutput &, const ::java::lang::String &, const ::java::lang::String &);

          void close() const;
          void copyBytes(const ::org::apache::lucene::store::DataInput &, jlong) const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          JArray< jbyte > toArrayCopy() const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
          void writeInt(jint) const;
          void writeLong(jlong) const;
          void writeMapOfStrings(const ::java::util::Map &) const;
          void writeSetOfStrings(const ::java::util::Set &) const;
          void writeShort(jshort) const;
          void writeString(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(ByteBuffersIndexOutput);
        extern PyTypeObject *PY_TYPE(ByteBuffersIndexOutput);

        class t_ByteBuffersIndexOutput {
        public:
          PyObject_HEAD
          ByteBuffersIndexOutput object;
          static PyObject *wrap_Object(const ByteBuffersIndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
