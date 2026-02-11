#ifndef org_antlr_v4_runtime_Recognizer_H
#define org_antlr_v4_runtime_Recognizer_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATNSimulator;
          class ParseInfo;
          class ATN;
        }
        class IntStream;
        class TokenFactory;
        class Token;
        class RecognitionException;
        class Vocabulary;
        class ANTLRErrorListener;
        class RuleContext;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class List;
  }
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class Recognizer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_action_47f9a727206dd9f6,
            mid_addErrorListener_6c87b91e8cc1fb71,
            mid_getATN_aa3a1be8d931608b,
            mid_getErrorHeader_16a302572a0b73b8,
            mid_getErrorListenerDispatch_eba689607933baa3,
            mid_getErrorListeners_0bc66e960964b70a,
            mid_getGrammarFileName_dc633f13a47328a8,
            mid_getInputStream_cc01c01fc3672711,
            mid_getInterpreter_7bb5aefe32b2d6b4,
            mid_getParseInfo_bd092fdde04e38ec,
            mid_getRuleIndexMap_19f838df22aacf85,
            mid_getRuleNames_995db70818ff4363,
            mid_getSerializedATN_dc633f13a47328a8,
            mid_getState_15aa3d485e96b665,
            mid_getTokenErrorDisplay_f0177a169c433010,
            mid_getTokenFactory_3e7f13dcd264f965,
            mid_getTokenNames_995db70818ff4363,
            mid_getTokenType_08c5dabd7f8f1590,
            mid_getTokenTypeMap_19f838df22aacf85,
            mid_getVocabulary_30d9acdf64bcaaf5,
            mid_precpred_5eb2c3f25087678b,
            mid_removeErrorListener_6c87b91e8cc1fb71,
            mid_removeErrorListeners_3353d9f14bbfd91a,
            mid_sempred_042ab54cbc8ad299,
            mid_setInputStream_428c8b9bb61ddb53,
            mid_setInterpreter_dc9ed29111aa4baa,
            mid_setState_da425451c8de636b,
            mid_setTokenFactory_a6f28c4ed9544ae7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Recognizer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Recognizer(const Recognizer& obj) : ::java::lang::Object(obj) {}

          static jint EOF;

          Recognizer();

          void action(const ::org::antlr::v4::runtime::RuleContext &, jint, jint) const;
          void addErrorListener(const ::org::antlr::v4::runtime::ANTLRErrorListener &) const;
          ::org::antlr::v4::runtime::atn::ATN getATN() const;
          ::java::lang::String getErrorHeader(const ::org::antlr::v4::runtime::RecognitionException &) const;
          ::org::antlr::v4::runtime::ANTLRErrorListener getErrorListenerDispatch() const;
          ::java::util::List getErrorListeners() const;
          ::java::lang::String getGrammarFileName() const;
          ::org::antlr::v4::runtime::IntStream getInputStream() const;
          ::org::antlr::v4::runtime::atn::ATNSimulator getInterpreter() const;
          ::org::antlr::v4::runtime::atn::ParseInfo getParseInfo() const;
          ::java::util::Map getRuleIndexMap() const;
          JArray< ::java::lang::String > getRuleNames() const;
          ::java::lang::String getSerializedATN() const;
          jint getState() const;
          ::java::lang::String getTokenErrorDisplay(const ::org::antlr::v4::runtime::Token &) const;
          ::org::antlr::v4::runtime::TokenFactory getTokenFactory() const;
          JArray< ::java::lang::String > getTokenNames() const;
          jint getTokenType(const ::java::lang::String &) const;
          ::java::util::Map getTokenTypeMap() const;
          ::org::antlr::v4::runtime::Vocabulary getVocabulary() const;
          jboolean precpred(const ::org::antlr::v4::runtime::RuleContext &, jint) const;
          void removeErrorListener(const ::org::antlr::v4::runtime::ANTLRErrorListener &) const;
          void removeErrorListeners() const;
          jboolean sempred(const ::org::antlr::v4::runtime::RuleContext &, jint, jint) const;
          void setInputStream(const ::org::antlr::v4::runtime::IntStream &) const;
          void setInterpreter(const ::org::antlr::v4::runtime::atn::ATNSimulator &) const;
          void setState(jint) const;
          void setTokenFactory(const ::org::antlr::v4::runtime::TokenFactory &) const;
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
        extern PyType_Def PY_TYPE_DEF(Recognizer);
        extern PyTypeObject *PY_TYPE(Recognizer);

        class t_Recognizer {
        public:
          PyObject_HEAD
          Recognizer object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_Recognizer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Recognizer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Recognizer&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
