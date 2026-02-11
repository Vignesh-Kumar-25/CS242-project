#ifndef org_apache_lucene_analysis_compound_hyphenation_HyphenationTree_H
#define org_apache_lucene_analysis_compound_hyphenation_HyphenationTree_H

#include "org/apache/lucene/analysis/compound/hyphenation/TernaryTree.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class Hyphenation;
            class PatternConsumer;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
  namespace util {
    class ArrayList;
  }
  namespace io {
    class PrintStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {

            class HyphenationTree : public ::org::apache::lucene::analysis::compound::hyphenation::TernaryTree {
             public:
              enum {
                mid_init$_3353d9f14bbfd91a,
                mid_addClass_4a883f7810d2effa,
                mid_addException_e0297e69e847a740,
                mid_addPattern_1c92f57e5f37bb8d,
                mid_findPattern_04612c8360f09496,
                mid_hyphenate_24948d4e9083919f,
                mid_hyphenate_e251c17347daa3f6,
                mid_printStats_b6308c09112257e7,
                mid_getValues_4b02f4de68fe5cae,
                mid_packValues_08c5dabd7f8f1590,
                mid_unpackValues_78a7b318cefaee15,
                mid_hstrcmp_8120dcf9c6026663,
                mid_searchPatterns_afb95bb4826ee1f7,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit HyphenationTree(jobject obj) : ::org::apache::lucene::analysis::compound::hyphenation::TernaryTree(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              HyphenationTree(const HyphenationTree& obj) : ::org::apache::lucene::analysis::compound::hyphenation::TernaryTree(obj) {}

              HyphenationTree();

              void addClass(const ::java::lang::String &) const;
              void addException(const ::java::lang::String &, const ::java::util::ArrayList &) const;
              void addPattern(const ::java::lang::String &, const ::java::lang::String &) const;
              ::java::lang::String findPattern(const ::java::lang::String &) const;
              ::org::apache::lucene::analysis::compound::hyphenation::Hyphenation hyphenate(const ::java::lang::String &, jint, jint) const;
              ::org::apache::lucene::analysis::compound::hyphenation::Hyphenation hyphenate(const JArray< jchar > &, jint, jint, jint, jint) const;
              void printStats(const ::java::io::PrintStream &) const;
            };
          }
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
        namespace compound {
          namespace hyphenation {
            extern PyType_Def PY_TYPE_DEF(HyphenationTree);
            extern PyTypeObject *PY_TYPE(HyphenationTree);

            class t_HyphenationTree {
            public:
              PyObject_HEAD
              HyphenationTree object;
              static PyObject *wrap_Object(const HyphenationTree&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
