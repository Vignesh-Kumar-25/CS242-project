#ifndef org_apache_lucene_search_PointInSetQuery_H
#define org_apache_lucene_search_PointInSetQuery_H

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
      namespace util {
        class Accountable;
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
      namespace search {

        class PointInSetQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_createWeight_9d45be3ef0fc5210,
            mid_equals_6084f78e09b6c0c3,
            mid_getBytesPerDim_15aa3d485e96b665,
            mid_getField_dc633f13a47328a8,
            mid_getNumDims_15aa3d485e96b665,
            mid_getPackedPoints_b47b7eaa8124fb60,
            mid_hashCode_15aa3d485e96b665,
            mid_ramBytesUsed_058f5911dcf5d8a4,
            mid_toString_04612c8360f09496,
            mid_visit_fddfa57e96928ffc,
            mid_toString_7784542c520dfdce,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PointInSetQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PointInSetQuery(const PointInSetQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint getBytesPerDim() const;
          ::java::lang::String getField() const;
          jint getNumDims() const;
          ::java::util::Collection getPackedPoints() const;
          jint hashCode() const;
          jlong ramBytesUsed() const;
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
        extern PyType_Def PY_TYPE_DEF(PointInSetQuery);
        extern PyTypeObject *PY_TYPE(PointInSetQuery);

        class t_PointInSetQuery {
        public:
          PyObject_HEAD
          PointInSetQuery object;
          static PyObject *wrap_Object(const PointInSetQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
