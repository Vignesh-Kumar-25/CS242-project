#ifndef org_apache_lucene_analysis_ko_dict_BinaryDictionary_H
#define org_apache_lucene_analysis_ko_dict_BinaryDictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class Dictionary$Morpheme;
            class BinaryDictionary$ResourceScheme;
            class Dictionary;
          }
          class POS$Tag;
          class POS$Type;
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
        namespace ko {
          namespace dict {

            class BinaryDictionary : public ::java::lang::Object {
             public:
              enum {
                mid_getLeftId_58b165b57740feff,
                mid_getLeftPOS_c04b9357f431827e,
                mid_getMorphemes_90fc8911514bcc25,
                mid_getPOSType_4dfd440c26c8d08c,
                mid_getReading_78a7b318cefaee15,
                mid_getResource_6a18945415ef8a21,
                mid_getRightId_58b165b57740feff,
                mid_getRightPOS_c04b9357f431827e,
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
              static jint HAS_READING;
              static jint HAS_SINGLE_POS;
              static ::java::lang::String *POSDICT_FILENAME_SUFFIX;
              static ::java::lang::String *POSDICT_HEADER;
              static ::java::lang::String *TARGETMAP_FILENAME_SUFFIX;
              static ::java::lang::String *TARGETMAP_HEADER;
              static jint VERSION;

              jint getLeftId(jint) const;
              ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS(jint) const;
              JArray< ::org::apache::lucene::analysis::ko::dict::Dictionary$Morpheme > getMorphemes(jint, const JArray< jchar > &, jint, jint) const;
              ::org::apache::lucene::analysis::ko::POS$Type getPOSType(jint) const;
              ::java::lang::String getReading(jint) const;
              static ::java::io::InputStream getResource(const ::org::apache::lucene::analysis::ko::dict::BinaryDictionary$ResourceScheme &, const ::java::lang::String &);
              jint getRightId(jint) const;
              ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS(jint) const;
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
        namespace ko {
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
