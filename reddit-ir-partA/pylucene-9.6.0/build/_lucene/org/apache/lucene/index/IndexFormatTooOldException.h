#ifndef org_apache_lucene_index_IndexFormatTooOldException_H
#define org_apache_lucene_index_IndexFormatTooOldException_H

#include "java/io/IOException.h"

namespace java {
  namespace lang {
    class Integer;
    class String;
    class Class;
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
      namespace index {

        class IndexFormatTooOldException : public ::java::io::IOException {
         public:
          enum {
            mid_init$_1c92f57e5f37bb8d,
            mid_init$_f07b0f3e780df746,
            mid_init$_333522d8cfa718f9,
            mid_init$_0096f5a3e03e54cb,
            mid_getMaxVersion_90121836849ee69b,
            mid_getMinVersion_90121836849ee69b,
            mid_getReason_dc633f13a47328a8,
            mid_getResourceDescription_dc633f13a47328a8,
            mid_getVersion_90121836849ee69b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexFormatTooOldException(jobject obj) : ::java::io::IOException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexFormatTooOldException(const IndexFormatTooOldException& obj) : ::java::io::IOException(obj) {}

          IndexFormatTooOldException(const ::java::lang::String &, const ::java::lang::String &);
          IndexFormatTooOldException(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &);
          IndexFormatTooOldException(const ::java::lang::String &, jint, jint, jint);
          IndexFormatTooOldException(const ::org::apache::lucene::store::DataInput &, jint, jint, jint);

          ::java::lang::Integer getMaxVersion() const;
          ::java::lang::Integer getMinVersion() const;
          ::java::lang::String getReason() const;
          ::java::lang::String getResourceDescription() const;
          ::java::lang::Integer getVersion() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexFormatTooOldException);
        extern PyTypeObject *PY_TYPE(IndexFormatTooOldException);

        class t_IndexFormatTooOldException {
        public:
          PyObject_HEAD
          IndexFormatTooOldException object;
          static PyObject *wrap_Object(const IndexFormatTooOldException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
