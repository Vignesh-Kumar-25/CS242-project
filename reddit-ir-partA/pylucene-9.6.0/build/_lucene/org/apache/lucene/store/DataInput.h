#ifndef org_apache_lucene_store_DataInput_H
#define org_apache_lucene_store_DataInput_H

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
    class Cloneable;
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

        class DataInput : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_clone_baf95be7e02a840b,
            mid_readByte_9fe2c7e31d2bc1ae,
            mid_readBytes_411019d3e65b5a2d,
            mid_readBytes_db43af468086f27c,
            mid_readFloats_31ea054a5cbac743,
            mid_readInt_15aa3d485e96b665,
            mid_readInts_4aa7571f728d6752,
            mid_readLong_058f5911dcf5d8a4,
            mid_readLongs_4e526d67da638372,
            mid_readMapOfStrings_19f838df22aacf85,
            mid_readSetOfStrings_9a625d56b67c7390,
            mid_readShort_b83f3c5fe3ec2a58,
            mid_readString_dc633f13a47328a8,
            mid_readVInt_15aa3d485e96b665,
            mid_readVLong_058f5911dcf5d8a4,
            mid_readZInt_15aa3d485e96b665,
            mid_readZLong_058f5911dcf5d8a4,
            mid_skipBytes_db2028ac45cd5b77,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DataInput(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DataInput(const DataInput& obj) : ::java::lang::Object(obj) {}

          DataInput();

          DataInput clone() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void readBytes(const JArray< jbyte > &, jint, jint, jboolean) const;
          void readFloats(const JArray< jfloat > &, jint, jint) const;
          jint readInt() const;
          void readInts(const JArray< jint > &, jint, jint) const;
          jlong readLong() const;
          void readLongs(const JArray< jlong > &, jint, jint) const;
          ::java::util::Map readMapOfStrings() const;
          ::java::util::Set readSetOfStrings() const;
          jshort readShort() const;
          ::java::lang::String readString() const;
          jint readVInt() const;
          jlong readVLong() const;
          jint readZInt() const;
          jlong readZLong() const;
          void skipBytes(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(DataInput);
        extern PyTypeObject *PY_TYPE(DataInput);

        class t_DataInput {
        public:
          PyObject_HEAD
          DataInput object;
          static PyObject *wrap_Object(const DataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
