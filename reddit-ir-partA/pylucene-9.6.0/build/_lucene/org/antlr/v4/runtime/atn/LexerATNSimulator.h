#ifndef org_antlr_v4_runtime_atn_LexerATNSimulator_H
#define org_antlr_v4_runtime_atn_LexerATNSimulator_H

#include "org/antlr/v4/runtime/atn/ATNSimulator.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class CharStream;
        namespace atn {
          class LexerATNSimulator;
          class ATN;
        }
        class Lexer;
      }
    }
  }
}
namespace java {
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

          class LexerATNSimulator : public ::org::antlr::v4::runtime::atn::ATNSimulator {
           public:
            enum {
              mid_clearDFA_3353d9f14bbfd91a,
              mid_consume_c6d6bdfa43ad8d9f,
              mid_copyState_7f2f3e4bf04df31c,
              mid_getCharPositionInLine_15aa3d485e96b665,
              mid_getLine_15aa3d485e96b665,
              mid_getText_60f0e4c680e6ed87,
              mid_getTokenName_78a7b318cefaee15,
              mid_match_fe435a6e4fe4d7ed,
              mid_reset_3353d9f14bbfd91a,
              mid_setCharPositionInLine_da425451c8de636b,
              mid_setLine_da425451c8de636b,
              mid_matchATN_a65ee547d59f71a4,
              mid_execATN_c201236c71d01cb9,
              mid_getExistingTargetState_f355a5e1a3afbb2a,
              mid_computeTargetState_156911562f6d36a9,
              mid_failOrAccept_65c5461218267e56,
              mid_getReachableConfigSet_286f8f3f5973a7e8,
              mid_getReachableTarget_739079df1ed38463,
              mid_computeStartState_8b9ad388172fd65c,
              mid_getEpsilonTarget_3bce64d7265f18cc,
              mid_evaluatePredicate_fc3a6ac0a96218c9,
              mid_captureSimState_a829e64c80a09791,
              mid_addDFAEdge_75a1925894eabfbf,
              mid_addDFAEdge_f4f4c24d9c29e6ea,
              mid_addDFAState_dde344a3dce773a2,
              mid_closure_42e244e93afce0ee,
              mid_accept_c65d0a2de7443b29,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LexerATNSimulator(jobject obj) : ::org::antlr::v4::runtime::atn::ATNSimulator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LexerATNSimulator(const LexerATNSimulator& obj) : ::org::antlr::v4::runtime::atn::ATNSimulator(obj) {}

            static jint MAX_DFA_EDGE;
            static jint MIN_DFA_EDGE;
            static jboolean debug;
            static jboolean dfa_debug;

            void clearDFA() const;
            void consume(const ::org::antlr::v4::runtime::CharStream &) const;
            void copyState(const LexerATNSimulator &) const;
            jint getCharPositionInLine() const;
            jint getLine() const;
            ::java::lang::String getText(const ::org::antlr::v4::runtime::CharStream &) const;
            ::java::lang::String getTokenName(jint) const;
            jint match(const ::org::antlr::v4::runtime::CharStream &, jint) const;
            void reset() const;
            void setCharPositionInLine(jint) const;
            void setLine(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(LexerATNSimulator);
          extern PyTypeObject *PY_TYPE(LexerATNSimulator);

          class t_LexerATNSimulator {
          public:
            PyObject_HEAD
            LexerATNSimulator object;
            static PyObject *wrap_Object(const LexerATNSimulator&);
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
