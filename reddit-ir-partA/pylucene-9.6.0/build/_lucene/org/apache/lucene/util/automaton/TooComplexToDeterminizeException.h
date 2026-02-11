#ifndef org_apache_lucene_util_automaton_TooComplexToDeterminizeException_H
#define org_apache_lucene_util_automaton_TooComplexToDeterminizeException_H

#include "java/lang/RuntimeException.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Automaton;
          class TooComplexToDeterminizeException;
          class RegExp;
        }
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
      namespace util {
        namespace automaton {

          class TooComplexToDeterminizeException : public ::java::lang::RuntimeException {
           public:
            enum {
              mid_init$_88352a5820b03831,
              mid_init$_53410d98e5b0efca,
              mid_getAutomaton_944878750d69867f,
              mid_getDeterminizeWorkLimit_15aa3d485e96b665,
              mid_getRegExp_f628b2702d313d0f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TooComplexToDeterminizeException(jobject obj) : ::java::lang::RuntimeException(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TooComplexToDeterminizeException(const TooComplexToDeterminizeException& obj) : ::java::lang::RuntimeException(obj) {}

            TooComplexToDeterminizeException(const ::org::apache::lucene::util::automaton::RegExp &, const TooComplexToDeterminizeException &);
            TooComplexToDeterminizeException(const ::org::apache::lucene::util::automaton::Automaton &, jint);

            ::org::apache::lucene::util::automaton::Automaton getAutomaton() const;
            jint getDeterminizeWorkLimit() const;
            ::org::apache::lucene::util::automaton::RegExp getRegExp() const;
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
      namespace util {
        namespace automaton {
          extern PyType_Def PY_TYPE_DEF(TooComplexToDeterminizeException);
          extern PyTypeObject *PY_TYPE(TooComplexToDeterminizeException);

          class t_TooComplexToDeterminizeException {
          public:
            PyObject_HEAD
            TooComplexToDeterminizeException object;
            static PyObject *wrap_Object(const TooComplexToDeterminizeException&);
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
