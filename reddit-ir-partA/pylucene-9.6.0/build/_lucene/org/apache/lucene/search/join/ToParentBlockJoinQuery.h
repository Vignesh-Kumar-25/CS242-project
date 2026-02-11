#ifndef org_apache_lucene_search_join_ToParentBlockJoinQuery_H
#define org_apache_lucene_search_join_ToParentBlockJoinQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        namespace join {
          class ScoreMode;
          class BitSetProducer;
        }
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
        namespace join {

          class ToParentBlockJoinQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_3f044b9e033519f9,
              mid_createWeight_9d45be3ef0fc5210,
              mid_equals_6084f78e09b6c0c3,
              mid_getChildQuery_0b32ec998a0c18fa,
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

            explicit ToParentBlockJoinQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ToParentBlockJoinQuery(const ToParentBlockJoinQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            ToParentBlockJoinQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::join::BitSetProducer &, const ::org::apache::lucene::search::join::ScoreMode &);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::Query getChildQuery() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
          };
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
        namespace join {
          extern PyType_Def PY_TYPE_DEF(ToParentBlockJoinQuery);
          extern PyTypeObject *PY_TYPE(ToParentBlockJoinQuery);

          class t_ToParentBlockJoinQuery {
          public:
            PyObject_HEAD
            ToParentBlockJoinQuery object;
            static PyObject *wrap_Object(const ToParentBlockJoinQuery&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
