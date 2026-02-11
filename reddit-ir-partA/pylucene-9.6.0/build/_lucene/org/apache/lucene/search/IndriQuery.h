#ifndef org_apache_lucene_search_IndriQuery_H
#define org_apache_lucene_search_IndriQuery_H

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
        class BooleanClause;
        class IndexSearcher;
        class ScoreMode;
        class Weight;
        class QueryVisitor;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class IndriQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_1a2e28000748bc88,
            mid_createWeight_9d45be3ef0fc5210,
            mid_equals_6084f78e09b6c0c3,
            mid_getClauses_0bc66e960964b70a,
            mid_hashCode_15aa3d485e96b665,
            mid_iterator_7c74834ad8788f5d,
            mid_toString_04612c8360f09496,
            mid_visit_fddfa57e96928ffc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndriQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndriQuery(const IndriQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          IndriQuery(const ::java::util::List &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::util::List getClauses() const;
          jint hashCode() const;
          ::java::util::Iterator iterator() const;
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
        extern PyType_Def PY_TYPE_DEF(IndriQuery);
        extern PyTypeObject *PY_TYPE(IndriQuery);

        class t_IndriQuery {
        public:
          PyObject_HEAD
          IndriQuery object;
          static PyObject *wrap_Object(const IndriQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
