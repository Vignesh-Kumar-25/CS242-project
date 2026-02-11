#ifndef org_apache_lucene_sandbox_search_CoveringQuery_H
#define org_apache_lucene_sandbox_search_CoveringQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace search {
        class IndexSearcher;
        class LongValuesSource;
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
  namespace util {
    class Collection;
  }
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
      namespace sandbox {
        namespace search {

          class CoveringQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_5eef89c85ff09454,
              mid_createWeight_9d45be3ef0fc5210,
              mid_equals_6084f78e09b6c0c3,
              mid_hashCode_15aa3d485e96b665,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_rewrite_7da87bae82c9c483,
              mid_toString_04612c8360f09496,
              mid_visit_fddfa57e96928ffc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CoveringQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CoveringQuery(const CoveringQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            CoveringQuery(const ::java::util::Collection &, const ::org::apache::lucene::search::LongValuesSource &);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jlong ramBytesUsed() const;
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
      namespace sandbox {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(CoveringQuery);
          extern PyTypeObject *PY_TYPE(CoveringQuery);

          class t_CoveringQuery {
          public:
            PyObject_HEAD
            CoveringQuery object;
            static PyObject *wrap_Object(const CoveringQuery&);
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
