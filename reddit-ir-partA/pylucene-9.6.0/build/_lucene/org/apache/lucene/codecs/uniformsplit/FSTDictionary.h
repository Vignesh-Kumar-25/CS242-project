#ifndef org_apache_lucene_codecs_uniformsplit_FSTDictionary_H
#define org_apache_lucene_codecs_uniformsplit_FSTDictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
      }
      namespace codecs {
        namespace uniformsplit {
          class IndexDictionary;
          class BlockEncoder;
        }
      }
    }
  }
}
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
      namespace codecs {
        namespace uniformsplit {

          class FSTDictionary : public ::java::lang::Object {
           public:
            enum {
              mid_write_0057d8d2c9fd7d01,
              mid_read_8c3ab56346f044bd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTDictionary(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FSTDictionary(const FSTDictionary& obj) : ::java::lang::Object(obj) {}

            void write(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &) const;
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
      namespace codecs {
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(FSTDictionary);
          extern PyTypeObject *PY_TYPE(FSTDictionary);

          class t_FSTDictionary {
          public:
            PyObject_HEAD
            FSTDictionary object;
            static PyObject *wrap_Object(const FSTDictionary&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
