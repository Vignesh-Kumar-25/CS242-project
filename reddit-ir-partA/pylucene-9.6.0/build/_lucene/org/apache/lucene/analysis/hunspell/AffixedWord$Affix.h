#ifndef org_apache_lucene_analysis_hunspell_AffixedWord$Affix_H
#define org_apache_lucene_analysis_hunspell_AffixedWord$Affix_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {

          class AffixedWord$Affix : public ::java::lang::Object {
           public:
            enum {
              mid_equals_6084f78e09b6c0c3,
              mid_getFlag_dc633f13a47328a8,
              mid_hashCode_15aa3d485e96b665,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AffixedWord$Affix(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AffixedWord$Affix(const AffixedWord$Affix& obj) : ::java::lang::Object(obj) {}

            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getFlag() const;
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
          extern PyType_Def PY_TYPE_DEF(AffixedWord$Affix);
          extern PyTypeObject *PY_TYPE(AffixedWord$Affix);

          class t_AffixedWord$Affix {
          public:
            PyObject_HEAD
            AffixedWord$Affix object;
            static PyObject *wrap_Object(const AffixedWord$Affix&);
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
