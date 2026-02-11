#ifndef org_apache_lucene_search_TermQuery_H
#define org_apache_lucene_search_TermQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class ScoreMode;
        class Weight;
        class QueryVisitor;
      }
      namespace index {
        class TermStates;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TermQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_62e0fe03f75a3264,
            mid_init$_36884fb6b6735c47,
            mid_createWeight_9d45be3ef0fc5210,
            mid_equals_6084f78e09b6c0c3,
            mid_getTerm_5b4d4f9d26b4f48d,
            mid_getTermStates_55d5dc0a0dc2d7da,
            mid_hashCode_15aa3d485e96b665,
            mid_toString_04612c8360f09496,
            mid_visit_fddfa57e96928ffc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermQuery(const TermQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          TermQuery(const ::org::apache::lucene::index::Term &);
          TermQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::index::TermStates &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::index::Term getTerm() const;
          ::org::apache::lucene::index::TermStates getTermStates() const;
          jint hashCode() const;
          ::java::lang::String toString(const ::java::lang::String &) const;
          void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(TermQuery);
        extern PyTypeObject *PY_TYPE(TermQuery);

        class t_TermQuery {
        public:
          PyObject_HEAD
          TermQuery object;
          static PyObject *wrap_Object(const TermQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
