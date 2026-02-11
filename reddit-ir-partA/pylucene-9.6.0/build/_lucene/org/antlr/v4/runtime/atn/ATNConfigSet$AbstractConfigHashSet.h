#ifndef org_antlr_v4_runtime_atn_ATNConfigSet$AbstractConfigHashSet_H
#define org_antlr_v4_runtime_atn_ATNConfigSet$AbstractConfigHashSet_H

#include "org/antlr/v4/runtime/misc/Array2DHashSet.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATNConfig;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class ATNConfigSet$AbstractConfigHashSet : public ::org::antlr::v4::runtime::misc::Array2DHashSet {
           public:
            enum {
              mid_asElementType_a4049813b266c53f,
              mid_createBuckets_fc23ae210d2426eb,
              mid_createBucket_957ca53fa7564b10,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ATNConfigSet$AbstractConfigHashSet(jobject obj) : ::org::antlr::v4::runtime::misc::Array2DHashSet(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ATNConfigSet$AbstractConfigHashSet(const ATNConfigSet$AbstractConfigHashSet& obj) : ::org::antlr::v4::runtime::misc::Array2DHashSet(obj) {}
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          extern PyType_Def PY_TYPE_DEF(ATNConfigSet$AbstractConfigHashSet);
          extern PyTypeObject *PY_TYPE(ATNConfigSet$AbstractConfigHashSet);

          class t_ATNConfigSet$AbstractConfigHashSet {
          public:
            PyObject_HEAD
            ATNConfigSet$AbstractConfigHashSet object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ATNConfigSet$AbstractConfigHashSet *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ATNConfigSet$AbstractConfigHashSet&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ATNConfigSet$AbstractConfigHashSet&, PyTypeObject *);
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
