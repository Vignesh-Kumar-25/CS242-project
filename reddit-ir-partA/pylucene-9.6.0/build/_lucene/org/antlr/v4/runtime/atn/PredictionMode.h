#ifndef org_antlr_v4_runtime_atn_PredictionMode_H
#define org_antlr_v4_runtime_atn_PredictionMode_H

#include "java/lang/Enum.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATNConfigSet;
          class PredictionMode;
          class ATNState;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Collection;
    class BitSet;
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

          class PredictionMode : public ::java::lang::Enum {
           public:
            enum {
              mid_allConfigsInRuleStopStates_03f9df475530bb25,
              mid_allSubsetsConflict_919ee2b3f5bcb8c4,
              mid_allSubsetsEqual_919ee2b3f5bcb8c4,
              mid_getAlts_c7b2e1cc7511c7cd,
              mid_getAlts_727956b5e6cbf219,
              mid_getConflictingAltSubsets_2459027b5ee7c1cd,
              mid_getSingleViableAlt_bf772bb84b362a7a,
              mid_getStateToAltMap_ac3a600a5d6e9077,
              mid_getUniqueAlt_bf772bb84b362a7a,
              mid_hasConfigInRuleStopState_03f9df475530bb25,
              mid_hasConflictingAltSet_919ee2b3f5bcb8c4,
              mid_hasNonConflictingAltSet_919ee2b3f5bcb8c4,
              mid_hasSLLConflictTerminatingPrediction_26ce7d07583837ed,
              mid_hasStateAssociatedWithOneAlt_03f9df475530bb25,
              mid_resolvesToJustOneViableAlt_bf772bb84b362a7a,
              mid_valueOf_ff0458c187c3f5f0,
              mid_values_210595e61a36f8f0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PredictionMode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PredictionMode(const PredictionMode& obj) : ::java::lang::Enum(obj) {}

            static PredictionMode *LL;
            static PredictionMode *LL_EXACT_AMBIG_DETECTION;
            static PredictionMode *SLL;

            static jboolean allConfigsInRuleStopStates(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jboolean allSubsetsConflict(const ::java::util::Collection &);
            static jboolean allSubsetsEqual(const ::java::util::Collection &);
            static ::java::util::BitSet getAlts(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static ::java::util::BitSet getAlts(const ::java::util::Collection &);
            static ::java::util::Collection getConflictingAltSubsets(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jint getSingleViableAlt(const ::java::util::Collection &);
            static ::java::util::Map getStateToAltMap(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jint getUniqueAlt(const ::java::util::Collection &);
            static jboolean hasConfigInRuleStopState(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jboolean hasConflictingAltSet(const ::java::util::Collection &);
            static jboolean hasNonConflictingAltSet(const ::java::util::Collection &);
            static jboolean hasSLLConflictTerminatingPrediction(const PredictionMode &, const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jboolean hasStateAssociatedWithOneAlt(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jint resolvesToJustOneViableAlt(const ::java::util::Collection &);
            static PredictionMode valueOf(const ::java::lang::String &);
            static JArray< PredictionMode > values();
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
          extern PyType_Def PY_TYPE_DEF(PredictionMode);
          extern PyTypeObject *PY_TYPE(PredictionMode);

          class t_PredictionMode {
          public:
            PyObject_HEAD
            PredictionMode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PredictionMode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PredictionMode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PredictionMode&, PyTypeObject *);
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
