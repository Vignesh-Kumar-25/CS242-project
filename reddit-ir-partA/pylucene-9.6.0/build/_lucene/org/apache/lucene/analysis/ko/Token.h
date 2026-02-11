#ifndef org_apache_lucene_analysis_ko_Token_H
#define org_apache_lucene_analysis_ko_Token_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class Dictionary$Morpheme;
          }
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

          class Token : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b7d4c73470dff8d5,
              mid_getEndOffset_15aa3d485e96b665,
              mid_getLeftPOS_02d0f8d7f9a17adc,
              mid_getLength_15aa3d485e96b665,
              mid_getMorphemes_6201ada496967bd0,
              mid_getOffset_15aa3d485e96b665,
              mid_getPOSType_0a9c06ad5d003288,
              mid_getPositionIncrement_15aa3d485e96b665,
              mid_getPositionLength_15aa3d485e96b665,
              mid_getReading_dc633f13a47328a8,
              mid_getRightPOS_02d0f8d7f9a17adc,
              mid_getStartOffset_15aa3d485e96b665,
              mid_getSurfaceForm_44e5186a889ad767,
              mid_getSurfaceFormString_dc633f13a47328a8,
              mid_setPositionIncrement_da425451c8de636b,
              mid_setPositionLength_da425451c8de636b,
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

            Token(const JArray< jchar > &, jint, jint, jint, jint);

            jint getEndOffset() const;
            ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS() const;
            jint getLength() const;
            JArray< ::org::apache::lucene::analysis::ko::dict::Dictionary$Morpheme > getMorphemes() const;
            jint getOffset() const;
            ::org::apache::lucene::analysis::ko::POS$Type getPOSType() const;
            jint getPositionIncrement() const;
            jint getPositionLength() const;
            ::java::lang::String getReading() const;
            ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS() const;
            jint getStartOffset() const;
            JArray< jchar > getSurfaceForm() const;
            ::java::lang::String getSurfaceFormString() const;
            void setPositionIncrement(jint) const;
            void setPositionLength(jint) const;
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
