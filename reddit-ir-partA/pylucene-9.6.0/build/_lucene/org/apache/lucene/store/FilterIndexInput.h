#ifndef org_apache_lucene_store_FilterIndexInput_H
#define org_apache_lucene_store_FilterIndexInput_H

#include "org/apache/lucene/store/IndexInput.h"

namespace java {
  namespace lang {
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
    namespace lucene {
      namespace store {

        class FilterIndexInput : public ::org::apache::lucene::store::IndexInput {
         public:
          enum {
            mid_init$_03d85548bd92beba,
            mid_close_3353d9f14bbfd91a,
            mid_getDelegate_ba49fd48bdedccdf,
            mid_getFilePointer_058f5911dcf5d8a4,
            mid_length_058f5911dcf5d8a4,
            mid_readByte_9fe2c7e31d2bc1ae,
            mid_readBytes_411019d3e65b5a2d,
            mid_seek_db2028ac45cd5b77,
            mid_slice_52ec3abab45ccfe1,
            mid_unwrap_836fbb78b6977734,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterIndexInput(jobject obj) : ::org::apache::lucene::store::IndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterIndexInput(const FilterIndexInput& obj) : ::org::apache::lucene::store::IndexInput(obj) {}

          FilterIndexInput(const ::java::lang::String &, const ::org::apache::lucene::store::IndexInput &);

          void close() const;
          ::org::apache::lucene::store::IndexInput getDelegate() const;
          jlong getFilePointer() const;
          jlong length() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void seek(jlong) const;
          ::org::apache::lucene::store::IndexInput slice(const ::java::lang::String &, jlong, jlong) const;
          static ::org::apache::lucene::store::IndexInput unwrap(const ::org::apache::lucene::store::IndexInput &);
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
        extern PyType_Def PY_TYPE_DEF(FilterIndexInput);
        extern PyTypeObject *PY_TYPE(FilterIndexInput);

        class t_FilterIndexInput {
        public:
          PyObject_HEAD
          FilterIndexInput object;
          static PyObject *wrap_Object(const FilterIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
