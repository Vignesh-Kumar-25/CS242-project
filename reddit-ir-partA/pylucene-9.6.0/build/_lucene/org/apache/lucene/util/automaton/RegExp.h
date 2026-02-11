#ifndef org_apache_lucene_util_automaton_RegExp_H
#define org_apache_lucene_util_automaton_RegExp_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class RegExp$Kind;
          class RegExp;
          class Automaton;
          class TooComplexToDeterminizeException;
          class AutomatonProvider;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Set;
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

          class RegExp : public ::java::lang::Object {
           public:
            enum {
              mid_init$_4a883f7810d2effa,
              mid_init$_751a1c1a1ca09c1d,
              mid_init$_abda226c13e53119,
              mid_getIdentifiers_9a625d56b67c7390,
              mid_getOriginalString_dc633f13a47328a8,
              mid_toAutomaton_944878750d69867f,
              mid_toAutomaton_871f70a05cabae15,
              mid_toAutomaton_c867040f2515a77b,
              mid_toAutomaton_613b919ede320ab5,
              mid_toString_dc633f13a47328a8,
              mid_toStringTree_dc633f13a47328a8,
              max_mid
            };

            enum {
              fid_c,
              fid_digits,
              fid_exp1,
              fid_exp2,
              fid_from,
              fid_kind,
              fid_max,
              fid_min,
              fid_s,
              fid_to,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RegExp(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RegExp(const RegExp& obj) : ::java::lang::Object(obj) {}

            static jint ALL;
            static jint ANYSTRING;
            static jint ASCII_CASE_INSENSITIVE;
            static jint AUTOMATON;
            static jint COMPLEMENT;
            static jint EMPTY;
            static jint INTERSECTION;
            static jint INTERVAL;
            static jint NONE;

            jint _get_c() const;
            jint _get_digits() const;
            RegExp _get_exp1() const;
            RegExp _get_exp2() const;
            jint _get_from() const;
            ::org::apache::lucene::util::automaton::RegExp$Kind _get_kind() const;
            jint _get_max() const;
            jint _get_min() const;
            ::java::lang::String _get_s() const;
            jint _get_to() const;

            RegExp(const ::java::lang::String &);
            RegExp(const ::java::lang::String &, jint);
            RegExp(const ::java::lang::String &, jint, jint);

            ::java::util::Set getIdentifiers() const;
            ::java::lang::String getOriginalString() const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton() const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton(jint) const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::java::util::Map &, jint) const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::org::apache::lucene::util::automaton::AutomatonProvider &, jint) const;
            ::java::lang::String toString() const;
            ::java::lang::String toStringTree() const;
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
          extern PyType_Def PY_TYPE_DEF(RegExp);
          extern PyTypeObject *PY_TYPE(RegExp);

          class t_RegExp {
          public:
            PyObject_HEAD
            RegExp object;
            static PyObject *wrap_Object(const RegExp&);
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
