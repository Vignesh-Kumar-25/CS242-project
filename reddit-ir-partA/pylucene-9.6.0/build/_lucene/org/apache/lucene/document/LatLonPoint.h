#ifndef org_apache_lucene_document_LatLonPoint_H
#define org_apache_lucene_document_LatLonPoint_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace geo {
        class LatLonGeometry;
        class Polygon;
      }
      namespace document {
        class FieldType;
        class ShapeField$QueryRelation;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class LatLonPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_a0ce310c59e33aed,
            mid_newBoxQuery_e6aa98d8948a9963,
            mid_newDistanceFeatureQuery_a01ad5b13b6a1d7e,
            mid_newDistanceQuery_a882e9e52c7bf6aa,
            mid_newGeometryQuery_946795f47d34ff1f,
            mid_newPolygonQuery_50b36428ffac5156,
            mid_setLocationValue_5b7432ea59dac3d5,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LatLonPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LatLonPoint(const LatLonPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          static jint BYTES;
          static ::org::apache::lucene::document::FieldType *TYPE;

          LatLonPoint(const ::java::lang::String &, jdouble, jdouble);

          static ::org::apache::lucene::search::Query newBoxQuery(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newDistanceFeatureQuery(const ::java::lang::String &, jfloat, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newDistanceQuery(const ::java::lang::String &, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newGeometryQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::LatLonGeometry > &);
          static ::org::apache::lucene::search::Query newPolygonQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::geo::Polygon > &);
          void setLocationValue(jdouble, jdouble) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(LatLonPoint);
        extern PyTypeObject *PY_TYPE(LatLonPoint);

        class t_LatLonPoint {
        public:
          PyObject_HEAD
          LatLonPoint object;
          static PyObject *wrap_Object(const LatLonPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
