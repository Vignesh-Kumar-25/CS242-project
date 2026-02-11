#ifndef org_antlr_v4_runtime_Parser_H
#define org_antlr_v4_runtime_Parser_H

#include "org/antlr/v4/runtime/Recognizer.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
  }
  namespace io {
    class PrintStream;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class IntStream;
        class TokenStream;
        class TokenFactory;
        class ParserRuleContext;
        class Token;
        namespace atn {
          class ATN;
          class ParserATNSimulator;
          class ParseInfo;
        }
        class ANTLRErrorStrategy;
        class RecognitionException;
        class RuleContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class Parser : public ::org::antlr::v4::runtime::Recognizer {
         public:
          enum {
            mid_init$_3d6d82d24d87a9d2,
            mid_consume_5310b3c531063604,
            mid_dumpDFA_3353d9f14bbfd91a,
            mid_dumpDFA_b6308c09112257e7,
            mid_enterOuterAlt_d0066efe68d72c4e,
            mid_enterRecursionRule_d0066efe68d72c4e,
            mid_enterRecursionRule_34837947283adb94,
            mid_enterRule_1935dd739f6b7d90,
            mid_exitRule_3353d9f14bbfd91a,
            mid_getATNWithBypassAlts_aa3a1be8d931608b,
            mid_getBuildParseTree_ee8b0a5fa521ddac,
            mid_getContext_c4dfaea579a318cd,
            mid_getCurrentToken_5310b3c531063604,
            mid_getDFAStrings_0bc66e960964b70a,
            mid_getErrorHandler_861c73366c8bbbdc,
            mid_getInputStream_954764f723715c99,
            mid_getInvokingContext_a03c3490828be380,
            mid_getNumberOfSyntaxErrors_15aa3d485e96b665,
            mid_getParseInfo_bd092fdde04e38ec,
            mid_getPrecedence_15aa3d485e96b665,
            mid_getRuleContext_c4dfaea579a318cd,
            mid_getRuleIndex_08c5dabd7f8f1590,
            mid_getRuleInvocationStack_0bc66e960964b70a,
            mid_getRuleInvocationStack_7bfb7d47253152e0,
            mid_getSourceName_dc633f13a47328a8,
            mid_getTokenFactory_3e7f13dcd264f965,
            mid_getTokenStream_954764f723715c99,
            mid_getTrimParseTree_ee8b0a5fa521ddac,
            mid_inContext_77e0b5c3eb1962ba,
            mid_isExpectedToken_92eccba87b045bbc,
            mid_isMatchedEOF_ee8b0a5fa521ddac,
            mid_isTrace_ee8b0a5fa521ddac,
            mid_match_d2e83b8c39ee1182,
            mid_matchWildcard_5310b3c531063604,
            mid_notifyErrorListeners_4a883f7810d2effa,
            mid_notifyErrorListeners_dab1da33ed615378,
            mid_precpred_5eb2c3f25087678b,
            mid_pushNewRecursionContext_1935dd739f6b7d90,
            mid_removeParseListeners_3353d9f14bbfd91a,
            mid_reset_3353d9f14bbfd91a,
            mid_setBuildParseTree_4f96af910856b303,
            mid_setContext_35cefd2c23cb237b,
            mid_setErrorHandler_e284e5b677288453,
            mid_setInputStream_428c8b9bb61ddb53,
            mid_setProfile_4f96af910856b303,
            mid_setTokenFactory_a6f28c4ed9544ae7,
            mid_setTokenStream_3d6d82d24d87a9d2,
            mid_setTrace_4f96af910856b303,
            mid_setTrimParseTree_4f96af910856b303,
            mid_unrollRecursionContexts_35cefd2c23cb237b,
            mid_triggerExitRuleEvent_3353d9f14bbfd91a,
            mid_triggerEnterRuleEvent_3353d9f14bbfd91a,
            mid_addContextToParseTree_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Parser(jobject obj) : ::org::antlr::v4::runtime::Recognizer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Parser(const Parser& obj) : ::org::antlr::v4::runtime::Recognizer(obj) {}

          Parser(const ::org::antlr::v4::runtime::TokenStream &);

          ::org::antlr::v4::runtime::Token consume() const;
          void dumpDFA() const;
          void dumpDFA(const ::java::io::PrintStream &) const;
          void enterOuterAlt(const ::org::antlr::v4::runtime::ParserRuleContext &, jint) const;
          void enterRecursionRule(const ::org::antlr::v4::runtime::ParserRuleContext &, jint) const;
          void enterRecursionRule(const ::org::antlr::v4::runtime::ParserRuleContext &, jint, jint, jint) const;
          void enterRule(const ::org::antlr::v4::runtime::ParserRuleContext &, jint, jint) const;
          void exitRule() const;
          ::org::antlr::v4::runtime::atn::ATN getATNWithBypassAlts() const;
          jboolean getBuildParseTree() const;
          ::org::antlr::v4::runtime::ParserRuleContext getContext() const;
          ::org::antlr::v4::runtime::Token getCurrentToken() const;
          ::java::util::List getDFAStrings() const;
          ::org::antlr::v4::runtime::ANTLRErrorStrategy getErrorHandler() const;
          ::org::antlr::v4::runtime::TokenStream getInputStream() const;
          ::org::antlr::v4::runtime::ParserRuleContext getInvokingContext(jint) const;
          jint getNumberOfSyntaxErrors() const;
          ::org::antlr::v4::runtime::atn::ParseInfo getParseInfo() const;
          jint getPrecedence() const;
          ::org::antlr::v4::runtime::ParserRuleContext getRuleContext() const;
          jint getRuleIndex(const ::java::lang::String &) const;
          ::java::util::List getRuleInvocationStack() const;
          ::java::util::List getRuleInvocationStack(const ::org::antlr::v4::runtime::RuleContext &) const;
          ::java::lang::String getSourceName() const;
          ::org::antlr::v4::runtime::TokenFactory getTokenFactory() const;
          ::org::antlr::v4::runtime::TokenStream getTokenStream() const;
          jboolean getTrimParseTree() const;
          jboolean inContext(const ::java::lang::String &) const;
          jboolean isExpectedToken(jint) const;
          jboolean isMatchedEOF() const;
          jboolean isTrace() const;
          ::org::antlr::v4::runtime::Token match(jint) const;
          ::org::antlr::v4::runtime::Token matchWildcard() const;
          void notifyErrorListeners(const ::java::lang::String &) const;
          void notifyErrorListeners(const ::org::antlr::v4::runtime::Token &, const ::java::lang::String &, const ::org::antlr::v4::runtime::RecognitionException &) const;
          jboolean precpred(const ::org::antlr::v4::runtime::RuleContext &, jint) const;
          void pushNewRecursionContext(const ::org::antlr::v4::runtime::ParserRuleContext &, jint, jint) const;
          void removeParseListeners() const;
          void reset() const;
          void setBuildParseTree(jboolean) const;
          void setContext(const ::org::antlr::v4::runtime::ParserRuleContext &) const;
          void setErrorHandler(const ::org::antlr::v4::runtime::ANTLRErrorStrategy &) const;
          void setInputStream(const ::org::antlr::v4::runtime::IntStream &) const;
          void setProfile(jboolean) const;
          void setTokenFactory(const ::org::antlr::v4::runtime::TokenFactory &) const;
          void setTokenStream(const ::org::antlr::v4::runtime::TokenStream &) const;
          void setTrace(jboolean) const;
          void setTrimParseTree(jboolean) const;
          void unrollRecursionContexts(const ::org::antlr::v4::runtime::ParserRuleContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(Parser);
        extern PyTypeObject *PY_TYPE(Parser);

        class t_Parser {
        public:
          PyObject_HEAD
          Parser object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_Parser *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Parser&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Parser&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
