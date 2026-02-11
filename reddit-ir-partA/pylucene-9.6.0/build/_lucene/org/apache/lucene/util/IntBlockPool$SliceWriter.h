#ifndef org_apache_lucene_util_IntBlockPool$SliceWriter_H
#define org_apache_lucene_util_IntBlockPool$SliceWriter_H

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

        class IntBlockPool$SliceWriter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3f76691ec0278a3b,
            mid_getCurrentOffset_15aa3d485e96b665,
            mid_reset_da425451c8de636b,
            mid_startNewSlice_15aa3d485e96b665,
            mid_writeInt_da425451c8de636b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntBlockPool$SliceWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntBlockPool$SliceWriter(const IntBlockPool$SliceWriter& obj) : ::java::lang::Object(obj) {}

          IntBlockPool$SliceWriter(const ::org::apache::lucene::util::IntBlockPool &);

          jint getCurrentOffset() const;
          void reset(jint) const;
          jint startNewSlice() const;
          void writeInt(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(IntBlockPool$SliceWriter);
        extern PyTypeObject *PY_TYPE(IntBlockPool$SliceWriter);

        class t_IntBlockPool$SliceWriter {
        public:
          PyObject_HEAD
          IntBlockPool$SliceWriter object;
          static PyObject *wrap_Object(const IntBlockPool$SliceWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
