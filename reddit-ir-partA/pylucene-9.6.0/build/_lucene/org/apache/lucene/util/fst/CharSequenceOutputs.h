#ifndef org_apache_lucene_util_fst_CharSequenceOutputs_H
#define org_apache_lucene_util_fst_CharSequenceOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class CharsRef;
        namespace fst {
          class CharSequenceOutputs;
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

          class CharSequenceOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_61aa9af0b6d2eb63,
              mid_common_61aa9af0b6d2eb63,
              mid_getNoOutput_468d122cdfa9c4af,
              mid_getSingleton_e24b4d7a4ac1a976,
              mid_outputToString_5c0b4fee0d8232fc,
              mid_ramBytesUsed_0623c4fa1cefd2a1,
              mid_read_8c426a2863e6aa1b,
              mid_skipOutput_1870202a1faf50f8,
              mid_subtract_61aa9af0b6d2eb63,
              mid_write_75b875c3a544474c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharSequenceOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharSequenceOutputs(const CharSequenceOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::org::apache::lucene::util::CharsRef add(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::util::CharsRef &) const;
            ::org::apache::lucene::util::CharsRef common(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::util::CharsRef &) const;
            ::org::apache::lucene::util::CharsRef getNoOutput() const;
            static CharSequenceOutputs getSingleton();
            ::java::lang::String outputToString(const ::org::apache::lucene::util::CharsRef &) const;
            jlong ramBytesUsed(const ::org::apache::lucene::util::CharsRef &) const;
            ::org::apache::lucene::util::CharsRef read(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::CharsRef subtract(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::util::CharsRef &) const;
            void write(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(CharSequenceOutputs);
          extern PyTypeObject *PY_TYPE(CharSequenceOutputs);

          class t_CharSequenceOutputs {
          public:
            PyObject_HEAD
            CharSequenceOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CharSequenceOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CharSequenceOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CharSequenceOutputs&, PyTypeObject *);
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
