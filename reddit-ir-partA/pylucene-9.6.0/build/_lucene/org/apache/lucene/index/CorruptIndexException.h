#ifndef org_apache_lucene_index_CorruptIndexException_H
#define org_apache_lucene_index_CorruptIndexException_H

#include "java/io/IOException.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
        class DataInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CorruptIndexException : public ::java::io::IOException {
         public:
          enum {
            mid_init$_1c92f57e5f37bb8d,
            mid_init$_654fa440dee31bec,
            mid_init$_615e5edf409b41ee,
            mid_init$_a5e5f436173d3436,
            mid_init$_8449975bb49b400a,
            mid_init$_c3d7c4b39e5a16bc,
            mid_getOriginalMessage_dc633f13a47328a8,
            mid_getResourceDescription_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CorruptIndexException(jobject obj) : ::java::io::IOException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CorruptIndexException(const CorruptIndexException& obj) : ::java::io::IOException(obj) {}

          CorruptIndexException(const ::java::lang::String &, const ::java::lang::String &);
          CorruptIndexException(const ::java::lang::String &, const ::org::apache::lucene::store::DataInput &);
          CorruptIndexException(const ::java::lang::String &, const ::org::apache::lucene::store::DataOutput &);
          CorruptIndexException(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::Throwable &);
          CorruptIndexException(const ::java::lang::String &, const ::org::apache::lucene::store::DataInput &, const ::java::lang::Throwable &);
          CorruptIndexException(const ::java::lang::String &, const ::org::apache::lucene::store::DataOutput &, const ::java::lang::Throwable &);

          ::java::lang::String getOriginalMessage() const;
          ::java::lang::String getResourceDescription() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(CorruptIndexException);
        extern PyTypeObject *PY_TYPE(CorruptIndexException);

        class t_CorruptIndexException {
        public:
          PyObject_HEAD
          CorruptIndexException object;
          static PyObject *wrap_Object(const CorruptIndexException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
