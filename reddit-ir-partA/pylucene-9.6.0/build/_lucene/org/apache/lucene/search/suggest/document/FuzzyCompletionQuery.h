#ifndef org_apache_lucene_search_suggest_document_FuzzyCompletionQuery_H
#define org_apache_lucene_search_suggest_document_FuzzyCompletionQuery_H

#include "org/apache/lucene/search/suggest/document/PrefixCompletionQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        namespace suggest {
          class BitsProducer;
        }
        class ScoreMode;
        class Weight;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace index {
        class Term;
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
          namespace document {

            class FuzzyCompletionQuery : public ::org::apache::lucene::search::suggest::document::PrefixCompletionQuery {
             public:
              enum {
                mid_init$_0ab91e5343734ff7,
                mid_init$_3b983ba71bc500b5,
                mid_init$_fd96fd47a43177bb,
                mid_createWeight_9d45be3ef0fc5210,
                mid_getDeterminizeWorkLimit_15aa3d485e96b665,
                mid_getMaxEdits_15aa3d485e96b665,
                mid_getMinFuzzyLength_15aa3d485e96b665,
                mid_getNonFuzzyPrefix_15aa3d485e96b665,
                mid_isTranspositions_ee8b0a5fa521ddac,
                mid_isUnicodeAware_ee8b0a5fa521ddac,
                mid_toString_04612c8360f09496,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FuzzyCompletionQuery(jobject obj) : ::org::apache::lucene::search::suggest::document::PrefixCompletionQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FuzzyCompletionQuery(const FuzzyCompletionQuery& obj) : ::org::apache::lucene::search::suggest::document::PrefixCompletionQuery(obj) {}

              static jint DEFAULT_MAX_EDITS;
              static jint DEFAULT_MIN_FUZZY_LENGTH;
              static jint DEFAULT_NON_FUZZY_PREFIX;
              static jboolean DEFAULT_TRANSPOSITIONS;
              static jboolean DEFAULT_UNICODE_AWARE;

              FuzzyCompletionQuery(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::Term &);
              FuzzyCompletionQuery(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::search::suggest::BitsProducer &);
              FuzzyCompletionQuery(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::search::suggest::BitsProducer &, jint, jboolean, jint, jint, jboolean, jint);

              ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
              jint getDeterminizeWorkLimit() const;
              jint getMaxEdits() const;
              jint getMinFuzzyLength() const;
              jint getNonFuzzyPrefix() const;
              jboolean isTranspositions() const;
              jboolean isUnicodeAware() const;
              ::java::lang::String toString(const ::java::lang::String &) const;
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
            extern PyType_Def PY_TYPE_DEF(FuzzyCompletionQuery);
            extern PyTypeObject *PY_TYPE(FuzzyCompletionQuery);

            class t_FuzzyCompletionQuery {
            public:
              PyObject_HEAD
              FuzzyCompletionQuery object;
              static PyObject *wrap_Object(const FuzzyCompletionQuery&);
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
