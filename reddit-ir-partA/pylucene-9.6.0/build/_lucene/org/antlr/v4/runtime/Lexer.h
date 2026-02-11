#ifndef org_antlr_v4_runtime_Lexer_H
#define org_antlr_v4_runtime_Lexer_H

#include "org/antlr/v4/runtime/Recognizer.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class TokenSource;
        class IntStream;
        class Token;
        class CharStream;
        namespace atn {
          class LexerATNSimulator;
        }
        class TokenFactory;
        class RecognitionException;
        class LexerNoViableAltException;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Integer;
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

        class Lexer : public ::org::antlr::v4::runtime::Recognizer {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_c6d6bdfa43ad8d9f,
            mid_emit_5310b3c531063604,
            mid_emit_7e5944a09eb25a4f,
            mid_emitEOF_5310b3c531063604,
            mid_getAllTokens_0bc66e960964b70a,
            mid_getChannel_15aa3d485e96b665,
            mid_getChannelNames_995db70818ff4363,
            mid_getCharErrorDisplay_78a7b318cefaee15,
            mid_getCharIndex_15aa3d485e96b665,
            mid_getCharPositionInLine_15aa3d485e96b665,
            mid_getErrorDisplay_04612c8360f09496,
            mid_getErrorDisplay_78a7b318cefaee15,
            mid_getInputStream_f7429cdc16997dec,
            mid_getLine_15aa3d485e96b665,
            mid_getModeNames_995db70818ff4363,
            mid_getSourceName_dc633f13a47328a8,
            mid_getText_dc633f13a47328a8,
            mid_getToken_5310b3c531063604,
            mid_getTokenFactory_3e7f13dcd264f965,
            mid_getTokenNames_995db70818ff4363,
            mid_getType_15aa3d485e96b665,
            mid_mode_da425451c8de636b,
            mid_more_3353d9f14bbfd91a,
            mid_nextToken_5310b3c531063604,
            mid_notifyListeners_5081d443bfca9ab1,
            mid_popMode_15aa3d485e96b665,
            mid_pushMode_da425451c8de636b,
            mid_recover_5081d443bfca9ab1,
            mid_recover_2bbff1df3c1fc8aa,
            mid_reset_3353d9f14bbfd91a,
            mid_setChannel_da425451c8de636b,
            mid_setCharPositionInLine_da425451c8de636b,
            mid_setInputStream_428c8b9bb61ddb53,
            mid_setLine_da425451c8de636b,
            mid_setText_4a883f7810d2effa,
            mid_setToken_7e5944a09eb25a4f,
            mid_setTokenFactory_a6f28c4ed9544ae7,
            mid_setType_da425451c8de636b,
            mid_skip_3353d9f14bbfd91a,
            max_mid
          };

          enum {
            fid__channel,
            fid__hitEOF,
            fid__input,
            fid__mode,
            fid__text,
            fid__token,
            fid__tokenStartCharIndex,
            fid__tokenStartCharPositionInLine,
            fid__tokenStartLine,
            fid__type,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Lexer(jobject obj) : ::org::antlr::v4::runtime::Recognizer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Lexer(const Lexer& obj) : ::org::antlr::v4::runtime::Recognizer(obj) {}

          static jint DEFAULT_MODE;
          static jint DEFAULT_TOKEN_CHANNEL;
          static jint HIDDEN;
          static jint MAX_CHAR_VALUE;
          static jint MIN_CHAR_VALUE;
          static jint MORE;
          static jint SKIP;

          jint _get__channel() const;
          void _set__channel(jint) const;
          jboolean _get__hitEOF() const;
          void _set__hitEOF(jboolean) const;
          ::org::antlr::v4::runtime::CharStream _get__input() const;
          void _set__input(const ::org::antlr::v4::runtime::CharStream &) const;
          jint _get__mode() const;
          void _set__mode(jint) const;
          ::java::lang::String _get__text() const;
          void _set__text(const ::java::lang::String &) const;
          ::org::antlr::v4::runtime::Token _get__token() const;
          void _set__token(const ::org::antlr::v4::runtime::Token &) const;
          jint _get__tokenStartCharIndex() const;
          void _set__tokenStartCharIndex(jint) const;
          jint _get__tokenStartCharPositionInLine() const;
          void _set__tokenStartCharPositionInLine(jint) const;
          jint _get__tokenStartLine() const;
          void _set__tokenStartLine(jint) const;
          jint _get__type() const;
          void _set__type(jint) const;

          Lexer();
          Lexer(const ::org::antlr::v4::runtime::CharStream &);

          ::org::antlr::v4::runtime::Token emit() const;
          void emit(const ::org::antlr::v4::runtime::Token &) const;
          ::org::antlr::v4::runtime::Token emitEOF() const;
          ::java::util::List getAllTokens() const;
          jint getChannel() const;
          JArray< ::java::lang::String > getChannelNames() const;
          ::java::lang::String getCharErrorDisplay(jint) const;
          jint getCharIndex() const;
          jint getCharPositionInLine() const;
          ::java::lang::String getErrorDisplay(const ::java::lang::String &) const;
          ::java::lang::String getErrorDisplay(jint) const;
          ::org::antlr::v4::runtime::CharStream getInputStream() const;
          jint getLine() const;
          JArray< ::java::lang::String > getModeNames() const;
          ::java::lang::String getSourceName() const;
          ::java::lang::String getText() const;
          ::org::antlr::v4::runtime::Token getToken() const;
          ::org::antlr::v4::runtime::TokenFactory getTokenFactory() const;
          JArray< ::java::lang::String > getTokenNames() const;
          jint getType() const;
          void mode(jint) const;
          void more() const;
          ::org::antlr::v4::runtime::Token nextToken() const;
          void notifyListeners(const ::org::antlr::v4::runtime::LexerNoViableAltException &) const;
          jint popMode() const;
          void pushMode(jint) const;
          void recover(const ::org::antlr::v4::runtime::LexerNoViableAltException &) const;
          void recover(const ::org::antlr::v4::runtime::RecognitionException &) const;
          void reset() const;
          void setChannel(jint) const;
          void setCharPositionInLine(jint) const;
          void setInputStream(const ::org::antlr::v4::runtime::IntStream &) const;
          void setLine(jint) const;
          void setText(const ::java::lang::String &) const;
          void setToken(const ::org::antlr::v4::runtime::Token &) const;
          void setTokenFactory(const ::org::antlr::v4::runtime::TokenFactory &) const;
          void setType(jint) const;
          void skip() const;
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
        extern PyType_Def PY_TYPE_DEF(Lexer);
        extern PyTypeObject *PY_TYPE(Lexer);

        class t_Lexer {
        public:
          PyObject_HEAD
          Lexer object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_Lexer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Lexer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Lexer&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
