#ifndef org_apache_lucene_util_automaton_Automata_H
#define org_apache_lucene_util_automaton_Automata_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace automaton {
          class Automaton;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class IllegalArgumentException;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class Automata : public ::java::lang::Object {
           public:
            enum {
              mid_appendAnyChar_3cf2da1118f42bdc,
              mid_appendChar_d9a5d869684e780b,
              mid_makeAnyBinary_944878750d69867f,
              mid_makeAnyChar_944878750d69867f,
              mid_makeAnyString_944878750d69867f,
              mid_makeBinary_f2dc0f3512d7ddee,
              mid_makeBinaryInterval_93ee9ef5237fa36d,
              mid_makeChar_871f70a05cabae15,
              mid_makeCharRange_087e58291a9cb5f2,
              mid_makeDecimalInterval_553fe5e97eacdf58,
              mid_makeEmpty_944878750d69867f,
              mid_makeEmptyString_944878750d69867f,
              mid_makeNonEmptyBinary_944878750d69867f,
              mid_makeString_b1ccc8990c064c0b,
              mid_makeString_339f4abe43c98c7b,
              mid_makeStringUnion_2243079f888a1552,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Automata(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Automata(const Automata& obj) : ::java::lang::Object(obj) {}

            static jint appendAnyChar(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static jint appendChar(const ::org::apache::lucene::util::automaton::Automaton &, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeAnyBinary();
            static ::org::apache::lucene::util::automaton::Automaton makeAnyChar();
            static ::org::apache::lucene::util::automaton::Automaton makeAnyString();
            static ::org::apache::lucene::util::automaton::Automaton makeBinary(const ::org::apache::lucene::util::BytesRef &);
            static ::org::apache::lucene::util::automaton::Automaton makeBinaryInterval(const ::org::apache::lucene::util::BytesRef &, jboolean, const ::org::apache::lucene::util::BytesRef &, jboolean);
            static ::org::apache::lucene::util::automaton::Automaton makeChar(jint);
            static ::org::apache::lucene::util::automaton::Automaton makeCharRange(jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeDecimalInterval(jint, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeEmpty();
            static ::org::apache::lucene::util::automaton::Automaton makeEmptyString();
            static ::org::apache::lucene::util::automaton::Automaton makeNonEmptyBinary();
            static ::org::apache::lucene::util::automaton::Automaton makeString(const ::java::lang::String &);
            static ::org::apache::lucene::util::automaton::Automaton makeString(const JArray< jint > &, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeStringUnion(const ::java::util::Collection &);
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
          extern PyType_Def PY_TYPE_DEF(Automata);
          extern PyTypeObject *PY_TYPE(Automata);

          class t_Automata {
          public:
            PyObject_HEAD
            Automata object;
            static PyObject *wrap_Object(const Automata&);
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
