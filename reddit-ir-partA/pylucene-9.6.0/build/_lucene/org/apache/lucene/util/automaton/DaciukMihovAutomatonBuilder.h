#ifndef org_apache_lucene_util_automaton_DaciukMihovAutomatonBuilder_H
#define org_apache_lucene_util_automaton_DaciukMihovAutomatonBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class CharsRef;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class DaciukMihovAutomatonBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_add_6eaf80a5dcf8e709,
              mid_build_2243079f888a1552,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DaciukMihovAutomatonBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DaciukMihovAutomatonBuilder(const DaciukMihovAutomatonBuilder& obj) : ::java::lang::Object(obj) {}

            static jint MAX_TERM_LENGTH;

            void add(const ::org::apache::lucene::util::CharsRef &) const;
            static ::org::apache::lucene::util::automaton::Automaton build(const ::java::util::Collection &);
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
          extern PyType_Def PY_TYPE_DEF(DaciukMihovAutomatonBuilder);
          extern PyTypeObject *PY_TYPE(DaciukMihovAutomatonBuilder);

          class t_DaciukMihovAutomatonBuilder {
          public:
            PyObject_HEAD
            DaciukMihovAutomatonBuilder object;
            static PyObject *wrap_Object(const DaciukMihovAutomatonBuilder&);
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
