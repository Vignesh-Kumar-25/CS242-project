#ifndef org_apache_lucene_search_AbstractKnnVectorQuery_H
#define org_apache_lucene_search_AbstractKnnVectorQuery_H

#include "org/apache/lucene/search/Query.h"

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
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
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

        class AbstractKnnVectorQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_3ca7e98b5269da14,
            mid_equals_6084f78e09b6c0c3,
            mid_getField_dc633f13a47328a8,
            mid_getFilter_0b32ec998a0c18fa,
            mid_getK_15aa3d485e96b665,
            mid_hashCode_15aa3d485e96b665,
            mid_rewrite_7da87bae82c9c483,
            mid_visit_fddfa57e96928ffc,
            mid_approximateSearch_043416e36cf086e5,
            mid_exactSearch_7db91bfde16cc562,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractKnnVectorQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractKnnVectorQuery(const AbstractKnnVectorQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          AbstractKnnVectorQuery(const ::java::lang::String &, jint, const ::org::apache::lucene::search::Query &);

          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getField() const;
          ::org::apache::lucene::search::Query getFilter() const;
          jint getK() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractKnnVectorQuery);
        extern PyTypeObject *PY_TYPE(AbstractKnnVectorQuery);

        class t_AbstractKnnVectorQuery {
        public:
          PyObject_HEAD
          AbstractKnnVectorQuery object;
          static PyObject *wrap_Object(const AbstractKnnVectorQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
