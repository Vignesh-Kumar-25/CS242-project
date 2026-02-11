#ifndef org_apache_lucene_queryparser_flexible_core_util_UnescapedCharSequence_H
#define org_apache_lucene_queryparser_flexible_core_util_UnescapedCharSequence_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class String;
    class Class;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace util {

              class UnescapedCharSequence : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_b00f79ee482db81d,
                  mid_init$_1140da077f94397b,
                  mid_charAt_c36d5d142dcfe0b2,
                  mid_length_15aa3d485e96b665,
                  mid_subSequence_d258919c83060ac0,
                  mid_toLowerCase_7c6707d7a82abe45,
                  mid_toString_dc633f13a47328a8,
                  mid_toStringEscaped_dc633f13a47328a8,
                  mid_toStringEscaped_4ca7828cf6cc172c,
                  mid_wasEscaped_92eccba87b045bbc,
                  mid_wasEscaped_cd49365a227032fc,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit UnescapedCharSequence(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                UnescapedCharSequence(const UnescapedCharSequence& obj) : ::java::lang::Object(obj) {}

                UnescapedCharSequence(const ::java::lang::CharSequence &);
                UnescapedCharSequence(const JArray< jchar > &, const JArray< jboolean > &, jint, jint);

                jchar charAt(jint) const;
                jint length() const;
                ::java::lang::CharSequence subSequence(jint, jint) const;
                static ::java::lang::CharSequence toLowerCase(const ::java::lang::CharSequence &, const ::java::util::Locale &);
                ::java::lang::String toString() const;
                ::java::lang::String toStringEscaped() const;
                ::java::lang::String toStringEscaped(const JArray< jchar > &) const;
                jboolean wasEscaped(jint) const;
                static jboolean wasEscaped(const ::java::lang::CharSequence &, jint);
              };
            }
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
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace util {
              extern PyType_Def PY_TYPE_DEF(UnescapedCharSequence);
              extern PyTypeObject *PY_TYPE(UnescapedCharSequence);

              class t_UnescapedCharSequence {
              public:
                PyObject_HEAD
                UnescapedCharSequence object;
                static PyObject *wrap_Object(const UnescapedCharSequence&);
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
}

#endif
