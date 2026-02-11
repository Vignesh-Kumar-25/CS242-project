#ifndef org_apache_lucene_util_automaton_Automaton_H
#define org_apache_lucene_util_automaton_Automaton_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Transition;
          class Automaton;
        }
        class Accountable;
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
      namespace util {
        namespace automaton {

          class Automaton : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_078cef180abf5351,
              mid_addEpsilon_078cef180abf5351,
              mid_addTransition_324f62b85ee857be,
              mid_addTransition_dfabecda8fb9b5ea,
              mid_copy_57f677c6e6973f50,
              mid_createState_15aa3d485e96b665,
              mid_finishState_3353d9f14bbfd91a,
              mid_getNextTransition_b510d0a5cb864ae4,
              mid_getNumStates_15aa3d485e96b665,
              mid_getNumTransitions_15aa3d485e96b665,
              mid_getNumTransitions_58b165b57740feff,
              mid_getSortedTransitions_55652f936f39136c,
              mid_getStartPoints_7880494ffe2d4089,
              mid_getTransition_a00dcca32f4fccb6,
              mid_initTransition_a69af9bda1f961c8,
              mid_isAccept_92eccba87b045bbc,
              mid_isDeterministic_ee8b0a5fa521ddac,
              mid_next_eec572f9a2115552,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_setAccept_5a9df8809b7e2c79,
              mid_step_cd4894667d94f4d3,
              mid_toDot_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Automaton(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Automaton(const Automaton& obj) : ::java::lang::Object(obj) {}

            Automaton();
            Automaton(jint, jint);

            void addEpsilon(jint, jint) const;
            void addTransition(jint, jint, jint) const;
            void addTransition(jint, jint, jint, jint) const;
            void copy(const Automaton &) const;
            jint createState() const;
            void finishState() const;
            void getNextTransition(const ::org::apache::lucene::util::automaton::Transition &) const;
            jint getNumStates() const;
            jint getNumTransitions() const;
            jint getNumTransitions(jint) const;
            JArray< JArray< ::org::apache::lucene::util::automaton::Transition > > getSortedTransitions() const;
            JArray< jint > getStartPoints() const;
            void getTransition(jint, jint, const ::org::apache::lucene::util::automaton::Transition &) const;
            jint initTransition(jint, const ::org::apache::lucene::util::automaton::Transition &) const;
            jboolean isAccept(jint) const;
            jboolean isDeterministic() const;
            jint next(const ::org::apache::lucene::util::automaton::Transition &, jint) const;
            jlong ramBytesUsed() const;
            void setAccept(jint, jboolean) const;
            jint step(jint, jint) const;
            ::java::lang::String toDot() const;
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
          extern PyType_Def PY_TYPE_DEF(Automaton);
          extern PyTypeObject *PY_TYPE(Automaton);

          class t_Automaton {
          public:
            PyObject_HEAD
            Automaton object;
            static PyObject *wrap_Object(const Automaton&);
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
