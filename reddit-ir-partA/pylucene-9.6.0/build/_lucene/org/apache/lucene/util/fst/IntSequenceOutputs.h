#ifndef org_apache_lucene_util_fst_IntSequenceOutputs_H
#define org_apache_lucene_util_fst_IntSequenceOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
        class DataInput;
      }
      namespace util {
        class IntsRef;
        namespace fst {
          class IntSequenceOutputs;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class IntSequenceOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_f416c50c3717fb41,
              mid_common_f416c50c3717fb41,
              mid_getNoOutput_7eb5056455b30fe6,
              mid_getSingleton_aa25694825f56c4d,
              mid_outputToString_df453a40493c999a,
              mid_ramBytesUsed_0cbe0d96e6a75e51,
              mid_read_d34e8ecb3b4de898,
              mid_skipOutput_1870202a1faf50f8,
              mid_subtract_f416c50c3717fb41,
              mid_toString_dc633f13a47328a8,
              mid_write_5319ece5ac3ad52e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntSequenceOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntSequenceOutputs(const IntSequenceOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::org::apache::lucene::util::IntsRef add(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::IntsRef common(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::IntsRef getNoOutput() const;
            static IntSequenceOutputs getSingleton();
            ::java::lang::String outputToString(const ::org::apache::lucene::util::IntsRef &) const;
            jlong ramBytesUsed(const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::IntsRef read(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::IntsRef subtract(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::util::IntsRef &) const;
            ::java::lang::String toString() const;
            void write(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(IntSequenceOutputs);
          extern PyTypeObject *PY_TYPE(IntSequenceOutputs);

          class t_IntSequenceOutputs {
          public:
            PyObject_HEAD
            IntSequenceOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntSequenceOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntSequenceOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntSequenceOutputs&, PyTypeObject *);
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
