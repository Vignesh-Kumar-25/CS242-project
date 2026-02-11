#ifndef org_apache_lucene_util_IntBlockPool$SliceReader_H
#define org_apache_lucene_util_IntBlockPool$SliceReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntBlockPool;
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

        class IntBlockPool$SliceReader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3f76691ec0278a3b,
            mid_endOfSlice_ee8b0a5fa521ddac,
            mid_readInt_15aa3d485e96b665,
            mid_reset_078cef180abf5351,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntBlockPool$SliceReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntBlockPool$SliceReader(const IntBlockPool$SliceReader& obj) : ::java::lang::Object(obj) {}

          IntBlockPool$SliceReader(const ::org::apache::lucene::util::IntBlockPool &);

          jboolean endOfSlice() const;
          jint readInt() const;
          void reset(jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(IntBlockPool$SliceReader);
        extern PyTypeObject *PY_TYPE(IntBlockPool$SliceReader);

        class t_IntBlockPool$SliceReader {
        public:
          PyObject_HEAD
          IntBlockPool$SliceReader object;
          static PyObject *wrap_Object(const IntBlockPool$SliceReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
