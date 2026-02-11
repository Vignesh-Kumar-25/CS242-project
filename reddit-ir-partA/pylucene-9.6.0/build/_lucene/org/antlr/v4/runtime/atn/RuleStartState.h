#ifndef org_antlr_v4_runtime_atn_RuleStartState_H
#define org_antlr_v4_runtime_atn_RuleStartState_H

#include "org/antlr/v4/runtime/atn/ATNState.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class RuleStopState;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class RuleStartState : public ::org::antlr::v4::runtime::atn::ATNState {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_getStateType_15aa3d485e96b665,
              max_mid
            };

            enum {
              fid_isLeftRecursiveRule,
              fid_stopState,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RuleStartState(jobject obj) : ::org::antlr::v4::runtime::atn::ATNState(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RuleStartState(const RuleStartState& obj) : ::org::antlr::v4::runtime::atn::ATNState(obj) {}

            jboolean _get_isLeftRecursiveRule() const;
            void _set_isLeftRecursiveRule(jboolean) const;
            ::org::antlr::v4::runtime::atn::RuleStopState _get_stopState() const;
            void _set_stopState(const ::org::antlr::v4::runtime::atn::RuleStopState &) const;

            RuleStartState();

            jint getStateType() const;
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
          extern PyType_Def PY_TYPE_DEF(RuleStartState);
          extern PyTypeObject *PY_TYPE(RuleStartState);

          class t_RuleStartState {
          public:
            PyObject_HEAD
            RuleStartState object;
            static PyObject *wrap_Object(const RuleStartState&);
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
