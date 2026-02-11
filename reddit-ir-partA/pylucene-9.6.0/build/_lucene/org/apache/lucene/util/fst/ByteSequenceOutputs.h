#ifndef org_apache_lucene_util_fst_ByteSequenceOutputs_H
#define org_apache_lucene_util_fst_ByteSequenceOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace fst {
          class ByteSequenceOutputs;
        }
      }
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

          class ByteSequenceOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_0b039f4e0940b3e9,
              mid_common_0b039f4e0940b3e9,
              mid_getNoOutput_e6961a1ebae5a29a,
              mid_getSingleton_c128cf789bf7a5e5,
              mid_outputToString_2b43b5ef71f4a14f,
              mid_ramBytesUsed_cac4add48ae85e95,
              mid_read_fc2be33beed24e0a,
              mid_skipOutput_1870202a1faf50f8,
              mid_subtract_0b039f4e0940b3e9,
              mid_toString_dc633f13a47328a8,
              mid_write_cf63271a60474b34,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ByteSequenceOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ByteSequenceOutputs(const ByteSequenceOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::org::apache::lucene::util::BytesRef add(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::BytesRef common(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::BytesRef getNoOutput() const;
            static ByteSequenceOutputs getSingleton();
            ::java::lang::String outputToString(const ::org::apache::lucene::util::BytesRef &) const;
            jlong ramBytesUsed(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::BytesRef read(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::BytesRef subtract(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
            ::java::lang::String toString() const;
            void write(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(ByteSequenceOutputs);
          extern PyTypeObject *PY_TYPE(ByteSequenceOutputs);

          class t_ByteSequenceOutputs {
          public:
            PyObject_HEAD
            ByteSequenceOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ByteSequenceOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ByteSequenceOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ByteSequenceOutputs&, PyTypeObject *);
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
