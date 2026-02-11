#ifndef org_apache_lucene_expressions_js_JavascriptParser$ExpressionContext_H
#define org_apache_lucene_expressions_js_JavascriptParser$ExpressionContext_H

#include "org/antlr/v4/runtime/ParserRuleContext.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Token;
        namespace atn {
          class ParserATNSimulator;
        }
      }
    }
  }
  namespace apache {
    namespace lucene {
      namespace expressions {
        namespace js {
          class JavascriptParser$ExpressionContext;
        }
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
  namespace apache {
    namespace lucene {
      namespace expressions {
        namespace js {

          class JavascriptParser$ExpressionContext : public ::org::antlr::v4::runtime::ParserRuleContext {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_d0066efe68d72c4e,
              mid_copyFrom_b00595bacda552e1,
              mid_getRuleIndex_15aa3d485e96b665,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JavascriptParser$ExpressionContext(jobject obj) : ::org::antlr::v4::runtime::ParserRuleContext(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JavascriptParser$ExpressionContext(const JavascriptParser$ExpressionContext& obj) : ::org::antlr::v4::runtime::ParserRuleContext(obj) {}

            JavascriptParser$ExpressionContext();
            JavascriptParser$ExpressionContext(const ::org::antlr::v4::runtime::ParserRuleContext &, jint);

            void copyFrom(const JavascriptParser$ExpressionContext &) const;
            jint getRuleIndex() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        namespace js {
          extern PyType_Def PY_TYPE_DEF(JavascriptParser$ExpressionContext);
          extern PyTypeObject *PY_TYPE(JavascriptParser$ExpressionContext);

          class t_JavascriptParser$ExpressionContext {
          public:
            PyObject_HEAD
            JavascriptParser$ExpressionContext object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_JavascriptParser$ExpressionContext *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const JavascriptParser$ExpressionContext&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const JavascriptParser$ExpressionContext&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
