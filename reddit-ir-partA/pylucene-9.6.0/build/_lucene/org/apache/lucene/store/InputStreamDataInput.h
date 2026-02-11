#ifndef org_apache_lucene_store_InputStreamDataInput_H
#define org_apache_lucene_store_InputStreamDataInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace java {
  namespace io {
    class Closeable;
    class IOException;
    class InputStream;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class InputStreamDataInput : public ::org::apache::lucene::store::DataInput {
         public:
          enum {
            mid_init$_839363fac538f4b4,
            mid_close_3353d9f14bbfd91a,
            mid_readByte_9fe2c7e31d2bc1ae,
            mid_readBytes_411019d3e65b5a2d,
            mid_skipBytes_db2028ac45cd5b77,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InputStreamDataInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InputStreamDataInput(const InputStreamDataInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          InputStreamDataInput(const ::java::io::InputStream &);

          void close() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(InputStreamDataInput);
        extern PyTypeObject *PY_TYPE(InputStreamDataInput);

        class t_InputStreamDataInput {
        public:
          PyObject_HEAD
          InputStreamDataInput object;
          static PyObject *wrap_Object(const InputStreamDataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
