#ifndef org_apache_lucene_analysis_hunspell_NGramFragmentChecker_H
#define org_apache_lucene_analysis_hunspell_NGramFragmentChecker_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Runnable;
    class CharSequence;
    class Class;
  }
  namespace util {
    class Collection;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          class NGramFragmentChecker;
          class NGramFragmentChecker$NGramConsumer;
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

          class NGramFragmentChecker : public ::java::lang::Object {
           public:
            enum {
              mid_fromAllSimpleWords_4d94ec568267f560,
              mid_fromWords_b1f5073c56c14a41,
              mid_hasImpossibleFragmentAround_03470852261f3a90,
              mid_processNGrams_bce62d012e9b34eb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NGramFragmentChecker(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NGramFragmentChecker(const NGramFragmentChecker& obj) : ::java::lang::Object(obj) {}

            static NGramFragmentChecker fromAllSimpleWords(jint, const ::org::apache::lucene::analysis::hunspell::Dictionary &, const ::java::lang::Runnable &);
            static NGramFragmentChecker fromWords(jint, const ::java::util::Collection &);
            jboolean hasImpossibleFragmentAround(const ::java::lang::CharSequence &, jint, jint) const;
            static void processNGrams(jint, const ::org::apache::lucene::analysis::hunspell::Dictionary &, const ::java::lang::Runnable &, const ::org::apache::lucene::analysis::hunspell::NGramFragmentChecker$NGramConsumer &);
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
          extern PyType_Def PY_TYPE_DEF(NGramFragmentChecker);
          extern PyTypeObject *PY_TYPE(NGramFragmentChecker);

          class t_NGramFragmentChecker {
          public:
            PyObject_HEAD
            NGramFragmentChecker object;
            static PyObject *wrap_Object(const NGramFragmentChecker&);
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
