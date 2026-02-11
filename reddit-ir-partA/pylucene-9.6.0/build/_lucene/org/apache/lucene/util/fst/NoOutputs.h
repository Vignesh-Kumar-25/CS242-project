#ifndef org_apache_lucene_util_fst_NoOutputs_H
#define org_apache_lucene_util_fst_NoOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
        class DataInput;
      }
      namespace util {
        namespace fst {
          class NoOutputs;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class NoOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_eed45094c70976e5,
              mid_common_eed45094c70976e5,
              mid_getNoOutput_bdd51648087bae52,
              mid_getSingleton_788a871dff02dc51,
              mid_merge_eed45094c70976e5,
              mid_outputToString_8b996882aac19745,
              mid_ramBytesUsed_5fb882193d258cf2,
              mid_read_794e36747f50ef6e,
              mid_subtract_eed45094c70976e5,
              mid_toString_dc633f13a47328a8,
              mid_write_54167818e4542b17,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NoOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NoOutputs(const NoOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::java::lang::Object add(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Object common(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Object getNoOutput() const;
            static NoOutputs getSingleton();
            ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::String outputToString(const ::java::lang::Object &) const;
            jlong ramBytesUsed(const ::java::lang::Object &) const;
            ::java::lang::Object read(const ::org::apache::lucene::store::DataInput &) const;
            ::java::lang::Object subtract(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::String toString() const;
            void write(const ::java::lang::Object &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(NoOutputs);
          extern PyTypeObject *PY_TYPE(NoOutputs);

          class t_NoOutputs {
          public:
            PyObject_HEAD
            NoOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_NoOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const NoOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const NoOutputs&, PyTypeObject *);
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
