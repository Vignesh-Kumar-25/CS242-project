#ifndef org_apache_lucene_search_FieldExistsQuery_H
#define org_apache_lucene_search_FieldExistsQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class QueryVisitor;
        class ScoreMode;
        class Weight;
        class DocIdSetIterator;
      }
      namespace index {
        class LeafReader;
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

        class FieldExistsQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_4a883f7810d2effa,
            mid_createWeight_9d45be3ef0fc5210,
            mid_equals_6084f78e09b6c0c3,
            mid_getDocValuesDocIdSetIterator_f7bdd403e0989c42,
            mid_getField_dc633f13a47328a8,
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

          explicit FieldExistsQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldExistsQuery(const FieldExistsQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          FieldExistsQuery(const ::java::lang::String &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          static ::org::apache::lucene::search::DocIdSetIterator getDocValuesDocIdSetIterator(const ::java::lang::String &, const ::org::apache::lucene::index::LeafReader &);
          ::java::lang::String getField() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldExistsQuery);
        extern PyTypeObject *PY_TYPE(FieldExistsQuery);

        class t_FieldExistsQuery {
        public:
          PyObject_HEAD
          FieldExistsQuery object;
          static PyObject *wrap_Object(const FieldExistsQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
