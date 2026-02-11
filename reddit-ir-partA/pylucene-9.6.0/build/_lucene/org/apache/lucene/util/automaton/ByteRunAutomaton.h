#ifndef org_apache_lucene_util_automaton_ByteRunAutomaton_H
#define org_apache_lucene_util_automaton_ByteRunAutomaton_H

#include "org/apache/lucene/util/automaton/RunAutomaton.h"

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

          class ByteRunAutomaton : public ::org::apache::lucene::util::automaton::RunAutomaton {
           public:
            enum {
              mid_init$_57f677c6e6973f50,
              mid_init$_ee16e59728363e95,
              mid_run_6ddc6179b00e8137,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ByteRunAutomaton(jobject obj) : ::org::apache::lucene::util::automaton::RunAutomaton(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ByteRunAutomaton(const ByteRunAutomaton& obj) : ::org::apache::lucene::util::automaton::RunAutomaton(obj) {}

            ByteRunAutomaton(const ::org::apache::lucene::util::automaton::Automaton &);
            ByteRunAutomaton(const ::org::apache::lucene::util::automaton::Automaton &, jboolean, jint);

            jboolean run(const JArray< jbyte > &, jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(ByteRunAutomaton);
          extern PyTypeObject *PY_TYPE(ByteRunAutomaton);

          class t_ByteRunAutomaton {
          public:
            PyObject_HEAD
            ByteRunAutomaton object;
            static PyObject *wrap_Object(const ByteRunAutomaton&);
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
