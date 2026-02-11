#ifndef org_apache_lucene_store_ByteArrayDataOutput_H
#define org_apache_lucene_store_ByteArrayDataOutput_H

#include "org/apache/lucene/store/DataOutput.h"

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

        class ByteArrayDataOutput : public ::org::apache::lucene::store::DataOutput {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_e11791089a78895a,
            mid_init$_411019d3e65b5a2d,
            mid_getPosition_15aa3d485e96b665,
            mid_reset_e11791089a78895a,
            mid_reset_411019d3e65b5a2d,
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

          explicit ByteArrayDataOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteArrayDataOutput(const ByteArrayDataOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          ByteArrayDataOutput();
          ByteArrayDataOutput(const JArray< jbyte > &);
          ByteArrayDataOutput(const JArray< jbyte > &, jint, jint);

          jint getPosition() const;
          void reset(const JArray< jbyte > &) const;
          void reset(const JArray< jbyte > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(ByteArrayDataOutput);
        extern PyTypeObject *PY_TYPE(ByteArrayDataOutput);

        class t_ByteArrayDataOutput {
        public:
          PyObject_HEAD
          ByteArrayDataOutput object;
          static PyObject *wrap_Object(const ByteArrayDataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
