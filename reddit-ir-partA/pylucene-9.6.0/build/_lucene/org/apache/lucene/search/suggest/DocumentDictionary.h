#ifndef org_apache_lucene_search_suggest_DocumentDictionary_H
#define org_apache_lucene_search_suggest_DocumentDictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class Dictionary;
        }
        namespace suggest {
          class InputIterator;
        }
      }
      namespace index {
        class IndexReader;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          class DocumentDictionary : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7f7f6e3a0987217a,
              mid_init$_808cb79d97219867,
              mid_init$_3ed707217b2637c3,
              mid_getEntryIterator_8efa45c7da8b554b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocumentDictionary(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocumentDictionary(const DocumentDictionary& obj) : ::java::lang::Object(obj) {}

            DocumentDictionary(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::java::lang::String &);
            DocumentDictionary(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
            DocumentDictionary(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);

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
          extern PyType_Def PY_TYPE_DEF(DocumentDictionary);
          extern PyTypeObject *PY_TYPE(DocumentDictionary);

          class t_DocumentDictionary {
          public:
            PyObject_HEAD
            DocumentDictionary object;
            static PyObject *wrap_Object(const DocumentDictionary&);
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
