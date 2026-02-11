#ifndef org_apache_lucene_analysis_ja_JapaneseTokenizer$Type_H
#define org_apache_lucene_analysis_ja_JapaneseTokenizer$Type_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          class JapaneseTokenizer$Type;
        }
      }
    }
  }
}
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
        namespace ja {

          class JapaneseTokenizer$Type : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_c62a7ceac589d0b1,
              mid_values_8b9ba3955eb938d5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseTokenizer$Type(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseTokenizer$Type(const JapaneseTokenizer$Type& obj) : ::java::lang::Enum(obj) {}

            static JapaneseTokenizer$Type *KNOWN;
            static JapaneseTokenizer$Type *UNKNOWN;
            static JapaneseTokenizer$Type *USER;

            static JapaneseTokenizer$Type valueOf(const ::java::lang::String &);
            static JArray< JapaneseTokenizer$Type > values();
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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseTokenizer$Type);
          extern PyTypeObject *PY_TYPE(JapaneseTokenizer$Type);

          class t_JapaneseTokenizer$Type {
          public:
            PyObject_HEAD
            JapaneseTokenizer$Type object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_JapaneseTokenizer$Type *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const JapaneseTokenizer$Type&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const JapaneseTokenizer$Type&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
