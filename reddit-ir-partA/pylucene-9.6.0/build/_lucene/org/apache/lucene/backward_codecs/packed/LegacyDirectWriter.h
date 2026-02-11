#ifndef org_apache_lucene_backward_codecs_packed_LegacyDirectWriter_H
#define org_apache_lucene_backward_codecs_packed_LegacyDirectWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace packed {
          class LegacyDirectWriter;
        }
      }
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
      namespace backward_codecs {
        namespace packed {

          class LegacyDirectWriter : public ::java::lang::Object {
           public:
            enum {
              mid_add_db2028ac45cd5b77,
              mid_bitsRequired_0b5d0387e68ead8f,
              mid_finish_3353d9f14bbfd91a,
              mid_getInstance_6d404f4790125b82,
              mid_unsignedBitsRequired_0b5d0387e68ead8f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LegacyDirectWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LegacyDirectWriter(const LegacyDirectWriter& obj) : ::java::lang::Object(obj) {}

            void add(jlong) const;
            static jint bitsRequired(jlong);
            void finish() const;
            static LegacyDirectWriter getInstance(const ::org::apache::lucene::store::DataOutput &, jlong, jint);
            static jint unsignedBitsRequired(jlong);
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
      namespace backward_codecs {
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(LegacyDirectWriter);
          extern PyTypeObject *PY_TYPE(LegacyDirectWriter);

          class t_LegacyDirectWriter {
          public:
            PyObject_HEAD
            LegacyDirectWriter object;
            static PyObject *wrap_Object(const LegacyDirectWriter&);
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
