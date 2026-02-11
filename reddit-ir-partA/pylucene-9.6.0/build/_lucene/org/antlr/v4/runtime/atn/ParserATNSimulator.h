#ifndef org_antlr_v4_runtime_atn_ParserATNSimulator_H
#define org_antlr_v4_runtime_atn_ParserATNSimulator_H

#include "org/antlr/v4/runtime/atn/ATNSimulator.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class PredictionMode;
          class ATNConfig;
          class PrecedencePredicateTransition;
          class ATN;
        }
        class TokenStream;
        class ParserRuleContext;
        class NoViableAltException;
        class Parser;
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

          class ParserATNSimulator : public ::org::antlr::v4::runtime::atn::ATNSimulator {
           public:
            enum {
              mid_adaptivePredict_c5281c49a3dcd48c,
              mid_clearDFA_3353d9f14bbfd91a,
              mid_dumpDeadEndConfigs_261837107fb43141,
              mid_getLookaheadName_db3fecbc487863eb,
              mid_getParser_a136247c620d99c8,
              mid_getPredictionMode_5b7a2d9e3a64e622,
              mid_getRuleName_78a7b318cefaee15,
              mid_getSafeEnv_04612c8360f09496,
              mid_getTokenName_78a7b318cefaee15,
              mid_precedenceTransition_dd1d6345b47f8cb8,
              mid_reset_3353d9f14bbfd91a,
              mid_setPredictionMode_6d1b4006c3abda08,
              mid_reportAmbiguity_dca2beabda1d47e8,
              mid_reportAttemptingFullContext_ee87f141c0f73a46,
              mid_reportContextSensitivity_161078121f62c5d1,
              mid_execATN_b2da360238ed8eb5,
              mid_getExistingTargetState_f355a5e1a3afbb2a,
              mid_computeTargetState_4e1a577a8171063f,
              mid_getReachableTarget_739079df1ed38463,
              mid_computeStartState_5a6aee97e32d72e2,
              mid_getEpsilonTarget_95de0c791f4889cf,
              mid_ruleTransition_89ab560037de7588,
              mid_addDFAEdge_0d3c8161ed6b8d19,
              mid_addDFAState_a384ff4a6ccfd168,
              mid_computeReachSet_93db6fe171a30865,
              mid_evalSemanticContext_b0fe1eb73bbec0f9,
              mid_evalSemanticContext_33a2da5ae8d2a440,
              mid_predicateDFAState_a9d2f4a3271507a0,
              mid_execATNWithFullContext_795056ca2976f2da,
              mid_removeAllConfigsNotInRuleStopState_093b301584486570,
              mid_applyPrecedenceFilter_2fadde371b156889,
              mid_getPredsForAmbigAlts_b0331c56b5d5c956,
              mid_getPredicatePredictions_7f46f6d302919c06,
              mid_getSynValidOrSemInvalidAltThatFinishedDecisionEntryRule_977dbd9e9d1277e4,
              mid_getAltThatFinishedDecisionEntryRule_0bb7bd158aff3fc5,
              mid_splitAccordingToSemanticValidity_7b88cee4bcd93451,
              mid_closureCheckingStopState_b6589c6dbef45a82,
              mid_closure__b6589c6dbef45a82,
              mid_canDropLoopEntryEdgeInLeftRecursiveRule_4e1e0f1b0fa7c91e,
              mid_actionTransition_858c9c3ceeebac7c,
              mid_predTransition_665a28c5c7ca21da,
              mid_getConflictingAlts_c7b2e1cc7511c7cd,
              mid_getConflictingAltsOrUniqueAlt_c7b2e1cc7511c7cd,
              mid_noViableAlt_f41f90e3c8a0fe35,
              mid_getUniqueAlt_0bb7bd158aff3fc5,
              mid_closure_5583d47edf661cc9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ParserATNSimulator(jobject obj) : ::org::antlr::v4::runtime::atn::ATNSimulator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ParserATNSimulator(const ParserATNSimulator& obj) : ::org::antlr::v4::runtime::atn::ATNSimulator(obj) {}

            static jboolean TURN_OFF_LR_LOOP_ENTRY_BRANCH_OPT;
            static jboolean debug;
            static jboolean debug_list_atn_decisions;
            static jboolean dfa_debug;
            static jboolean retry_debug;

            jint adaptivePredict(const ::org::antlr::v4::runtime::TokenStream &, jint, const ::org::antlr::v4::runtime::ParserRuleContext &) const;
            void clearDFA() const;
            void dumpDeadEndConfigs(const ::org::antlr::v4::runtime::NoViableAltException &) const;
            ::java::lang::String getLookaheadName(const ::org::antlr::v4::runtime::TokenStream &) const;
            ::org::antlr::v4::runtime::Parser getParser() const;
            ::org::antlr::v4::runtime::atn::PredictionMode getPredictionMode() const;
            ::java::lang::String getRuleName(jint) const;
            static ::java::lang::String getSafeEnv(const ::java::lang::String &);
            ::java::lang::String getTokenName(jint) const;
            ::org::antlr::v4::runtime::atn::ATNConfig precedenceTransition(const ::org::antlr::v4::runtime::atn::ATNConfig &, const ::org::antlr::v4::runtime::atn::PrecedencePredicateTransition &, jboolean, jboolean, jboolean) const;
            void reset() const;
            void setPredictionMode(const ::org::antlr::v4::runtime::atn::PredictionMode &) const;
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
          extern PyType_Def PY_TYPE_DEF(ParserATNSimulator);
          extern PyTypeObject *PY_TYPE(ParserATNSimulator);

          class t_ParserATNSimulator {
          public:
            PyObject_HEAD
            ParserATNSimulator object;
            static PyObject *wrap_Object(const ParserATNSimulator&);
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
