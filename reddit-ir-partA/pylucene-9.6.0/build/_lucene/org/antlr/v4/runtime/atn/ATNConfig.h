#ifndef org_antlr_v4_runtime_atn_ATNConfig_H
#define org_antlr_v4_runtime_atn_ATNConfig_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Recognizer;
        namespace atn {
          class ATNState;
          class SemanticContext;
          class PredictionContext;
          class ATNConfig;
        }
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

          class ATNConfig : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7abfa714d4fac3a6,
              mid_init$_9d2866b5921e5472,
              mid_init$_1667eae20e97a15b,
              mid_init$_5a80fb51004caa5f,
              mid_init$_c98dca800f4b82d5,
              mid_init$_085a86136ce93fcb,
              mid_init$_61e553587784deb0,
              mid_equals_4e1e0f1b0fa7c91e,
              mid_equals_6084f78e09b6c0c3,
              mid_getOuterContextDepth_15aa3d485e96b665,
              mid_hashCode_15aa3d485e96b665,
              mid_isPrecedenceFilterSuppressed_ee8b0a5fa521ddac,
              mid_setPrecedenceFilterSuppressed_4f96af910856b303,
              mid_toString_dc633f13a47328a8,
              mid_toString_ebbaa6dd102bf1da,
              max_mid
            };

            enum {
              fid_alt,
              fid_context,
              fid_reachesIntoOuterContext,
              fid_semanticContext,
              fid_state,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ATNConfig(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ATNConfig(const ATNConfig& obj) : ::java::lang::Object(obj) {}

            jint _get_alt() const;
            ::org::antlr::v4::runtime::atn::PredictionContext _get_context() const;
            void _set_context(const ::org::antlr::v4::runtime::atn::PredictionContext &) const;
            jint _get_reachesIntoOuterContext() const;
            void _set_reachesIntoOuterContext(jint) const;
            ::org::antlr::v4::runtime::atn::SemanticContext _get_semanticContext() const;
            ::org::antlr::v4::runtime::atn::ATNState _get_state() const;

            ATNConfig(const ATNConfig &, const ::org::antlr::v4::runtime::atn::ATNState &);
            ATNConfig(const ATNConfig &, const ::org::antlr::v4::runtime::atn::SemanticContext &);
            ATNConfig(const ATNConfig &, const ::org::antlr::v4::runtime::atn::ATNState &, const ::org::antlr::v4::runtime::atn::PredictionContext &);
            ATNConfig(const ATNConfig &, const ::org::antlr::v4::runtime::atn::ATNState &, const ::org::antlr::v4::runtime::atn::SemanticContext &);
            ATNConfig(const ::org::antlr::v4::runtime::atn::ATNState &, jint, const ::org::antlr::v4::runtime::atn::PredictionContext &);
            ATNConfig(const ATNConfig &, const ::org::antlr::v4::runtime::atn::ATNState &, const ::org::antlr::v4::runtime::atn::PredictionContext &, const ::org::antlr::v4::runtime::atn::SemanticContext &);
            ATNConfig(const ::org::antlr::v4::runtime::atn::ATNState &, jint, const ::org::antlr::v4::runtime::atn::PredictionContext &, const ::org::antlr::v4::runtime::atn::SemanticContext &);

            jboolean equals(const ATNConfig &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getOuterContextDepth() const;
            jint hashCode() const;
            jboolean isPrecedenceFilterSuppressed() const;
            void setPrecedenceFilterSuppressed(jboolean) const;
            ::java::lang::String toString() const;
            ::java::lang::String toString(const ::org::antlr::v4::runtime::Recognizer &, jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(ATNConfig);
          extern PyTypeObject *PY_TYPE(ATNConfig);

          class t_ATNConfig {
          public:
            PyObject_HEAD
            ATNConfig object;
            static PyObject *wrap_Object(const ATNConfig&);
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
