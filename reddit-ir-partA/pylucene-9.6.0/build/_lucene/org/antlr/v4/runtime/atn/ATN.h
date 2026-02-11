#ifndef org_antlr_v4_runtime_atn_ATN_H
#define org_antlr_v4_runtime_atn_ATN_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class TokensStartState;
          class ATNState;
          class DecisionState;
          class RuleStartState;
          class ATNType;
          class RuleStopState;
          class LexerAction;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class ATN : public ::java::lang::Object {
           public:
            enum {
              mid_init$_074af95a3948f941,
              mid_addState_d782f4e1d5ce4327,
              mid_defineDecisionState_f057110812f725b5,
              mid_getDecisionState_b6c844d26578227c,
              mid_getNumberOfDecisions_15aa3d485e96b665,
              mid_removeState_d782f4e1d5ce4327,
              max_mid
            };

            enum {
              fid_decisionToState,
              fid_grammarType,
              fid_lexerActions,
              fid_maxTokenType,
              fid_modeNameToStartState,
              fid_modeToStartState,
              fid_ruleToStartState,
              fid_ruleToStopState,
              fid_ruleToTokenType,
              fid_states,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ATN(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ATN(const ATN& obj) : ::java::lang::Object(obj) {}

            static jint INVALID_ALT_NUMBER;

            ::java::util::List _get_decisionToState() const;
            ::org::antlr::v4::runtime::atn::ATNType _get_grammarType() const;
            JArray< ::org::antlr::v4::runtime::atn::LexerAction > _get_lexerActions() const;
            void _set_lexerActions(const JArray< ::org::antlr::v4::runtime::atn::LexerAction > &) const;
            jint _get_maxTokenType() const;
            ::java::util::Map _get_modeNameToStartState() const;
            ::java::util::List _get_modeToStartState() const;
            JArray< ::org::antlr::v4::runtime::atn::RuleStartState > _get_ruleToStartState() const;
            void _set_ruleToStartState(const JArray< ::org::antlr::v4::runtime::atn::RuleStartState > &) const;
            JArray< ::org::antlr::v4::runtime::atn::RuleStopState > _get_ruleToStopState() const;
            void _set_ruleToStopState(const JArray< ::org::antlr::v4::runtime::atn::RuleStopState > &) const;
            JArray< jint > _get_ruleToTokenType() const;
            void _set_ruleToTokenType(const JArray< jint > &) const;
            ::java::util::List _get_states() const;

            ATN(const ::org::antlr::v4::runtime::atn::ATNType &, jint);

            void addState(const ::org::antlr::v4::runtime::atn::ATNState &) const;
            jint defineDecisionState(const ::org::antlr::v4::runtime::atn::DecisionState &) const;
            ::org::antlr::v4::runtime::atn::DecisionState getDecisionState(jint) const;
            jint getNumberOfDecisions() const;
            void removeState(const ::org::antlr::v4::runtime::atn::ATNState &) const;
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
          extern PyType_Def PY_TYPE_DEF(ATN);
          extern PyTypeObject *PY_TYPE(ATN);

          class t_ATN {
          public:
            PyObject_HEAD
            ATN object;
            static PyObject *wrap_Object(const ATN&);
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
