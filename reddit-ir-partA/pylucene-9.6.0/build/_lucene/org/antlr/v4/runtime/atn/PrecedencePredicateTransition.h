#ifndef org_antlr_v4_runtime_atn_PrecedencePredicateTransition_H
#define org_antlr_v4_runtime_atn_PrecedencePredicateTransition_H

#include "org/antlr/v4/runtime/atn/AbstractPredicateTransition.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATNState;
          class SemanticContext$PrecedencePredicate;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class PrecedencePredicateTransition : public ::org::antlr::v4::runtime::atn::AbstractPredicateTransition {
           public:
            enum {
              mid_init$_5a031ab16f3656d3,
              mid_getPredicate_3615d2b6570ee4e2,
              mid_getSerializationType_15aa3d485e96b665,
              mid_isEpsilon_ee8b0a5fa521ddac,
              mid_matches_55ad34f5bbff8b97,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            enum {
              fid_precedence,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PrecedencePredicateTransition(jobject obj) : ::org::antlr::v4::runtime::atn::AbstractPredicateTransition(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PrecedencePredicateTransition(const PrecedencePredicateTransition& obj) : ::org::antlr::v4::runtime::atn::AbstractPredicateTransition(obj) {}

            jint _get_precedence() const;

            PrecedencePredicateTransition(const ::org::antlr::v4::runtime::atn::ATNState &, jint);

            ::org::antlr::v4::runtime::atn::SemanticContext$PrecedencePredicate getPredicate() const;
            jint getSerializationType() const;
            jboolean isEpsilon() const;
            jboolean matches(jint, jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(PrecedencePredicateTransition);
          extern PyTypeObject *PY_TYPE(PrecedencePredicateTransition);

          class t_PrecedencePredicateTransition {
          public:
            PyObject_HEAD
            PrecedencePredicateTransition object;
            static PyObject *wrap_Object(const PrecedencePredicateTransition&);
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
