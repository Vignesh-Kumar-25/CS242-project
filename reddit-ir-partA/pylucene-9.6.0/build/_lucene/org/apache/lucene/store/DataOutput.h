#ifndef org_apache_lucene_store_DataOutput_H
#define org_apache_lucene_store_DataOutput_H

#include "java/lang/Object.h"

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
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class DataOutput : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_copyBytes_c25416f993f8b675,
            mid_writeByte_34c1f13335999aeb,
            mid_writeBytes_316a601689372d68,
            mid_writeBytes_411019d3e65b5a2d,
            mid_writeInt_da425451c8de636b,
            mid_writeLong_db2028ac45cd5b77,
            mid_writeMapOfStrings_62c0fdc62292ffbf,
            mid_writeSetOfStrings_d0cb68c4009fd1b5,
            mid_writeShort_aa54184a742ad854,
            mid_writeString_4a883f7810d2effa,
            mid_writeVInt_da425451c8de636b,
            mid_writeVLong_db2028ac45cd5b77,
            mid_writeZInt_da425451c8de636b,
            mid_writeZLong_db2028ac45cd5b77,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DataOutput(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DataOutput(const DataOutput& obj) : ::java::lang::Object(obj) {}

          DataOutput();

          void copyBytes(const ::org::apache::lucene::store::DataInput &, jlong) const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
          void writeInt(jint) const;
          void writeLong(jlong) const;
          void writeMapOfStrings(const ::java::util::Map &) const;
          void writeSetOfStrings(const ::java::util::Set &) const;
          void writeShort(jshort) const;
          void writeString(const ::java::lang::String &) const;
          void writeVInt(jint) const;
          void writeVLong(jlong) const;
          void writeZInt(jint) const;
          void writeZLong(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(DataOutput);
        extern PyTypeObject *PY_TYPE(DataOutput);

        class t_DataOutput {
        public:
          PyObject_HEAD
          DataOutput object;
          static PyObject *wrap_Object(const DataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
