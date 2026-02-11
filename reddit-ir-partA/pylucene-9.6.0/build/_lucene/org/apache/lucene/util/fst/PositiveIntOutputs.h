#ifndef org_apache_lucene_util_fst_PositiveIntOutputs_H
#define org_apache_lucene_util_fst_PositiveIntOutputs_H

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
          class PositiveIntOutputs;
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
    class Long;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class PositiveIntOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_501e913d82c88ec6,
              mid_common_501e913d82c88ec6,
              mid_getNoOutput_18c0c03140086e62,
              mid_getSingleton_3cf6247cf1db0ff6,
              mid_outputToString_3d82e48912823156,
              mid_ramBytesUsed_c3618cf3ea2cbe9e,
              mid_read_fb1446d16a6212b2,
              mid_subtract_501e913d82c88ec6,
              mid_toString_dc633f13a47328a8,
              mid_write_166288bd0efe4377,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PositiveIntOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PositiveIntOutputs(const PositiveIntOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::java::lang::Long add(const ::java::lang::Long &, const ::java::lang::Long &) const;
            ::java::lang::Long common(const ::java::lang::Long &, const ::java::lang::Long &) const;
            ::java::lang::Long getNoOutput() const;
            static PositiveIntOutputs getSingleton();
            ::java::lang::String outputToString(const ::java::lang::Long &) const;
            jlong ramBytesUsed(const ::java::lang::Long &) const;
            ::java::lang::Long read(const ::org::apache::lucene::store::DataInput &) const;
            ::java::lang::Long subtract(const ::java::lang::Long &, const ::java::lang::Long &) const;
            ::java::lang::String toString() const;
            void write(const ::java::lang::Long &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(PositiveIntOutputs);
          extern PyTypeObject *PY_TYPE(PositiveIntOutputs);

          class t_PositiveIntOutputs {
          public:
            PyObject_HEAD
            PositiveIntOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PositiveIntOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PositiveIntOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PositiveIntOutputs&, PyTypeObject *);
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
