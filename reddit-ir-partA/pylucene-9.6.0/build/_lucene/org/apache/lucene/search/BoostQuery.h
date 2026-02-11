#ifndef org_apache_lucene_search_BoostQuery_H
#define org_apache_lucene_search_BoostQuery_H

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
        class IndexReader;
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

        class BoostQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_d4fb0f64b9932586,
            mid_createWeight_9d45be3ef0fc5210,
            mid_equals_6084f78e09b6c0c3,
            mid_getBoost_15cd8574741b1394,
            mid_getQuery_0b32ec998a0c18fa,
            mid_hashCode_15aa3d485e96b665,
            mid_rewrite_7da87bae82c9c483,
            mid_toString_04612c8360f09496,
            mid_visit_fddfa57e96928ffc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BoostQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BoostQuery(const BoostQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          BoostQuery(const ::org::apache::lucene::search::Query &, jfloat);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          jfloat getBoost() const;
          ::org::apache::lucene::search::Query getQuery() const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(BoostQuery);
        extern PyTypeObject *PY_TYPE(BoostQuery);

        class t_BoostQuery {
        public:
          PyObject_HEAD
          BoostQuery object;
          static PyObject *wrap_Object(const BoostQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
