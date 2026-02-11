#ifndef org_apache_lucene_search_highlight_TokenGroup_H
#define org_apache_lucene_search_highlight_TokenGroup_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
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
      namespace search {
        namespace highlight {

          class TokenGroup : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ceb0c1d5a3508f22,
              mid_getEndOffset_15aa3d485e96b665,
              mid_getNumTokens_15aa3d485e96b665,
              mid_getScore_cc3c9b7e666e88d5,
              mid_getStartOffset_15aa3d485e96b665,
              mid_getTotalScore_15cd8574741b1394,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenGroup(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TokenGroup(const TokenGroup& obj) : ::java::lang::Object(obj) {}

            TokenGroup(const ::org::apache::lucene::analysis::TokenStream &);

            jint getEndOffset() const;
            jint getNumTokens() const;
            jfloat getScore(jint) const;
            jint getStartOffset() const;
            jfloat getTotalScore() const;
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
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(TokenGroup);
          extern PyTypeObject *PY_TYPE(TokenGroup);

          class t_TokenGroup {
          public:
            PyObject_HEAD
            TokenGroup object;
            static PyObject *wrap_Object(const TokenGroup&);
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
