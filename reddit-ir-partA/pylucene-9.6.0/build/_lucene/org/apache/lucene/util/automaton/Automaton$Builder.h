#ifndef org_apache_lucene_util_automaton_Automaton$Builder_H
#define org_apache_lucene_util_automaton_Automaton$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Automaton;
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

          class Automaton$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_078cef180abf5351,
              mid_addEpsilon_078cef180abf5351,
              mid_addTransition_324f62b85ee857be,
              mid_addTransition_dfabecda8fb9b5ea,
              mid_copy_57f677c6e6973f50,
              mid_copyStates_57f677c6e6973f50,
              mid_createState_15aa3d485e96b665,
              mid_finish_944878750d69867f,
              mid_getNumStates_15aa3d485e96b665,
              mid_isAccept_92eccba87b045bbc,
              mid_setAccept_5a9df8809b7e2c79,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Automaton$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Automaton$Builder(const Automaton$Builder& obj) : ::java::lang::Object(obj) {}

            Automaton$Builder();
            Automaton$Builder(jint, jint);

            void addEpsilon(jint, jint) const;
            void addTransition(jint, jint, jint) const;
            void addTransition(jint, jint, jint, jint) const;
            void copy(const ::org::apache::lucene::util::automaton::Automaton &) const;
            void copyStates(const ::org::apache::lucene::util::automaton::Automaton &) const;
            jint createState() const;
            ::org::apache::lucene::util::automaton::Automaton finish() const;
            jint getNumStates() const;
            jboolean isAccept(jint) const;
            void setAccept(jint, jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(Automaton$Builder);
          extern PyTypeObject *PY_TYPE(Automaton$Builder);

          class t_Automaton$Builder {
          public:
            PyObject_HEAD
            Automaton$Builder object;
            static PyObject *wrap_Object(const Automaton$Builder&);
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
