#ifndef org_apache_lucene_index_AutomatonTermsEnum_H
#define org_apache_lucene_index_AutomatonTermsEnum_H

#include "org/apache/lucene/index/FilteredTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class CompiledAutomaton;
        }
      }
      namespace index {
        class TermsEnum;
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
      namespace index {

        class AutomatonTermsEnum : public ::org::apache::lucene::index::FilteredTermsEnum {
         public:
          enum {
            mid_init$_594200451de8e42c,
            mid_nextSeekTerm_0231fd9dce4d8773,
            mid_accept_6a86568f3717fe46,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AutomatonTermsEnum(jobject obj) : ::org::apache::lucene::index::FilteredTermsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AutomatonTermsEnum(const AutomatonTermsEnum& obj) : ::org::apache::lucene::index::FilteredTermsEnum(obj) {}

          AutomatonTermsEnum(const ::org::apache::lucene::index::TermsEnum &, const ::org::apache::lucene::util::automaton::CompiledAutomaton &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(AutomatonTermsEnum);
        extern PyTypeObject *PY_TYPE(AutomatonTermsEnum);

        class t_AutomatonTermsEnum {
        public:
          PyObject_HEAD
          AutomatonTermsEnum object;
          static PyObject *wrap_Object(const AutomatonTermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
