#ifndef org_apache_lucene_search_spell_PlainTextDictionary_H
#define org_apache_lucene_search_spell_PlainTextDictionary_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class Reader;
    class IOException;
  }
  namespace lang {
    class Class;
  }
  namespace nio {
    namespace file {
      class Path;
    }
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
        namespace spell {

          class PlainTextDictionary : public ::java::lang::Object {
           public:
            enum {
              mid_init$_839363fac538f4b4,
              mid_init$_48be8a5844a4c6e0,
              mid_init$_9a1eff7d5b4532fc,
              mid_getEntryIterator_8efa45c7da8b554b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PlainTextDictionary(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PlainTextDictionary(const PlainTextDictionary& obj) : ::java::lang::Object(obj) {}

            PlainTextDictionary(const ::java::io::InputStream &);
            PlainTextDictionary(const ::java::io::Reader &);
            PlainTextDictionary(const ::java::nio::file::Path &);

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
        namespace spell {
          extern PyType_Def PY_TYPE_DEF(PlainTextDictionary);
          extern PyTypeObject *PY_TYPE(PlainTextDictionary);

          class t_PlainTextDictionary {
          public:
            PyObject_HEAD
            PlainTextDictionary object;
            static PyObject *wrap_Object(const PlainTextDictionary&);
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
