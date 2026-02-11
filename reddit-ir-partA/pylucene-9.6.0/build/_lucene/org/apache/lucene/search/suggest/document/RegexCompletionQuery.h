#ifndef org_apache_lucene_search_suggest_document_RegexCompletionQuery_H
#define org_apache_lucene_search_suggest_document_RegexCompletionQuery_H

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

            class RegexCompletionQuery : public ::org::apache::lucene::search::suggest::document::CompletionQuery {
             public:
              enum {
                mid_init$_62e0fe03f75a3264,
                mid_init$_fd0c538d669f69bf,
                mid_init$_ed002e790c493953,
                mid_init$_69a42dccd5c8ae23,
                mid_createWeight_9d45be3ef0fc5210,
                mid_equals_6084f78e09b6c0c3,
                mid_getDeterminizeWorkLimit_15aa3d485e96b665,
                mid_getFlags_15aa3d485e96b665,
                mid_hashCode_15aa3d485e96b665,
                mid_visit_fddfa57e96928ffc,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RegexCompletionQuery(jobject obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              RegexCompletionQuery(const RegexCompletionQuery& obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {}

              RegexCompletionQuery(const ::org::apache::lucene::index::Term &);
              RegexCompletionQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::search::suggest::BitsProducer &);
              RegexCompletionQuery(const ::org::apache::lucene::index::Term &, jint, jint);
              RegexCompletionQuery(const ::org::apache::lucene::index::Term &, jint, jint, const ::org::apache::lucene::search::suggest::BitsProducer &);

              ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
              jboolean equals(const ::java::lang::Object &) const;
              jint getDeterminizeWorkLimit() const;
              jint getFlags() const;
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
            extern PyType_Def PY_TYPE_DEF(RegexCompletionQuery);
            extern PyTypeObject *PY_TYPE(RegexCompletionQuery);

            class t_RegexCompletionQuery {
            public:
              PyObject_HEAD
              RegexCompletionQuery object;
              static PyObject *wrap_Object(const RegexCompletionQuery&);
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
