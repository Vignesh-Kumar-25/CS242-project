#ifndef org_apache_lucene_analysis_hunspell_Hunspell_H
#define org_apache_lucene_analysis_hunspell_Hunspell_H

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
          class EntrySuggestion;
          class SuggestionTimeoutException;
          class TimeoutPolicy;
          class AffixedWord;
          class Dictionary;
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

          class Hunspell : public ::java::lang::Object {
           public:
            enum {
              mid_init$_6629639588f78543,
              mid_init$_97ed1a1942680c2d,
              mid_analyzeSimpleWord_bfc101691731cf5d,
              mid_compress_d4be216a3a991ed4,
              mid_getAllWordForms_bfc101691731cf5d,
              mid_getRoots_bfc101691731cf5d,
              mid_spell_77e0b5c3eb1962ba,
              mid_suggest_bfc101691731cf5d,
              mid_suggest_9f0bee93f2832272,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Hunspell(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Hunspell(const Hunspell& obj) : ::java::lang::Object(obj) {}

            Hunspell(const ::org::apache::lucene::analysis::hunspell::Dictionary &);
            Hunspell(const ::org::apache::lucene::analysis::hunspell::Dictionary &, const ::org::apache::lucene::analysis::hunspell::TimeoutPolicy &, const ::java::lang::Runnable &);

            ::java::util::List analyzeSimpleWord(const ::java::lang::String &) const;
            ::org::apache::lucene::analysis::hunspell::EntrySuggestion compress(const ::java::util::List &) const;
            ::java::util::List getAllWordForms(const ::java::lang::String &) const;
            ::java::util::List getRoots(const ::java::lang::String &) const;
            jboolean spell(const ::java::lang::String &) const;
            ::java::util::List suggest(const ::java::lang::String &) const;
            ::java::util::List suggest(const ::java::lang::String &, jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(Hunspell);
          extern PyTypeObject *PY_TYPE(Hunspell);

          class t_Hunspell {
          public:
            PyObject_HEAD
            Hunspell object;
            static PyObject *wrap_Object(const Hunspell&);
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
