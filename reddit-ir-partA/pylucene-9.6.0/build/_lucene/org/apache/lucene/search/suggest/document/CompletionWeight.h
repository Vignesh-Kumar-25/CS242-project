#ifndef org_apache_lucene_search_suggest_document_CompletionWeight_H
#define org_apache_lucene_search_suggest_document_CompletionWeight_H

#include "org/apache/lucene/search/Weight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
        class Scorer;
        class BulkScorer;
        namespace suggest {
          namespace document {
            class CompletionQuery;
          }
        }
      }
      namespace util {
        namespace automaton {
          class Automaton;
        }
      }
      namespace index {
        class LeafReaderContext;
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

            class CompletionWeight : public ::org::apache::lucene::search::Weight {
             public:
              enum {
                mid_init$_eb6d6abf7f6fe8e5,
                mid_bulkScorer_d09b0f7e18a37f2a,
                mid_explain_36f8550bdb83cd3a,
                mid_getAutomaton_944878750d69867f,
                mid_isCacheable_7f6d289efb1f533f,
                mid_scorer_bdd7c3e9f89ed598,
                mid_boost_15cd8574741b1394,
                mid_setNextMatch_f17c1e129b99147e,
                mid_context_1487175e1bd58fa5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CompletionWeight(jobject obj) : ::org::apache::lucene::search::Weight(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CompletionWeight(const CompletionWeight& obj) : ::org::apache::lucene::search::Weight(obj) {}

              CompletionWeight(const ::org::apache::lucene::search::suggest::document::CompletionQuery &, const ::org::apache::lucene::util::automaton::Automaton &);

              ::org::apache::lucene::search::BulkScorer bulkScorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
              ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
              ::org::apache::lucene::util::automaton::Automaton getAutomaton() const;
              jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
              ::org::apache::lucene::search::Scorer scorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
            extern PyType_Def PY_TYPE_DEF(CompletionWeight);
            extern PyTypeObject *PY_TYPE(CompletionWeight);

            class t_CompletionWeight {
            public:
              PyObject_HEAD
              CompletionWeight object;
              static PyObject *wrap_Object(const CompletionWeight&);
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
