#ifndef org_apache_lucene_search_DisjunctionMaxQuery_H
#define org_apache_lucene_search_DisjunctionMaxQuery_H

#include "org/apache/lucene/search/Query.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
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

        class DisjunctionMaxQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_c55c904a4dbc8ee6,
            mid_createWeight_9d45be3ef0fc5210,
            mid_equals_6084f78e09b6c0c3,
            mid_getDisjuncts_b47b7eaa8124fb60,
            mid_getTieBreakerMultiplier_15cd8574741b1394,
            mid_hashCode_15aa3d485e96b665,
            mid_iterator_7c74834ad8788f5d,
            mid_rewrite_7da87bae82c9c483,
            mid_toString_04612c8360f09496,
            mid_visit_fddfa57e96928ffc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DisjunctionMaxQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DisjunctionMaxQuery(const DisjunctionMaxQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          DisjunctionMaxQuery(const ::java::util::Collection &, jfloat);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::util::Collection getDisjuncts() const;
          jfloat getTieBreakerMultiplier() const;
          jint hashCode() const;
          ::java::util::Iterator iterator() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
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
        extern PyType_Def PY_TYPE_DEF(DisjunctionMaxQuery);
        extern PyTypeObject *PY_TYPE(DisjunctionMaxQuery);

        class t_DisjunctionMaxQuery {
        public:
          PyObject_HEAD
          DisjunctionMaxQuery object;
          static PyObject *wrap_Object(const DisjunctionMaxQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
