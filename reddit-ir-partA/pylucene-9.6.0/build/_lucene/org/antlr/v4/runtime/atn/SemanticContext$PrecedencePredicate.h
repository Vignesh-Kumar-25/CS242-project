#ifndef org_antlr_v4_runtime_atn_SemanticContext$PrecedencePredicate_H
#define org_antlr_v4_runtime_atn_SemanticContext$PrecedencePredicate_H

#include "org/antlr/v4/runtime/atn/SemanticContext.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Recognizer;
        class RuleContext;
        namespace atn {
          class SemanticContext$PrecedencePredicate;
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
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class SemanticContext$PrecedencePredicate : public ::org::antlr::v4::runtime::atn::SemanticContext {
           public:
            enum {
              mid_init$_da425451c8de636b,
              mid_compareTo_ba4e29b6dba89282,
              mid_equals_6084f78e09b6c0c3,
              mid_eval_a4372c140e9eaf92,
              mid_evalPrecedence_237d3df507e08328,
              mid_hashCode_15aa3d485e96b665,
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

            explicit SemanticContext$PrecedencePredicate(jobject obj) : ::org::antlr::v4::runtime::atn::SemanticContext(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SemanticContext$PrecedencePredicate(const SemanticContext$PrecedencePredicate& obj) : ::org::antlr::v4::runtime::atn::SemanticContext(obj) {}

            jint _get_precedence() const;

            SemanticContext$PrecedencePredicate(jint);

            jint compareTo(const SemanticContext$PrecedencePredicate &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jboolean eval(const ::org::antlr::v4::runtime::Recognizer &, const ::org::antlr::v4::runtime::RuleContext &) const;
            ::org::antlr::v4::runtime::atn::SemanticContext evalPrecedence(const ::org::antlr::v4::runtime::Recognizer &, const ::org::antlr::v4::runtime::RuleContext &) const;
            jint hashCode() const;
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
          extern PyType_Def PY_TYPE_DEF(SemanticContext$PrecedencePredicate);
          extern PyTypeObject *PY_TYPE(SemanticContext$PrecedencePredicate);

          class t_SemanticContext$PrecedencePredicate {
          public:
            PyObject_HEAD
            SemanticContext$PrecedencePredicate object;
            static PyObject *wrap_Object(const SemanticContext$PrecedencePredicate&);
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
