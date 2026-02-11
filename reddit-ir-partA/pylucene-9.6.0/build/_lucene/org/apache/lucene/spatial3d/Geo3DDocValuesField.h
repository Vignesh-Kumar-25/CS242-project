#ifndef org_apache_lucene_spatial3d_Geo3DDocValuesField_H
#define org_apache_lucene_spatial3d_Geo3DDocValuesField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoPoint;
        }
      }
      namespace document {
        class FieldType;
      }
      namespace geo {
        class Polygon;
      }
      namespace search {
        class SortField;
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

        class Geo3DDocValuesField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_080ef9abc4534167,
            mid_init$_c2c42f5615b73645,
            mid_newDistanceSort_e6330e38542ef34f,
            mid_newOutsideBoxSort_8555c772e9e4f9d7,
            mid_newOutsideDistanceSort_e6330e38542ef34f,
            mid_newOutsideLargePolygonSort_a6d8e49101985259,
            mid_newOutsidePathSort_ba16bac32569e1a0,
            mid_newOutsidePolygonSort_a6d8e49101985259,
            mid_newPathSort_ba16bac32569e1a0,
            mid_setLocationValue_60a0b491f532d7bb,
            mid_setLocationValue_91f0c49f52586c86,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Geo3DDocValuesField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Geo3DDocValuesField(const Geo3DDocValuesField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          Geo3DDocValuesField(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          Geo3DDocValuesField(const ::java::lang::String &, jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);

          static ::org::apache::lucene::search::SortField newDistanceSort(const ::java::lang::String &, jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::SortField newOutsideBoxSort(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::SortField newOutsideDistanceSort(const ::java::lang::String &, jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::SortField newOutsideLargePolygonSort(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const JArray< ::org::apache::lucene::geo::Polygon > &);
          static ::org::apache::lucene::search::SortField newOutsidePathSort(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::SortField newOutsidePolygonSort(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const JArray< ::org::apache::lucene::geo::Polygon > &);
          static ::org::apache::lucene::search::SortField newPathSort(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          void setLocationValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
          void setLocationValue(jdouble, jdouble, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(Geo3DDocValuesField);
        extern PyTypeObject *PY_TYPE(Geo3DDocValuesField);

        class t_Geo3DDocValuesField {
        public:
          PyObject_HEAD
          Geo3DDocValuesField object;
          static PyObject *wrap_Object(const Geo3DDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
