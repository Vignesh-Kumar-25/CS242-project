#ifndef org_apache_lucene_store_BufferedChecksum_H
#define org_apache_lucene_store_BufferedChecksum_H

#include "java/lang/Object.h"

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

        class BufferedChecksum : public ::java::lang::Object {
         public:
          enum {
            mid_getValue_058f5911dcf5d8a4,
            mid_reset_3353d9f14bbfd91a,
            mid_update_da425451c8de636b,
            mid_update_411019d3e65b5a2d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BufferedChecksum(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BufferedChecksum(const BufferedChecksum& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_BUFFERSIZE;

          jlong getValue() const;
          void reset() const;
          void update(jint) const;
          void update(const JArray< jbyte > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(BufferedChecksum);
        extern PyTypeObject *PY_TYPE(BufferedChecksum);

        class t_BufferedChecksum {
        public:
          PyObject_HEAD
          BufferedChecksum object;
          static PyObject *wrap_Object(const BufferedChecksum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
