#ifndef org_apache_lucene_misc_util_fst_ListOfOutputs_H
#define org_apache_lucene_misc_util_fst_ListOfOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

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
  namespace util {
    class List;
  }
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
      namespace misc {
        namespace util {
          namespace fst {

            class ListOfOutputs : public ::org::apache::lucene::util::fst::Outputs {
             public:
              enum {
                mid_init$_772ca0c9aa3737cc,
                mid_add_eed45094c70976e5,
                mid_asList_83cc0b535f4a8147,
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
                mid_toString_dc633f13a47328a8,
                mid_write_54167818e4542b17,
                mid_writeFinalOutput_54167818e4542b17,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ListOfOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ListOfOutputs(const ListOfOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

              ListOfOutputs(const ::org::apache::lucene::util::fst::Outputs &);

              ::java::lang::Object add(const ::java::lang::Object &, const ::java::lang::Object &) const;
              ::java::util::List asList(const ::java::lang::Object &) const;
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
              ::java::lang::String toString() const;
              void write(const ::java::lang::Object &, const ::org::apache::lucene::store::DataOutput &) const;
              void writeFinalOutput(const ::java::lang::Object &, const ::org::apache::lucene::store::DataOutput &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace util {
          namespace fst {
            extern PyType_Def PY_TYPE_DEF(ListOfOutputs);
            extern PyTypeObject *PY_TYPE(ListOfOutputs);

            class t_ListOfOutputs {
            public:
              PyObject_HEAD
              ListOfOutputs object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_ListOfOutputs *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const ListOfOutputs&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const ListOfOutputs&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
