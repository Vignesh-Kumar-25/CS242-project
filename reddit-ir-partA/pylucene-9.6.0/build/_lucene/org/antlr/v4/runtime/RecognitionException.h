#ifndef org_antlr_v4_runtime_RecognitionException_H
#define org_antlr_v4_runtime_RecognitionException_H

#include "java/lang/RuntimeException.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class IntStream;
        class Recognizer;
        class ParserRuleContext;
        class Token;
        class RuleContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class RecognitionException : public ::java::lang::RuntimeException {
         public:
          enum {
            mid_init$_7cfa2d5efdf1d8f8,
            mid_init$_fe214d8a39ed6e32,
            mid_getCtx_68c729eea21b6873,
            mid_getInputStream_cc01c01fc3672711,
            mid_getOffendingState_15aa3d485e96b665,
            mid_getOffendingToken_5310b3c531063604,
            mid_getRecognizer_ef59e95da16a8722,
            mid_setOffendingState_da425451c8de636b,
            mid_setOffendingToken_7e5944a09eb25a4f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RecognitionException(jobject obj) : ::java::lang::RuntimeException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RecognitionException(const RecognitionException& obj) : ::java::lang::RuntimeException(obj) {}

          RecognitionException(const ::org::antlr::v4::runtime::Recognizer &, const ::org::antlr::v4::runtime::IntStream &, const ::org::antlr::v4::runtime::ParserRuleContext &);
          RecognitionException(const ::java::lang::String &, const ::org::antlr::v4::runtime::Recognizer &, const ::org::antlr::v4::runtime::IntStream &, const ::org::antlr::v4::runtime::ParserRuleContext &);

          ::org::antlr::v4::runtime::RuleContext getCtx() const;
          ::org::antlr::v4::runtime::IntStream getInputStream() const;
          jint getOffendingState() const;
          ::org::antlr::v4::runtime::Token getOffendingToken() const;
          ::org::antlr::v4::runtime::Recognizer getRecognizer() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        extern PyType_Def PY_TYPE_DEF(RecognitionException);
        extern PyTypeObject *PY_TYPE(RecognitionException);

        class t_RecognitionException {
        public:
          PyObject_HEAD
          RecognitionException object;
          static PyObject *wrap_Object(const RecognitionException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
