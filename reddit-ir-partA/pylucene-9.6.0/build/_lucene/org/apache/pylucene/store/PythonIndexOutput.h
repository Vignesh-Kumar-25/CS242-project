#ifndef org_apache_pylucene_store_PythonIndexOutput_H
#define org_apache_pylucene_store_PythonIndexOutput_H

#include "org/apache/lucene/store/IndexOutput.h"

namespace java {
  namespace lang {
    class Throwable;
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {

        class PythonIndexOutput : public ::org::apache::lucene::store::IndexOutput {
         public:
          enum {
            mid_init$_1c92f57e5f37bb8d,
            mid_close_3353d9f14bbfd91a,
            mid_finalize_3353d9f14bbfd91a,
            mid_getChecksum_058f5911dcf5d8a4,
            mid_getFilePointer_058f5911dcf5d8a4,
            mid_pythonDecRef_3353d9f14bbfd91a,
            mid_pythonExtension_058f5911dcf5d8a4,
            mid_pythonExtension_db2028ac45cd5b77,
            mid_writeByte_34c1f13335999aeb,
            mid_writeBytes_e11791089a78895a,
            mid_writeBytes_411019d3e65b5a2d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonIndexOutput(jobject obj) : ::org::apache::lucene::store::IndexOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonIndexOutput(const PythonIndexOutput& obj) : ::org::apache::lucene::store::IndexOutput(obj) {}

          PythonIndexOutput(const ::java::lang::String &, const ::java::lang::String &);

          void close() const;
          void finalize() const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(PythonIndexOutput);
        extern PyTypeObject *PY_TYPE(PythonIndexOutput);

        class t_PythonIndexOutput {
        public:
          PyObject_HEAD
          PythonIndexOutput object;
          static PyObject *wrap_Object(const PythonIndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
