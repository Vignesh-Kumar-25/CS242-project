#ifndef org_apache_lucene_search_suggest_FileDictionary_H
#define org_apache_lucene_search_suggest_FileDictionary_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class Reader;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          class InputIterator;
        }
        namespace spell {
          class Dictionary;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          class FileDictionary : public ::java::lang::Object {
           public:
            enum {
              mid_init$_839363fac538f4b4,
              mid_init$_48be8a5844a4c6e0,
              mid_init$_175db869ffd51f8e,
              mid_init$_b8b7fb51b6ff381f,
              mid_getEntryIterator_8efa45c7da8b554b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FileDictionary(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FileDictionary(const FileDictionary& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *DEFAULT_FIELD_DELIMITER;

            FileDictionary(const ::java::io::InputStream &);
            FileDictionary(const ::java::io::Reader &);
            FileDictionary(const ::java::io::InputStream &, const ::java::lang::String &);
            FileDictionary(const ::java::io::Reader &, const ::java::lang::String &);

            ::org::apache::lucene::search::suggest::InputIterator getEntryIterator() const;
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
      namespace search {
        namespace suggest {
          extern PyType_Def PY_TYPE_DEF(FileDictionary);
          extern PyTypeObject *PY_TYPE(FileDictionary);

          class t_FileDictionary {
          public:
            PyObject_HEAD
            FileDictionary object;
            static PyObject *wrap_Object(const FileDictionary&);
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
