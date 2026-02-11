#ifndef org_antlr_v4_runtime_atn_SemanticContext_H
#define org_antlr_v4_runtime_atn_SemanticContext_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Recognizer;
        namespace atn {
          class SemanticContext;
        }
        class RuleContext;
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

          class SemanticContext : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_and_e295d0de94dad205,
              mid_eval_a4372c140e9eaf92,
              mid_evalPrecedence_237d3df507e08328,
              mid_or_e295d0de94dad205,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SemanticContext(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SemanticContext(const SemanticContext& obj) : ::java::lang::Object(obj) {}

            SemanticContext();

            static SemanticContext and$(const SemanticContext &, const SemanticContext &);
            jboolean eval(const ::org::antlr::v4::runtime::Recognizer &, const ::org::antlr::v4::runtime::RuleContext &) const;
            SemanticContext evalPrecedence(const ::org::antlr::v4::runtime::Recognizer &, const ::org::antlr::v4::runtime::RuleContext &) const;
            static SemanticContext or$(const SemanticContext &, const SemanticContext &);
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
          extern PyType_Def PY_TYPE_DEF(SemanticContext);
          extern PyTypeObject *PY_TYPE(SemanticContext);

          class t_SemanticContext {
          public:
            PyObject_HEAD
            SemanticContext object;
            static PyObject *wrap_Object(const SemanticContext&);
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
