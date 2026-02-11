#ifndef org_apache_lucene_search_MatchAllDocsQuery_H
#define org_apache_lucene_search_MatchAllDocsQuery_H

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
    }
  }
}
namespace java {
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

        class MatchAllDocsQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_createWeight_9d45be3ef0fc5210,
            mid_equals_6084f78e09b6c0c3,
            mid_hashCode_15aa3d485e96b665,
            mid_toString_04612c8360f09496,
            mid_visit_fddfa57e96928ffc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MatchAllDocsQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MatchAllDocsQuery(const MatchAllDocsQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          MatchAllDocsQuery();

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
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
        extern PyType_Def PY_TYPE_DEF(MatchAllDocsQuery);
        extern PyTypeObject *PY_TYPE(MatchAllDocsQuery);

        class t_MatchAllDocsQuery {
        public:
          PyObject_HEAD
          MatchAllDocsQuery object;
          static PyObject *wrap_Object(const MatchAllDocsQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
