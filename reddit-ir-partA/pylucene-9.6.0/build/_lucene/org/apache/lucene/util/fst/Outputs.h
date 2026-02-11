#ifndef org_apache_lucene_util_fst_Outputs_H
#define org_apache_lucene_util_fst_Outputs_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
        class DataInput;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class Outputs : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_add_eed45094c70976e5,
              mid_common_eed45094c70976e5,
              mid_getNoOutput_bdd51648087bae52,
              mid_merge_eed45094c70976e5,
              mid_outputToString_8b996882aac19745,
              mid_ramBytesUsed_5fb882193d258cf2,
              mid_read_794e36747f50ef6e,
              mid_readFinalOutput_794e36747f50ef6e,
              mid_skipFinalOutput_1870202a1faf50f8,
              mid_skipOutput_1870202a1faf50f8,
              mid_subtract_eed45094c70976e5,
              mid_write_54167818e4542b17,
              mid_writeFinalOutput_54167818e4542b17,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Outputs(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Outputs(const Outputs& obj) : ::java::lang::Object(obj) {}

            Outputs();

            ::java::lang::Object add(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Object common(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Object getNoOutput() const;
            ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::String outputToString(const ::java::lang::Object &) const;
            jlong ramBytesUsed(const ::java::lang::Object &) const;
            ::java::lang::Object read(const ::org::apache::lucene::store::DataInput &) const;
            ::java::lang::Object readFinalOutput(const ::org::apache::lucene::store::DataInput &) const;
            void skipFinalOutput(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::java::lang::Object subtract(const ::java::lang::Object &, const ::java::lang::Object &) const;
            void write(const ::java::lang::Object &, const ::org::apache::lucene::store::DataOutput &) const;
            void writeFinalOutput(const ::java::lang::Object &, const ::org::apache::lucene::store::DataOutput &) const;
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
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(Outputs);
          extern PyTypeObject *PY_TYPE(Outputs);

          class t_Outputs {
          public:
            PyObject_HEAD
            Outputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Outputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Outputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Outputs&, PyTypeObject *);
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
