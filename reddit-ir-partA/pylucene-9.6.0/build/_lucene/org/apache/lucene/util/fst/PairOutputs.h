#ifndef org_apache_lucene_util_fst_PairOutputs_H
#define org_apache_lucene_util_fst_PairOutputs_H

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
          class PairOutputs$Pair;
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

          class PairOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_init$_669c53050e034d1b,
              mid_add_9eadb6e77fb54c11,
              mid_common_9eadb6e77fb54c11,
              mid_getNoOutput_9173a3593d0b8f57,
              mid_newPair_4b5206d4323d7f43,
              mid_outputToString_d19938c90dba2180,
              mid_ramBytesUsed_eedc1fce098c1735,
              mid_read_2e0e260293ed42f4,
              mid_skipOutput_1870202a1faf50f8,
              mid_subtract_9eadb6e77fb54c11,
              mid_toString_dc633f13a47328a8,
              mid_write_7e2ff5f3db90a6b1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PairOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PairOutputs(const PairOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            PairOutputs(const ::org::apache::lucene::util::fst::Outputs &, const ::org::apache::lucene::util::fst::Outputs &);

            ::org::apache::lucene::util::fst::PairOutputs$Pair add(const ::org::apache::lucene::util::fst::PairOutputs$Pair &, const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair common(const ::org::apache::lucene::util::fst::PairOutputs$Pair &, const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair getNoOutput() const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair newPair(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::String outputToString(const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            jlong ramBytesUsed(const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair read(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair subtract(const ::org::apache::lucene::util::fst::PairOutputs$Pair &, const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            ::java::lang::String toString() const;
            void write(const ::org::apache::lucene::util::fst::PairOutputs$Pair &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(PairOutputs);
          extern PyTypeObject *PY_TYPE(PairOutputs);

          class t_PairOutputs {
          public:
            PyObject_HEAD
            PairOutputs object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_PairOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PairOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PairOutputs&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
