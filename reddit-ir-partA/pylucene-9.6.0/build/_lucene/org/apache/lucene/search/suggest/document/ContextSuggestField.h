#ifndef org_apache_lucene_search_suggest_document_ContextSuggestField_H
#define org_apache_lucene_search_suggest_document_ContextSuggestField_H

#include "org/apache/lucene/search/suggest/document/SuggestField.h"

namespace java {
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
      namespace search {
        namespace suggest {
          namespace document {

            class ContextSuggestField : public ::org::apache::lucene::search::suggest::document::SuggestField {
             public:
              enum {
                mid_init$_c9d89bb41fe7f598,
                mid_wrapTokenStream_134ec048f6781932,
                mid_contexts_d5b0a7b20fe07dd6,
                mid_type_9fe2c7e31d2bc1ae,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ContextSuggestField(jobject obj) : ::org::apache::lucene::search::suggest::document::SuggestField(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ContextSuggestField(const ContextSuggestField& obj) : ::org::apache::lucene::search::suggest::document::SuggestField(obj) {}

              static jint CONTEXT_SEPARATOR;

              ContextSuggestField(const ::java::lang::String &, const ::java::lang::String &, jint, const JArray< ::java::lang::CharSequence > &);
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
      namespace search {
        namespace suggest {
          namespace document {
            extern PyType_Def PY_TYPE_DEF(ContextSuggestField);
            extern PyTypeObject *PY_TYPE(ContextSuggestField);

            class t_ContextSuggestField {
            public:
              PyObject_HEAD
              ContextSuggestField object;
              static PyObject *wrap_Object(const ContextSuggestField&);
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
