#ifndef org_apache_lucene_analysis_compound_hyphenation_TernaryTree_H
#define org_apache_lucene_analysis_compound_hyphenation_TernaryTree_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class TernaryTree;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Cloneable;
    class String;
  }
  namespace util {
    class Enumeration;
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

            class TernaryTree : public ::java::lang::Object {
             public:
              enum {
                mid_balance_3353d9f14bbfd91a,
                mid_clone_402e7c4773894a2b,
                mid_find_08c5dabd7f8f1590,
                mid_find_2b0b4b7e30587253,
                mid_insert_0a744751caca0c00,
                mid_insert_a1ca91ea064aa1c6,
                mid_keys_1c290dc3d4f44086,
                mid_knows_77e0b5c3eb1962ba,
                mid_printStats_b6308c09112257e7,
                mid_size_15aa3d485e96b665,
                mid_strcmp_a7ea9b0b573e4591,
                mid_strcmp_8120dcf9c6026663,
                mid_strcpy_7c46d673af411211,
                mid_strlen_81979beed9bf74aa,
                mid_strlen_2b0b4b7e30587253,
                mid_trimToSize_3353d9f14bbfd91a,
                mid_insertBalanced_8ae8cb3e2e98195a,
                mid_init_3353d9f14bbfd91a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TernaryTree(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TernaryTree(const TernaryTree& obj) : ::java::lang::Object(obj) {}

              void balance() const;
              TernaryTree clone() const;
              jint find(const ::java::lang::String &) const;
              jint find(const JArray< jchar > &, jint) const;
              void insert(const ::java::lang::String &, jchar) const;
              void insert(const JArray< jchar > &, jint, jchar) const;
              ::java::util::Enumeration keys() const;
              jboolean knows(const ::java::lang::String &) const;
              void printStats(const ::java::io::PrintStream &) const;
              jint size() const;
              static jint strcmp(const ::java::lang::String &, const JArray< jchar > &, jint);
              static jint strcmp(const JArray< jchar > &, jint, const JArray< jchar > &, jint);
              static void strcpy(const JArray< jchar > &, jint, const JArray< jchar > &, jint);
              static jint strlen(const JArray< jchar > &);
              static jint strlen(const JArray< jchar > &, jint);
              void trimToSize() const;
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
            extern PyType_Def PY_TYPE_DEF(TernaryTree);
            extern PyTypeObject *PY_TYPE(TernaryTree);

            class t_TernaryTree {
            public:
              PyObject_HEAD
              TernaryTree object;
              static PyObject *wrap_Object(const TernaryTree&);
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
