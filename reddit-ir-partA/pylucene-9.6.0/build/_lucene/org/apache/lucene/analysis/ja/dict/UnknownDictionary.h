#ifndef org_apache_lucene_analysis_ja_dict_UnknownDictionary_H
#define org_apache_lucene_analysis_ja_dict_UnknownDictionary_H

#include "org/apache/lucene/analysis/ja/dict/BinaryDictionary.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class BinaryDictionary$ResourceScheme;
            class UnknownDictionary;
            class CharacterDefinition;
          }
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {

            class UnknownDictionary : public ::org::apache::lucene::analysis::ja::dict::BinaryDictionary {
             public:
              enum {
                mid_init$_6edb8f004948c3c8,
                mid_init$_2e6989d5b02a2154,
                mid_getCharacterDefinition_09d8b176921a8037,
                mid_getInflectionForm_78a7b318cefaee15,
                mid_getInflectionType_78a7b318cefaee15,
                mid_getInstance_f922c9e78e6bca29,
                mid_getReading_26362808ea52baa7,
                mid_lookup_cb7d7dc978d108f2,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UnknownDictionary(jobject obj) : ::org::apache::lucene::analysis::ja::dict::BinaryDictionary(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              UnknownDictionary(const UnknownDictionary& obj) : ::org::apache::lucene::analysis::ja::dict::BinaryDictionary(obj) {}

              UnknownDictionary(const ::org::apache::lucene::analysis::ja::dict::BinaryDictionary$ResourceScheme &, const ::java::lang::String &);
              UnknownDictionary(const ::java::nio::file::Path &, const ::java::nio::file::Path &, const ::java::nio::file::Path &);

              ::org::apache::lucene::analysis::ja::dict::CharacterDefinition getCharacterDefinition() const;
              ::java::lang::String getInflectionForm(jint) const;
              ::java::lang::String getInflectionType(jint) const;
              static UnknownDictionary getInstance();
              ::java::lang::String getReading(jint, const JArray< jchar > &, jint, jint) const;
              jint lookup(const JArray< jchar > &, jint, jint) const;
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
            extern PyType_Def PY_TYPE_DEF(UnknownDictionary);
            extern PyTypeObject *PY_TYPE(UnknownDictionary);

            class t_UnknownDictionary {
            public:
              PyObject_HEAD
              UnknownDictionary object;
              static PyObject *wrap_Object(const UnknownDictionary&);
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
