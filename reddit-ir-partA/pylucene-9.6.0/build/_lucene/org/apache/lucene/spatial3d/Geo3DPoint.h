#ifndef org_apache_lucene_spatial3d_Geo3DPoint_H
#define org_apache_lucene_spatial3d_Geo3DPoint_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoShape;
        }
      }
      namespace document {
        class FieldType;
      }
      namespace geo {
        class Polygon;
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
      namespace spatial3d {

        class Geo3DPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_a0ce310c59e33aed,
            mid_init$_bcaf90ef96d982aa,
            mid_init$_f70a4cf39e78328b,
            mid_init$_4922f00a5c734c5e,
            mid_decodeDimension_a130a6a81b03d53e,
            mid_encodeDimension_059f6e16773dc81b,
            mid_newBoxQuery_3df9ebe77a68987d,
            mid_newDistanceQuery_30c30fa84f514709,
            mid_newLargePolygonQuery_946fc09710f44048,
            mid_newPathQuery_d1d8b036c05aae1a,
            mid_newPolygonQuery_946fc09710f44048,
            mid_newShapeQuery_e713fe138d4b9fd1,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Geo3DPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Geo3DPoint(const Geo3DPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          Geo3DPoint(const ::java::lang::String &, jdouble, jdouble);
          Geo3DPoint(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble);
          Geo3DPoint(const ::java::lang::String &, jdouble, jdouble, jdouble);
          Geo3DPoint(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble);

          static jdouble decodeDimension(const JArray< jbyte > &, jint, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static void encodeDimension(jdouble, const JArray< jbyte > &, jint, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::Query newBoxQuery(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newDistanceQuery(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newLargePolygonQuery(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const JArray< ::org::apache::lucene::geo::Polygon > &);
          static ::org::apache::lucene::search::Query newPathQuery(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::Query newPolygonQuery(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const JArray< ::org::apache::lucene::geo::Polygon > &);
          static ::org::apache::lucene::search::Query newShapeQuery(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::GeoShape &);
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
      namespace spatial3d {
        extern PyType_Def PY_TYPE_DEF(Geo3DPoint);
        extern PyTypeObject *PY_TYPE(Geo3DPoint);

        class t_Geo3DPoint {
        public:
          PyObject_HEAD
          Geo3DPoint object;
          static PyObject *wrap_Object(const Geo3DPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
