#ifndef org_antlr_v4_runtime_atn_ArrayPredictionContext_H
#define org_antlr_v4_runtime_atn_ArrayPredictionContext_H

#include "org/antlr/v4/runtime/atn/PredictionContext.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class SingletonPredictionContext;
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
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class ArrayPredictionContext : public ::org::antlr::v4::runtime::atn::PredictionContext {
           public:
            enum {
              mid_init$_d9e141fb252eece3,
              mid_init$_0f427fe2ce7c429f,
              mid_equals_6084f78e09b6c0c3,
              mid_getParent_04fc33d03a91bd04,
              mid_getReturnState_58b165b57740feff,
              mid_isEmpty_ee8b0a5fa521ddac,
              mid_size_15aa3d485e96b665,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            enum {
              fid_parents,
              fid_returnStates,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ArrayPredictionContext(jobject obj) : ::org::antlr::v4::runtime::atn::PredictionContext(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ArrayPredictionContext(const ArrayPredictionContext& obj) : ::org::antlr::v4::runtime::atn::PredictionContext(obj) {}

            JArray< ::org::antlr::v4::runtime::atn::PredictionContext > _get_parents() const;
            JArray< jint > _get_returnStates() const;

            ArrayPredictionContext(const ::org::antlr::v4::runtime::atn::SingletonPredictionContext &);
            ArrayPredictionContext(const JArray< ::org::antlr::v4::runtime::atn::PredictionContext > &, const JArray< jint > &);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::antlr::v4::runtime::atn::PredictionContext getParent(jint) const;
            jint getReturnState(jint) const;
            jboolean isEmpty() const;
            jint size() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(ArrayPredictionContext);
          extern PyTypeObject *PY_TYPE(ArrayPredictionContext);

          class t_ArrayPredictionContext {
          public:
            PyObject_HEAD
            ArrayPredictionContext object;
            static PyObject *wrap_Object(const ArrayPredictionContext&);
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
