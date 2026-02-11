#ifndef org_apache_lucene_util_RollingBuffer_H
#define org_apache_lucene_util_RollingBuffer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class RollingBuffer$Resettable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class RollingBuffer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_freeBefore_da425451c8de636b,
            mid_get_36ceb0941a068e20,
            mid_getBufferSize_15aa3d485e96b665,
            mid_getMaxPos_15aa3d485e96b665,
            mid_reset_3353d9f14bbfd91a,
            mid_newInstance_1cb97f44ad45ee70,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RollingBuffer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RollingBuffer(const RollingBuffer& obj) : ::java::lang::Object(obj) {}

          RollingBuffer();

          void freeBefore(jint) const;
          ::org::apache::lucene::util::RollingBuffer$Resettable get(jint) const;
          jint getBufferSize() const;
          jint getMaxPos() const;
          void reset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(RollingBuffer);
        extern PyTypeObject *PY_TYPE(RollingBuffer);

        class t_RollingBuffer {
        public:
          PyObject_HEAD
          RollingBuffer object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_RollingBuffer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const RollingBuffer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const RollingBuffer&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
