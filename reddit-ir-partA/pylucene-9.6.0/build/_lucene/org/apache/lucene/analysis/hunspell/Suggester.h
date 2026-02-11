#ifndef org_apache_lucene_analysis_hunspell_Suggester_H
#define org_apache_lucene_analysis_hunspell_Suggester_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Runnable;
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          class SuggestionTimeoutException;
          class Suggester;
          class Dictionary;
          class FragmentChecker;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {

          class Suggester : public ::java::lang::Object {
           public:
            enum {
              mid_init$_6629639588f78543,
              mid_suggestNoTimeout_15d0d193fd5dfbb7,
              mid_suggestWithTimeout_21b16f207cc86247,
              mid_withFragmentChecker_c5b3084e2603e3fa,
              mid_withSuggestibleEntryCache_71d5f1899c341cea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Suggester(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Suggester(const Suggester& obj) : ::java::lang::Object(obj) {}

            Suggester(const ::org::apache::lucene::analysis::hunspell::Dictionary &);

            ::java::util::List suggestNoTimeout(const ::java::lang::String &, const ::java::lang::Runnable &) const;
            ::java::util::List suggestWithTimeout(const ::java::lang::String &, jlong, const ::java::lang::Runnable &) const;
            Suggester withFragmentChecker(const ::org::apache::lucene::analysis::hunspell::FragmentChecker &) const;
            Suggester withSuggestibleEntryCache() const;
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
      namespace analysis {
        namespace hunspell {
          extern PyType_Def PY_TYPE_DEF(Suggester);
          extern PyTypeObject *PY_TYPE(Suggester);

          class t_Suggester {
          public:
            PyObject_HEAD
            Suggester object;
            static PyObject *wrap_Object(const Suggester&);
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
