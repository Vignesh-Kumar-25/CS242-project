#ifndef org_apache_lucene_store_ByteArrayDataInput_H
#define org_apache_lucene_store_ByteArrayDataInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ByteArrayDataInput : public ::org::apache::lucene::store::DataInput {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_e11791089a78895a,
            mid_init$_411019d3e65b5a2d,
            mid_eof_ee8b0a5fa521ddac,
            mid_getPosition_15aa3d485e96b665,
            mid_length_15aa3d485e96b665,
            mid_readByte_9fe2c7e31d2bc1ae,
            mid_readBytes_411019d3e65b5a2d,
            mid_readInt_15aa3d485e96b665,
            mid_readLong_058f5911dcf5d8a4,
            mid_readShort_b83f3c5fe3ec2a58,
            mid_readVInt_15aa3d485e96b665,
            mid_readVLong_058f5911dcf5d8a4,
            mid_reset_e11791089a78895a,
            mid_reset_411019d3e65b5a2d,
            mid_rewind_3353d9f14bbfd91a,
            mid_setPosition_da425451c8de636b,
            mid_skipBytes_db2028ac45cd5b77,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteArrayDataInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteArrayDataInput(const ByteArrayDataInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          ByteArrayDataInput();
          ByteArrayDataInput(const JArray< jbyte > &);
          ByteArrayDataInput(const JArray< jbyte > &, jint, jint);

          jboolean eof() const;
          jint getPosition() const;
          jint length() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          jint readInt() const;
          jlong readLong() const;
          jshort readShort() const;
          jint readVInt() const;
          jlong readVLong() const;
          void reset(const JArray< jbyte > &) const;
          void reset(const JArray< jbyte > &, jint, jint) const;
          void rewind() const;
          void setPosition(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(ByteArrayDataInput);
        extern PyTypeObject *PY_TYPE(ByteArrayDataInput);

        class t_ByteArrayDataInput {
        public:
          PyObject_HEAD
          ByteArrayDataInput object;
          static PyObject *wrap_Object(const ByteArrayDataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
