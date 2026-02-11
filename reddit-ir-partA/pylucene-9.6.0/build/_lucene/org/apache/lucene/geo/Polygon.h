#ifndef org_apache_lucene_geo_Polygon_H
#define org_apache_lucene_geo_Polygon_H

#include "org/apache/lucene/geo/LatLonGeometry.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class GeoUtils$WindingOrder;
        class Polygon;
      }
    }
  }
}
namespace java {
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
      namespace geo {

        class Polygon : public ::org::apache::lucene::geo::LatLonGeometry {
         public:
          enum {
            mid_init$_21d6271bd4299cc6,
            mid_equals_6084f78e09b6c0c3,
            mid_fromGeoJSON_141b7b3bab7bb862,
            mid_getHoles_79f6bd4143ba243b,
            mid_getPolyLat_1b05331da910c88e,
            mid_getPolyLats_0a01edb72b87ca7e,
            mid_getPolyLon_1b05331da910c88e,
            mid_getPolyLons_0a01edb72b87ca7e,
            mid_getWindingOrder_cddb866ffeca08f5,
            mid_hashCode_15aa3d485e96b665,
            mid_numHoles_15aa3d485e96b665,
            mid_numPoints_15aa3d485e96b665,
            mid_toGeoJSON_dc633f13a47328a8,
            mid_toString_dc633f13a47328a8,
            mid_verticesToGeoJSON_988845bf0cd55c13,
            mid_toComponent2D_29b6622932ac9ca0,
            max_mid
          };

          enum {
            fid_maxLat,
            fid_maxLon,
            fid_minLat,
            fid_minLon,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Polygon(jobject obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Polygon(const Polygon& obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {}

          jdouble _get_maxLat() const;
          jdouble _get_maxLon() const;
          jdouble _get_minLat() const;
          jdouble _get_minLon() const;

          Polygon(const JArray< jdouble > &, const JArray< jdouble > &, const JArray< Polygon > &);

          jboolean equals(const ::java::lang::Object &) const;
          static JArray< Polygon > fromGeoJSON(const ::java::lang::String &);
          JArray< Polygon > getHoles() const;
          jdouble getPolyLat(jint) const;
          JArray< jdouble > getPolyLats() const;
          jdouble getPolyLon(jint) const;
          JArray< jdouble > getPolyLons() const;
          ::org::apache::lucene::geo::GeoUtils$WindingOrder getWindingOrder() const;
          jint hashCode() const;
          jint numHoles() const;
          jint numPoints() const;
          ::java::lang::String toGeoJSON() const;
          ::java::lang::String toString() const;
          static ::java::lang::String verticesToGeoJSON(const JArray< jdouble > &, const JArray< jdouble > &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        extern PyType_Def PY_TYPE_DEF(Polygon);
        extern PyTypeObject *PY_TYPE(Polygon);

        class t_Polygon {
        public:
          PyObject_HEAD
          Polygon object;
          static PyObject *wrap_Object(const Polygon&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
