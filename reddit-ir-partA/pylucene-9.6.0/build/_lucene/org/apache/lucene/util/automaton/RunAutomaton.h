#ifndef org_apache_lucene_util_automaton_RunAutomaton_H
#define org_apache_lucene_util_automaton_RunAutomaton_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
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
      namespace util {
        namespace automaton {

          class RunAutomaton : public ::java::lang::Object {
           public:
            enum {
              mid_equals_6084f78e09b6c0c3,
              mid_getCharIntervals_7880494ffe2d4089,
              mid_getSize_15aa3d485e96b665,
              mid_hashCode_15aa3d485e96b665,
              mid_isAccept_92eccba87b045bbc,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_step_cd4894667d94f4d3,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RunAutomaton(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RunAutomaton(const RunAutomaton& obj) : ::java::lang::Object(obj) {}

            jboolean equals(const ::java::lang::Object &) const;
            JArray< jint > getCharIntervals() const;
            jint getSize() const;
            jint hashCode() const;
            jboolean isAccept(jint) const;
            jlong ramBytesUsed() const;
            jint step(jint, jint) const;
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
      namespace util {
        namespace automaton {
          extern PyType_Def PY_TYPE_DEF(RunAutomaton);
          extern PyTypeObject *PY_TYPE(RunAutomaton);

          class t_RunAutomaton {
          public:
            PyObject_HEAD
            RunAutomaton object;
            static PyObject *wrap_Object(const RunAutomaton&);
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
