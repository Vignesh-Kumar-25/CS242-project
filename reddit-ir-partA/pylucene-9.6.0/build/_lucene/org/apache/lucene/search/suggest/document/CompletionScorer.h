#ifndef org_apache_lucene_search_suggest_document_CompletionScorer_H
#define org_apache_lucene_search_suggest_document_CompletionScorer_H

#include "org/apache/lucene/search/BulkScorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LeafCollector;
      }
      namespace util {
        class Bits;
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

            class CompletionScorer : public ::org::apache::lucene::search::BulkScorer {
             public:
              enum {
                mid_accept_86018057aa117880,
                mid_cost_058f5911dcf5d8a4,
                mid_score_ee4110fd5a96b256,
                mid_score_4adad8e43a288224,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CompletionScorer(jobject obj) : ::org::apache::lucene::search::BulkScorer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CompletionScorer(const CompletionScorer& obj) : ::org::apache::lucene::search::BulkScorer(obj) {}

              jboolean accept(jint, const ::org::apache::lucene::util::Bits &) const;
              jlong cost() const;
              jfloat score(jfloat, jfloat) const;
              jint score(const ::org::apache::lucene::search::LeafCollector &, const ::org::apache::lucene::util::Bits &, jint, jint) const;
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
            extern PyType_Def PY_TYPE_DEF(CompletionScorer);
            extern PyTypeObject *PY_TYPE(CompletionScorer);

            class t_CompletionScorer {
            public:
              PyObject_HEAD
              CompletionScorer object;
              static PyObject *wrap_Object(const CompletionScorer&);
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
