#ifndef org_apache_lucene_search_Query_H
#define org_apache_lucene_search_Query_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class Query : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_createWeight_9d45be3ef0fc5210,
            mid_equals_6084f78e09b6c0c3,
            mid_hashCode_15aa3d485e96b665,
            mid_rewrite_7da87bae82c9c483,
            mid_toString_dc633f13a47328a8,
            mid_toString_04612c8360f09496,
            mid_visit_fddfa57e96928ffc,
            mid_classHash_15aa3d485e96b665,
            mid_sameClassAs_6084f78e09b6c0c3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Query(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Query(const Query& obj) : ::java::lang::Object(obj) {}

          Query();

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(Query);
        extern PyTypeObject *PY_TYPE(Query);

        class t_Query {
        public:
          PyObject_HEAD
          Query object;
          static PyObject *wrap_Object(const Query&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
