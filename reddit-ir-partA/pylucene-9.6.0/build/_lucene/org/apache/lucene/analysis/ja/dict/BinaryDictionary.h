#ifndef org_apache_lucene_analysis_ja_dict_BinaryDictionary_H
#define org_apache_lucene_analysis_ja_dict_BinaryDictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class BinaryDictionary$ResourceScheme;
            class Dictionary;
          }
        }
      }
      namespace util {
        class IntsRef;
      }
    }
  }
}
namespace java {
  namespace io {
    class InputStream;
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

            class BinaryDictionary : public ::java::lang::Object {
             public:
              enum {
                mid_getBaseForm_26362808ea52baa7,
                mid_getInflectionForm_78a7b318cefaee15,
                mid_getInflectionType_78a7b318cefaee15,
                mid_getLeftId_58b165b57740feff,
                mid_getPartOfSpeech_78a7b318cefaee15,
                mid_getPronunciation_26362808ea52baa7,
                mid_getReading_26362808ea52baa7,
                mid_getResource_837cc3730b4e1278,
                mid_getRightId_58b165b57740feff,
                mid_getWordCost_58b165b57740feff,
                mid_lookupWordIds_ddbf38b4aac968f3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BinaryDictionary(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BinaryDictionary(const BinaryDictionary& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *DICT_FILENAME_SUFFIX;
              static ::java::lang::String *DICT_HEADER;
              static jint HAS_BASEFORM;
              static jint HAS_PRONUNCIATION;
              static jint HAS_READING;
              static ::java::lang::String *POSDICT_FILENAME_SUFFIX;
              static ::java::lang::String *POSDICT_HEADER;
              static ::java::lang::String *TARGETMAP_FILENAME_SUFFIX;
              static ::java::lang::String *TARGETMAP_HEADER;
              static jint VERSION;

              ::java::lang::String getBaseForm(jint, const JArray< jchar > &, jint, jint) const;
              ::java::lang::String getInflectionForm(jint) const;
              ::java::lang::String getInflectionType(jint) const;
              jint getLeftId(jint) const;
              ::java::lang::String getPartOfSpeech(jint) const;
              ::java::lang::String getPronunciation(jint, const JArray< jchar > &, jint, jint) const;
              ::java::lang::String getReading(jint, const JArray< jchar > &, jint, jint) const;
              static ::java::io::InputStream getResource(const ::org::apache::lucene::analysis::ja::dict::BinaryDictionary$ResourceScheme &, const ::java::lang::String &);
              jint getRightId(jint) const;
              jint getWordCost(jint) const;
              void lookupWordIds(jint, const ::org::apache::lucene::util::IntsRef &) const;
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
            extern PyType_Def PY_TYPE_DEF(BinaryDictionary);
            extern PyTypeObject *PY_TYPE(BinaryDictionary);

            class t_BinaryDictionary {
            public:
              PyObject_HEAD
              BinaryDictionary object;
              static PyObject *wrap_Object(const BinaryDictionary&);
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
