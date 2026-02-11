#ifndef org_apache_lucene_analysis_ko_DecompoundToken_H
#define org_apache_lucene_analysis_ko_DecompoundToken_H

#include "org/apache/lucene/analysis/ko/Token.h"

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

          class DecompoundToken : public ::org::apache::lucene::analysis::ko::Token {
           public:
            enum {
              mid_init$_44e6e94696f15649,
              mid_getLeftPOS_02d0f8d7f9a17adc,
              mid_getMorphemes_6201ada496967bd0,
              mid_getPOSType_0a9c06ad5d003288,
              mid_getReading_dc633f13a47328a8,
              mid_getRightPOS_02d0f8d7f9a17adc,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DecompoundToken(jobject obj) : ::org::apache::lucene::analysis::ko::Token(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DecompoundToken(const DecompoundToken& obj) : ::org::apache::lucene::analysis::ko::Token(obj) {}

            DecompoundToken(const ::org::apache::lucene::analysis::ko::POS$Tag &, const ::java::lang::String &, jint, jint);

            ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS() const;
            JArray< ::org::apache::lucene::analysis::ko::dict::Dictionary$Morpheme > getMorphemes() const;
            ::org::apache::lucene::analysis::ko::POS$Type getPOSType() const;
            ::java::lang::String getReading() const;
            ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS() const;
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
          extern PyType_Def PY_TYPE_DEF(DecompoundToken);
          extern PyTypeObject *PY_TYPE(DecompoundToken);

          class t_DecompoundToken {
          public:
            PyObject_HEAD
            DecompoundToken object;
            static PyObject *wrap_Object(const DecompoundToken&);
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
