#ifndef org_apache_lucene_analysis_ja_dict_UserDictionary_H
#define org_apache_lucene_analysis_ja_dict_UserDictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class UserDictionary;
            class TokenInfoFST;
            class Dictionary;
          }
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class Reader;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {

            class UserDictionary : public ::java::lang::Object {
             public:
              enum {
                mid_getBaseForm_26362808ea52baa7,
                mid_getFST_2f437516565603a6,
                mid_getInflectionForm_78a7b318cefaee15,
                mid_getInflectionType_78a7b318cefaee15,
                mid_getLeftId_58b165b57740feff,
                mid_getPartOfSpeech_78a7b318cefaee15,
                mid_getPronunciation_26362808ea52baa7,
                mid_getReading_26362808ea52baa7,
                mid_getRightId_58b165b57740feff,
                mid_getWordCost_58b165b57740feff,
                mid_lookup_86e669c3ee913fae,
                mid_lookupSegmentation_cb0d338217babbd0,
                mid_open_cfc3ddcff4f16713,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UserDictionary(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              UserDictionary(const UserDictionary& obj) : ::java::lang::Object(obj) {}

              static jint LEFT_ID;
              static jint RIGHT_ID;
              static jint WORD_COST;

              ::java::lang::String getBaseForm(jint, const JArray< jchar > &, jint, jint) const;
              ::org::apache::lucene::analysis::ja::dict::TokenInfoFST getFST() const;
              ::java::lang::String getInflectionForm(jint) const;
              ::java::lang::String getInflectionType(jint) const;
              jint getLeftId(jint) const;
              ::java::lang::String getPartOfSpeech(jint) const;
              ::java::lang::String getPronunciation(jint, const JArray< jchar > &, jint, jint) const;
              ::java::lang::String getReading(jint, const JArray< jchar > &, jint, jint) const;
              jint getRightId(jint) const;
              jint getWordCost(jint) const;
              JArray< JArray< jint > > lookup(const JArray< jchar > &, jint, jint) const;
              JArray< jint > lookupSegmentation(jint) const;
              static UserDictionary open(const ::java::io::Reader &);
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
            extern PyType_Def PY_TYPE_DEF(UserDictionary);
            extern PyTypeObject *PY_TYPE(UserDictionary);

            class t_UserDictionary {
            public:
              PyObject_HEAD
              UserDictionary object;
              static PyObject *wrap_Object(const UserDictionary&);
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
