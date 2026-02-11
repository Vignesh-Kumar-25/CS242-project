#ifndef org_apache_lucene_analysis_ko_DictionaryToken_H
#define org_apache_lucene_analysis_ko_DictionaryToken_H

#include "org/apache/lucene/analysis/ko/Token.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class Dictionary$Morpheme;
            class Dictionary;
          }
          class KoreanTokenizer$Type;
          class POS$Tag;
          class POS$Type;
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
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {

          class DictionaryToken : public ::org::apache::lucene::analysis::ko::Token {
           public:
            enum {
              mid_init$_7a74e569aa5756fc,
              mid_getLeftPOS_02d0f8d7f9a17adc,
              mid_getMorphemes_6201ada496967bd0,
              mid_getPOSType_0a9c06ad5d003288,
              mid_getReading_dc633f13a47328a8,
              mid_getRightPOS_02d0f8d7f9a17adc,
              mid_getType_a82e714f0179c326,
              mid_isKnown_ee8b0a5fa521ddac,
              mid_isUnknown_ee8b0a5fa521ddac,
              mid_isUser_ee8b0a5fa521ddac,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DictionaryToken(jobject obj) : ::org::apache::lucene::analysis::ko::Token(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DictionaryToken(const DictionaryToken& obj) : ::org::apache::lucene::analysis::ko::Token(obj) {}

            DictionaryToken(const ::org::apache::lucene::analysis::ko::KoreanTokenizer$Type &, const ::org::apache::lucene::analysis::ko::dict::Dictionary &, jint, const JArray< jchar > &, jint, jint, jint, jint);

            ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS() const;
            JArray< ::org::apache::lucene::analysis::ko::dict::Dictionary$Morpheme > getMorphemes() const;
            ::org::apache::lucene::analysis::ko::POS$Type getPOSType() const;
            ::java::lang::String getReading() const;
            ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS() const;
            ::org::apache::lucene::analysis::ko::KoreanTokenizer$Type getType() const;
            jboolean isKnown() const;
            jboolean isUnknown() const;
            jboolean isUser() const;
            ::java::lang::String toString() const;
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
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(DictionaryToken);
          extern PyTypeObject *PY_TYPE(DictionaryToken);

          class t_DictionaryToken {
          public:
            PyObject_HEAD
            DictionaryToken object;
            static PyObject *wrap_Object(const DictionaryToken&);
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
