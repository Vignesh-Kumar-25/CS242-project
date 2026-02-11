#ifndef org_apache_lucene_search_suggest_document_TopSuggestDocsCollector_H
#define org_apache_lucene_search_suggest_document_TopSuggestDocsCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {
            class TopSuggestDocs;
          }
        }
        class ScoreMode;
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
          namespace document {

            class TopSuggestDocsCollector : public ::org::apache::lucene::search::SimpleCollector {
             public:
              enum {
                mid_init$_5a9df8809b7e2c79,
                mid_collect_da425451c8de636b,
                mid_collect_adf7431624c1db7f,
                mid_get_01e1a5fb36ecf0c7,
                mid_getCountToCollect_15aa3d485e96b665,
                mid_scoreMode_2c1f1f28428089a8,
                mid_doSetNextReader_c78364002bac1c56,
                mid_doSkipDuplicates_ee8b0a5fa521ddac,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TopSuggestDocsCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TopSuggestDocsCollector(const TopSuggestDocsCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

              TopSuggestDocsCollector(jint, jboolean);

              void collect(jint) const;
              void collect(jint, const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jfloat) const;
              ::org::apache::lucene::search::suggest::document::TopSuggestDocs get() const;
              jint getCountToCollect() const;
              ::org::apache::lucene::search::ScoreMode scoreMode() const;
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
            extern PyType_Def PY_TYPE_DEF(TopSuggestDocsCollector);
            extern PyTypeObject *PY_TYPE(TopSuggestDocsCollector);

            class t_TopSuggestDocsCollector {
            public:
              PyObject_HEAD
              TopSuggestDocsCollector object;
              static PyObject *wrap_Object(const TopSuggestDocsCollector&);
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
