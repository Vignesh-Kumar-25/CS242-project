#ifndef org_apache_lucene_analysis_ja_Token_H
#define org_apache_lucene_analysis_ja_Token_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          class JapaneseTokenizer$Type;
          namespace dict {
            class Dictionary;
          }
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
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {

          class Token : public ::java::lang::Object {
           public:
            enum {
              mid_init$_9ed05de45348eeb9,
              mid_getBaseForm_dc633f13a47328a8,
              mid_getInflectionForm_dc633f13a47328a8,
              mid_getInflectionType_dc633f13a47328a8,
              mid_getLength_15aa3d485e96b665,
              mid_getOffset_15aa3d485e96b665,
              mid_getPartOfSpeech_dc633f13a47328a8,
              mid_getPosition_15aa3d485e96b665,
              mid_getPositionLength_15aa3d485e96b665,
              mid_getPronunciation_dc633f13a47328a8,
              mid_getReading_dc633f13a47328a8,
              mid_getSurfaceForm_44e5186a889ad767,
              mid_getSurfaceFormString_dc633f13a47328a8,
              mid_getType_6a970f2445bf01cb,
              mid_isKnown_ee8b0a5fa521ddac,
              mid_isUnknown_ee8b0a5fa521ddac,
              mid_isUser_ee8b0a5fa521ddac,
              mid_setPositionLength_da425451c8de636b,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Token(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Token(const Token& obj) : ::java::lang::Object(obj) {}

            Token(jint, const JArray< jchar > &, jint, jint, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Type &, jint, const ::org::apache::lucene::analysis::ja::dict::Dictionary &);

            ::java::lang::String getBaseForm() const;
            ::java::lang::String getInflectionForm() const;
            ::java::lang::String getInflectionType() const;
            jint getLength() const;
            jint getOffset() const;
            ::java::lang::String getPartOfSpeech() const;
            jint getPosition() const;
            jint getPositionLength() const;
            ::java::lang::String getPronunciation() const;
            ::java::lang::String getReading() const;
            JArray< jchar > getSurfaceForm() const;
            ::java::lang::String getSurfaceFormString() const;
            ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Type getType() const;
            jboolean isKnown() const;
            jboolean isUnknown() const;
            jboolean isUser() const;
            void setPositionLength(jint) const;
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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(Token);
          extern PyTypeObject *PY_TYPE(Token);

          class t_Token {
          public:
            PyObject_HEAD
            Token object;
            static PyObject *wrap_Object(const Token&);
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
