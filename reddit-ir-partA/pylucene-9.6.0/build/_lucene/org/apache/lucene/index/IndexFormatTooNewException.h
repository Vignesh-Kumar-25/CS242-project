#ifndef org_apache_lucene_index_IndexFormatTooNewException_H
#define org_apache_lucene_index_IndexFormatTooNewException_H

#include "java/io/IOException.h"

namespace java {
  namespace lang {
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

        class IndexFormatTooNewException : public ::java::io::IOException {
         public:
          enum {
            mid_init$_333522d8cfa718f9,
            mid_init$_0096f5a3e03e54cb,
            mid_getMaxVersion_15aa3d485e96b665,
            mid_getMinVersion_15aa3d485e96b665,
            mid_getResourceDescription_dc633f13a47328a8,
            mid_getVersion_15aa3d485e96b665,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexFormatTooNewException(jobject obj) : ::java::io::IOException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexFormatTooNewException(const IndexFormatTooNewException& obj) : ::java::io::IOException(obj) {}

          IndexFormatTooNewException(const ::java::lang::String &, jint, jint, jint);
          IndexFormatTooNewException(const ::org::apache::lucene::store::DataInput &, jint, jint, jint);

          jint getMaxVersion() const;
          jint getMinVersion() const;
          ::java::lang::String getResourceDescription() const;
          jint getVersion() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexFormatTooNewException);
        extern PyTypeObject *PY_TYPE(IndexFormatTooNewException);

        class t_IndexFormatTooNewException {
        public:
          PyObject_HEAD
          IndexFormatTooNewException object;
          static PyObject *wrap_Object(const IndexFormatTooNewException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
