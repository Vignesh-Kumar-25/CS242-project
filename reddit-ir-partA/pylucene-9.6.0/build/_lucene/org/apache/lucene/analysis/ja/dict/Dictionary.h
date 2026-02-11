#ifndef org_apache_lucene_analysis_ja_dict_Dictionary_H
#define org_apache_lucene_analysis_ja_dict_Dictionary_H

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
        namespace ja {
          namespace dict {

            class Dictionary : public ::java::lang::Object {
             public:
              enum {
                mid_getBaseForm_26362808ea52baa7,
                mid_getInflectionForm_78a7b318cefaee15,
                mid_getInflectionType_78a7b318cefaee15,
                mid_getLeftId_58b165b57740feff,
                mid_getPartOfSpeech_78a7b318cefaee15,
                mid_getPronunciation_26362808ea52baa7,
                mid_getReading_26362808ea52baa7,
                mid_getRightId_58b165b57740feff,
                mid_getWordCost_58b165b57740feff,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Dictionary(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Dictionary(const Dictionary& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *INTERNAL_SEPARATOR;

              ::java::lang::String getBaseForm(jint, const JArray< jchar > &, jint, jint) const;
              ::java::lang::String getInflectionForm(jint) const;
              ::java::lang::String getInflectionType(jint) const;
              jint getLeftId(jint) const;
              ::java::lang::String getPartOfSpeech(jint) const;
              ::java::lang::String getPronunciation(jint, const JArray< jchar > &, jint, jint) const;
              ::java::lang::String getReading(jint, const JArray< jchar > &, jint, jint) const;
              jint getRightId(jint) const;
              jint getWordCost(jint) const;
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
        namespace ja {
          namespace dict {
            extern PyType_Def PY_TYPE_DEF(Dictionary);
            extern PyTypeObject *PY_TYPE(Dictionary);

            class t_Dictionary {
            public:
              PyObject_HEAD
              Dictionary object;
              static PyObject *wrap_Object(const Dictionary&);
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
