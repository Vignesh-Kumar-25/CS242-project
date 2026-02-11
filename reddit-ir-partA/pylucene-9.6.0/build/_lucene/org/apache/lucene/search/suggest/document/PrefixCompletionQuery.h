#ifndef org_apache_lucene_search_suggest_document_PrefixCompletionQuery_H
#define org_apache_lucene_search_suggest_document_PrefixCompletionQuery_H

#include "org/apache/lucene/search/suggest/document/CompletionQuery.h"

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
        class QueryVisitor;
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
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class PrefixCompletionQuery : public ::org::apache::lucene::search::suggest::document::CompletionQuery {
             public:
              enum {
                mid_init$_0ab91e5343734ff7,
                mid_init$_3b983ba71bc500b5,
                mid_createWeight_9d45be3ef0fc5210,
                mid_equals_6084f78e09b6c0c3,
                mid_getAnalyzer_2e5841967e4c0700,
                mid_hashCode_15aa3d485e96b665,
                mid_visit_fddfa57e96928ffc,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PrefixCompletionQuery(jobject obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PrefixCompletionQuery(const PrefixCompletionQuery& obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {}

              PrefixCompletionQuery(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::Term &);
              PrefixCompletionQuery(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::search::suggest::BitsProducer &);

              ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
              jint hashCode() const;
              void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
            extern PyType_Def PY_TYPE_DEF(PrefixCompletionQuery);
            extern PyTypeObject *PY_TYPE(PrefixCompletionQuery);

            class t_PrefixCompletionQuery {
            public:
              PyObject_HEAD
              PrefixCompletionQuery object;
              static PyObject *wrap_Object(const PrefixCompletionQuery&);
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
