#ifndef org_apache_lucene_analysis_hunspell_AffixedWord_H
#define org_apache_lucene_analysis_hunspell_AffixedWord_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          class DictEntry;
          class AffixedWord$Affix;
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

          class AffixedWord : public ::java::lang::Object {
           public:
            enum {
              mid_equals_6084f78e09b6c0c3,
              mid_getDictEntry_f19806a6a024c829,
              mid_getPrefixes_0bc66e960964b70a,
              mid_getSuffixes_0bc66e960964b70a,
              mid_getWord_dc633f13a47328a8,
              mid_hashCode_15aa3d485e96b665,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AffixedWord(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AffixedWord(const AffixedWord& obj) : ::java::lang::Object(obj) {}

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::analysis::hunspell::DictEntry getDictEntry() const;
            ::java::util::List getPrefixes() const;
            ::java::util::List getSuffixes() const;
            ::java::lang::String getWord() const;
            jint hashCode() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(AffixedWord);
          extern PyTypeObject *PY_TYPE(AffixedWord);

          class t_AffixedWord {
          public:
            PyObject_HEAD
            AffixedWord object;
            static PyObject *wrap_Object(const AffixedWord&);
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
