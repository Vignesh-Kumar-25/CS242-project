#ifndef org_apache_lucene_search_suggest_document_SuggestIndexSearcher_H
#define org_apache_lucene_search_suggest_document_SuggestIndexSearcher_H

#include "org/apache/lucene/search/IndexSearcher.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {
            class TopSuggestDocs;
            class TopSuggestDocsCollector;
            class CompletionQuery;
          }
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class SuggestIndexSearcher : public ::org::apache::lucene::search::IndexSearcher {
             public:
              enum {
                mid_init$_f48a27e209678b8f,
                mid_suggest_54b5ac50844f362d,
                mid_suggest_1520502675b8f2bb,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SuggestIndexSearcher(jobject obj) : ::org::apache::lucene::search::IndexSearcher(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SuggestIndexSearcher(const SuggestIndexSearcher& obj) : ::org::apache::lucene::search::IndexSearcher(obj) {}

              SuggestIndexSearcher(const ::org::apache::lucene::index::IndexReader &);

              void suggest(const ::org::apache::lucene::search::suggest::document::CompletionQuery &, const ::org::apache::lucene::search::suggest::document::TopSuggestDocsCollector &) const;
              ::org::apache::lucene::search::suggest::document::TopSuggestDocs suggest(const ::org::apache::lucene::search::suggest::document::CompletionQuery &, jint, jboolean) const;
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
            extern PyType_Def PY_TYPE_DEF(SuggestIndexSearcher);
            extern PyTypeObject *PY_TYPE(SuggestIndexSearcher);

            class t_SuggestIndexSearcher {
            public:
              PyObject_HEAD
              SuggestIndexSearcher object;
              static PyObject *wrap_Object(const SuggestIndexSearcher&);
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
