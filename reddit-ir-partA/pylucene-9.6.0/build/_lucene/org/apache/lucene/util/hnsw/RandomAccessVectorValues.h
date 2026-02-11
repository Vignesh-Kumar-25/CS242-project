#ifndef org_apache_lucene_util_hnsw_RandomAccessVectorValues_H
#define org_apache_lucene_util_hnsw_RandomAccessVectorValues_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class RandomAccessVectorValues;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {

          class RandomAccessVectorValues : public ::java::lang::Object {
           public:
            enum {
              mid_copy_a751a3926561461a,
              mid_dimension_15aa3d485e96b665,
              mid_size_15aa3d485e96b665,
              mid_vectorValue_5eabe496ef99f2e4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RandomAccessVectorValues(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RandomAccessVectorValues(const RandomAccessVectorValues& obj) : ::java::lang::Object(obj) {}

            RandomAccessVectorValues copy() const;
            jint dimension() const;
            jint size() const;
            ::java::lang::Object vectorValue(jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          extern PyType_Def PY_TYPE_DEF(RandomAccessVectorValues);
          extern PyTypeObject *PY_TYPE(RandomAccessVectorValues);

          class t_RandomAccessVectorValues {
          public:
            PyObject_HEAD
            RandomAccessVectorValues object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_RandomAccessVectorValues *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const RandomAccessVectorValues&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const RandomAccessVectorValues&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
