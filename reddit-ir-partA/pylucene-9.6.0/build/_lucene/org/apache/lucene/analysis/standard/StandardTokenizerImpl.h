#ifndef org_apache_lucene_analysis_standard_StandardTokenizerImpl_H
#define org_apache_lucene_analysis_standard_StandardTokenizerImpl_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class CharTermAttribute;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class Reader;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace standard {

          class StandardTokenizerImpl : public ::java::lang::Object {
           public:
            enum {
              mid_init$_48be8a5844a4c6e0,
              mid_getNextToken_15aa3d485e96b665,
              mid_getText_de7dc237edced507,
              mid_setBufferSize_da425451c8de636b,
              mid_yyatEOF_ee8b0a5fa521ddac,
              mid_yybegin_da425451c8de636b,
              mid_yychar_15aa3d485e96b665,
              mid_yycharat_c36d5d142dcfe0b2,
              mid_yyclose_3353d9f14bbfd91a,
              mid_yylength_15aa3d485e96b665,
              mid_yypushback_da425451c8de636b,
              mid_yyreset_48be8a5844a4c6e0,
              mid_yystate_15aa3d485e96b665,
              mid_yytext_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StandardTokenizerImpl(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StandardTokenizerImpl(const StandardTokenizerImpl& obj) : ::java::lang::Object(obj) {}

            static jint EMOJI_TYPE;
            static jint HANGUL_TYPE;
            static jint HIRAGANA_TYPE;
            static jint IDEOGRAPHIC_TYPE;
            static jint KATAKANA_TYPE;
            static jint NUMERIC_TYPE;
            static jint SOUTH_EAST_ASIAN_TYPE;
            static jint WORD_TYPE;
            static jint YYEOF;
            static jint YYINITIAL;

            StandardTokenizerImpl(const ::java::io::Reader &);

            jint getNextToken() const;
            void getText(const ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute &) const;
            void setBufferSize(jint) const;
            jboolean yyatEOF() const;
            void yybegin(jint) const;
            jint yychar() const;
            jchar yycharat(jint) const;
            void yyclose() const;
            jint yylength() const;
            void yypushback(jint) const;
            void yyreset(const ::java::io::Reader &) const;
            jint yystate() const;
            ::java::lang::String yytext() const;
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
      namespace analysis {
        namespace standard {
          extern PyType_Def PY_TYPE_DEF(StandardTokenizerImpl);
          extern PyTypeObject *PY_TYPE(StandardTokenizerImpl);

          class t_StandardTokenizerImpl {
          public:
            PyObject_HEAD
            StandardTokenizerImpl object;
            static PyObject *wrap_Object(const StandardTokenizerImpl&);
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
