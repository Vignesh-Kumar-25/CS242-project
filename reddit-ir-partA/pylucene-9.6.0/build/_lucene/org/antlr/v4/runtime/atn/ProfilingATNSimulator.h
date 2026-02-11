#ifndef org_antlr_v4_runtime_atn_ProfilingATNSimulator_H
#define org_antlr_v4_runtime_atn_ProfilingATNSimulator_H

#include "org/antlr/v4/runtime/atn/ParserATNSimulator.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class TokenStream;
        class ParserRuleContext;
        namespace atn {
          class DecisionInfo;
        }
        class Parser;
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

          class ProfilingATNSimulator : public ::org::antlr::v4::runtime::atn::ParserATNSimulator {
           public:
            enum {
              mid_init$_eb174f8005b15951,
              mid_adaptivePredict_c5281c49a3dcd48c,
              mid_getDecisionInfo_75786fba8366e381,
              mid_reportAmbiguity_dca2beabda1d47e8,
              mid_reportAttemptingFullContext_ee87f141c0f73a46,
              mid_reportContextSensitivity_161078121f62c5d1,
              mid_getExistingTargetState_f355a5e1a3afbb2a,
              mid_computeTargetState_4e1a577a8171063f,
              mid_computeReachSet_93db6fe171a30865,
              mid_evalSemanticContext_33a2da5ae8d2a440,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ProfilingATNSimulator(jobject obj) : ::org::antlr::v4::runtime::atn::ParserATNSimulator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ProfilingATNSimulator(const ProfilingATNSimulator& obj) : ::org::antlr::v4::runtime::atn::ParserATNSimulator(obj) {}

            ProfilingATNSimulator(const ::org::antlr::v4::runtime::Parser &);

            jint adaptivePredict(const ::org::antlr::v4::runtime::TokenStream &, jint, const ::org::antlr::v4::runtime::ParserRuleContext &) const;
            JArray< ::org::antlr::v4::runtime::atn::DecisionInfo > getDecisionInfo() const;
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
          extern PyType_Def PY_TYPE_DEF(ProfilingATNSimulator);
          extern PyTypeObject *PY_TYPE(ProfilingATNSimulator);

          class t_ProfilingATNSimulator {
          public:
            PyObject_HEAD
            ProfilingATNSimulator object;
            static PyObject *wrap_Object(const ProfilingATNSimulator&);
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
