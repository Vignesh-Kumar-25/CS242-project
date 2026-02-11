#ifndef org_apache_lucene_search_BooleanQuery_H
#define org_apache_lucene_search_BooleanQuery_H

#include "org/apache/lucene/search/Query.h"

namespace java {
  namespace util {
    class Iterator;
    class List;
  }
  namespace lang {
    class Iterable;
    class Class;
    class Object;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class BooleanClause;
        class ScoreMode;
        class Weight;
        class QueryVisitor;
      }
      namespace index {
        class IndexReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class BooleanQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_clauses_0bc66e960964b70a,
            mid_createWeight_9d45be3ef0fc5210,
            mid_equals_6084f78e09b6c0c3,
            mid_getMaxClauseCount_15aa3d485e96b665,
            mid_getMinimumNumberShouldMatch_15aa3d485e96b665,
            mid_hashCode_15aa3d485e96b665,
            mid_iterator_7c74834ad8788f5d,
            mid_rewrite_7da87bae82c9c483,
            mid_setMaxClauseCount_da425451c8de636b,
            mid_toString_04612c8360f09496,
            mid_visit_fddfa57e96928ffc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BooleanQuery(const BooleanQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          ::java::util::List clauses() const;
          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          static jint getMaxClauseCount();
          jint getMinimumNumberShouldMatch() const;
          jint hashCode() const;
          ::java::util::Iterator iterator() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          static void setMaxClauseCount(jint);
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
        extern PyType_Def PY_TYPE_DEF(BooleanQuery);
        extern PyTypeObject *PY_TYPE(BooleanQuery);

        class t_BooleanQuery {
        public:
          PyObject_HEAD
          BooleanQuery object;
          static PyObject *wrap_Object(const BooleanQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
