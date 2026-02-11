#ifndef org_apache_lucene_search_PointRangeQuery_H
#define org_apache_lucene_search_PointRangeQuery_H

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

        class PointRangeQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_checkArgs_c22a6206c5c777de,
            mid_createWeight_9d45be3ef0fc5210,
            mid_equals_6084f78e09b6c0c3,
            mid_getBytesPerDim_15aa3d485e96b665,
            mid_getField_dc633f13a47328a8,
            mid_getLowerPoint_f4d7c022fb7af16d,
            mid_getNumDims_15aa3d485e96b665,
            mid_getUpperPoint_f4d7c022fb7af16d,
            mid_hashCode_15aa3d485e96b665,
            mid_toString_04612c8360f09496,
            mid_visit_fddfa57e96928ffc,
            mid_toString_8df90d7a0d92e632,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PointRangeQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PointRangeQuery(const PointRangeQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          static void checkArgs(const ::java::lang::String &, const ::java::lang::Object &, const ::java::lang::Object &);
          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint getBytesPerDim() const;
          ::java::lang::String getField() const;
          JArray< jbyte > getLowerPoint() const;
          jint getNumDims() const;
          JArray< jbyte > getUpperPoint() const;
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
        extern PyType_Def PY_TYPE_DEF(PointRangeQuery);
        extern PyTypeObject *PY_TYPE(PointRangeQuery);

        class t_PointRangeQuery {
        public:
          PyObject_HEAD
          PointRangeQuery object;
          static PyObject *wrap_Object(const PointRangeQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
