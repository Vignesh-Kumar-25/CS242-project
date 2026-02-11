#ifndef org_apache_lucene_search_suggest_document_ContextQuery_H
#define org_apache_lucene_search_suggest_document_ContextQuery_H

#include "org/apache/lucene/search/suggest/document/CompletionQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class ScoreMode;
        class Weight;
        class QueryVisitor;
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class CharSequence;
    class Class;
    class Object;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class ContextQuery : public ::org::apache::lucene::search::suggest::document::CompletionQuery {
             public:
              enum {
                mid_init$_9d2801accfb73399,
                mid_addAllContexts_3353d9f14bbfd91a,
                mid_addContext_b00f79ee482db81d,
                mid_addContext_03da1c1b5bd0b948,
                mid_addContext_42ecf84cc161e28d,
                mid_createWeight_9d45be3ef0fc5210,
                mid_equals_6084f78e09b6c0c3,
                mid_hashCode_15aa3d485e96b665,
                mid_ramBytesUsed_058f5911dcf5d8a4,
                mid_toString_04612c8360f09496,
                mid_visit_fddfa57e96928ffc,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ContextQuery(jobject obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ContextQuery(const ContextQuery& obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {}

              ContextQuery(const ::org::apache::lucene::search::suggest::document::CompletionQuery &);

              void addAllContexts() const;
              void addContext(const ::java::lang::CharSequence &) const;
              void addContext(const ::java::lang::CharSequence &, jfloat) const;
              void addContext(const ::java::lang::CharSequence &, jfloat, jboolean) const;
              ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
              jboolean equals(const ::java::lang::Object &) const;
              jint hashCode() const;
              jlong ramBytesUsed() const;
              ::java::lang::String toString(const ::java::lang::String &) const;
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
            extern PyType_Def PY_TYPE_DEF(ContextQuery);
            extern PyTypeObject *PY_TYPE(ContextQuery);

            class t_ContextQuery {
            public:
              PyObject_HEAD
              ContextQuery object;
              static PyObject *wrap_Object(const ContextQuery&);
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
