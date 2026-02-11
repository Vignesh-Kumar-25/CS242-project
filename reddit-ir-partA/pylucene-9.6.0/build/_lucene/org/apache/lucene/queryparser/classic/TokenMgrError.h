#ifndef org_apache_lucene_queryparser_classic_TokenMgrError_H
#define org_apache_lucene_queryparser_classic_TokenMgrError_H

#include "java/lang/Error.h"

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
      namespace queryparser {
        namespace classic {

          class TokenMgrError : public ::java::lang::Error {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_751a1c1a1ca09c1d,
              mid_init$_82e9dc0f4bb203d2,
              mid_getMessage_dc633f13a47328a8,
              mid_addEscapes_04612c8360f09496,
              mid_LexicalErr_09d47b468a3a2c20,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenMgrError(jobject obj) : ::java::lang::Error(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TokenMgrError(const TokenMgrError& obj) : ::java::lang::Error(obj) {}

            static jint INVALID_LEXICAL_STATE;
            static jint LEXICAL_ERROR;
            static jint LOOP_DETECTED;
            static jint STATIC_LEXER_ERROR;

            TokenMgrError();
            TokenMgrError(const ::java::lang::String &, jint);
            TokenMgrError(jboolean, jint, jint, jint, const ::java::lang::String &, jint, jint);

            ::java::lang::String getMessage() const;
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
      namespace queryparser {
        namespace classic {
          extern PyType_Def PY_TYPE_DEF(TokenMgrError);
          extern PyTypeObject *PY_TYPE(TokenMgrError);

          class t_TokenMgrError {
          public:
            PyObject_HEAD
            TokenMgrError object;
            static PyObject *wrap_Object(const TokenMgrError&);
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
