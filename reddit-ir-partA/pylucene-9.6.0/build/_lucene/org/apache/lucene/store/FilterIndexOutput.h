#ifndef org_apache_lucene_store_FilterIndexOutput_H
#define org_apache_lucene_store_FilterIndexOutput_H

#include "org/apache/lucene/store/IndexOutput.h"

namespace java {
  namespace io {
    class IOException;
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

        class FilterIndexOutput : public ::org::apache::lucene::store::IndexOutput {
         public:
          enum {
            mid_close_3353d9f14bbfd91a,
            mid_getChecksum_058f5911dcf5d8a4,
            mid_getDelegate_03808002c341425e,
            mid_getFilePointer_058f5911dcf5d8a4,
            mid_unwrap_06ab11cb98373109,
            mid_writeByte_34c1f13335999aeb,
            mid_writeBytes_411019d3e65b5a2d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterIndexOutput(jobject obj) : ::org::apache::lucene::store::IndexOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterIndexOutput(const FilterIndexOutput& obj) : ::org::apache::lucene::store::IndexOutput(obj) {}

          void close() const;
          jlong getChecksum() const;
          ::org::apache::lucene::store::IndexOutput getDelegate() const;
          jlong getFilePointer() const;
          static ::org::apache::lucene::store::IndexOutput unwrap(const ::org::apache::lucene::store::IndexOutput &);
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FilterIndexOutput);
        extern PyTypeObject *PY_TYPE(FilterIndexOutput);

        class t_FilterIndexOutput {
        public:
          PyObject_HEAD
          FilterIndexOutput object;
          static PyObject *wrap_Object(const FilterIndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
