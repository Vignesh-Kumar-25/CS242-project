#ifndef org_apache_lucene_util_packed_PackedDataOutput_H
#define org_apache_lucene_util_packed_PackedDataOutput_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
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
      namespace util {
        namespace packed {

          class PackedDataOutput : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ce69639f5ca08f3c,
              mid_flush_3353d9f14bbfd91a,
              mid_writeLong_6dbbaef8380ec710,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedDataOutput(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedDataOutput(const PackedDataOutput& obj) : ::java::lang::Object(obj) {}

            PackedDataOutput(const ::org::apache::lucene::store::DataOutput &);

            void flush() const;
            void writeLong(jlong, jint) const;
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
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(PackedDataOutput);
          extern PyTypeObject *PY_TYPE(PackedDataOutput);

          class t_PackedDataOutput {
          public:
            PyObject_HEAD
            PackedDataOutput object;
            static PyObject *wrap_Object(const PackedDataOutput&);
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
