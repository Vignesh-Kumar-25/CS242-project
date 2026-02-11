#ifndef org_apache_lucene_store_ByteBuffersDataOutput_H
#define org_apache_lucene_store_ByteBuffersDataOutput_H

#include "org/apache/lucene/store/DataOutput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace store {
        class DataInput;
        class ByteBuffersDataInput;
        class ByteBuffersDataOutput;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    namespace function {
      class Consumer;
      class IntFunction;
    }
    class Set;
    class ArrayList;
  }
  namespace io {
    class IOException;
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

        class ByteBuffersDataOutput : public ::org::apache::lucene::store::DataOutput {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_db2028ac45cd5b77,
            mid_copyBytes_c25416f993f8b675,
            mid_copyTo_ce69639f5ca08f3c,
            mid_newResettableInstance_af4b55de9ffaae1e,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            mid_reset_3353d9f14bbfd91a,
            mid_size_058f5911dcf5d8a4,
            mid_toArrayCopy_f4d7c022fb7af16d,
            mid_toDataInput_1f38cb0901108adb,
            mid_toString_dc633f13a47328a8,
            mid_writeByte_34c1f13335999aeb,
            mid_writeBytes_e11791089a78895a,
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

          explicit ByteBuffersDataOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBuffersDataOutput(const ByteBuffersDataOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          static jint DEFAULT_MAX_BITS_PER_BLOCK;
          static jint DEFAULT_MIN_BITS_PER_BLOCK;
          static jint LIMIT_MAX_BITS_PER_BLOCK;
          static jint LIMIT_MIN_BITS_PER_BLOCK;

          ByteBuffersDataOutput();
          ByteBuffersDataOutput(jlong);

          void copyBytes(const ::org::apache::lucene::store::DataInput &, jlong) const;
          void copyTo(const ::org::apache::lucene::store::DataOutput &) const;
          static ByteBuffersDataOutput newResettableInstance();
          jlong ramBytesUsed() const;
          void reset() const;
          jlong size() const;
          JArray< jbyte > toArrayCopy() const;
          ::org::apache::lucene::store::ByteBuffersDataInput toDataInput() const;
          ::java::lang::String toString() const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &) const;
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
        extern PyType_Def PY_TYPE_DEF(ByteBuffersDataOutput);
        extern PyTypeObject *PY_TYPE(ByteBuffersDataOutput);

        class t_ByteBuffersDataOutput {
        public:
          PyObject_HEAD
          ByteBuffersDataOutput object;
          static PyObject *wrap_Object(const ByteBuffersDataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
