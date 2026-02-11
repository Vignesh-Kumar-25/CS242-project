#ifndef org_apache_lucene_spatial3d_geom_LatLonBounds_H
#define org_apache_lucene_spatial3d_geom_LatLonBounds_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Bounds;
          class PlanetModel;
          class GeoPoint;
          class Membership;
          class Plane;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Double;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class LatLonBounds : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_addHorizontalPlane_c7fc391f0f2d993e,
              mid_addIntersection_b5f074157416ff41,
              mid_addPlane_eeb20047385e9adc,
              mid_addPoint_2fe3b7209f437743,
              mid_addVerticalPlane_c7fc391f0f2d993e,
              mid_addXValue_2fe3b7209f437743,
              mid_addYValue_2fe3b7209f437743,
              mid_addZValue_2fe3b7209f437743,
              mid_checkNoBottomLatitudeBound_ee8b0a5fa521ddac,
              mid_checkNoLongitudeBound_ee8b0a5fa521ddac,
              mid_checkNoTopLatitudeBound_ee8b0a5fa521ddac,
              mid_getLeftLongitude_07d5b4f61d466756,
              mid_getMaxLatitude_07d5b4f61d466756,
              mid_getMinLatitude_07d5b4f61d466756,
              mid_getRightLongitude_07d5b4f61d466756,
              mid_isWide_1b9d5a42d85d8f74,
              mid_noBottomLatitudeBound_1b9d5a42d85d8f74,
              mid_noBound_2498930b80a010fc,
              mid_noLongitudeBound_1b9d5a42d85d8f74,
              mid_noTopLatitudeBound_1b9d5a42d85d8f74,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LatLonBounds(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LatLonBounds(const LatLonBounds& obj) : ::java::lang::Object(obj) {}

            LatLonBounds();

            ::org::apache::lucene::spatial3d::geom::Bounds addHorizontalPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addIntersection(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addPoint(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addVerticalPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addXValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addYValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addZValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jboolean checkNoBottomLatitudeBound() const;
            jboolean checkNoLongitudeBound() const;
            jboolean checkNoTopLatitudeBound() const;
            ::java::lang::Double getLeftLongitude() const;
            ::java::lang::Double getMaxLatitude() const;
            ::java::lang::Double getMinLatitude() const;
            ::java::lang::Double getRightLongitude() const;
            ::org::apache::lucene::spatial3d::geom::Bounds isWide() const;
            ::org::apache::lucene::spatial3d::geom::Bounds noBottomLatitudeBound() const;
            ::org::apache::lucene::spatial3d::geom::Bounds noBound(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds noLongitudeBound() const;
            ::org::apache::lucene::spatial3d::geom::Bounds noTopLatitudeBound() const;
            ::java::lang::String toString() const;
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
      namespace spatial3d {
        namespace geom {
          extern PyType_Def PY_TYPE_DEF(LatLonBounds);
          extern PyTypeObject *PY_TYPE(LatLonBounds);

          class t_LatLonBounds {
          public:
            PyObject_HEAD
            LatLonBounds object;
            static PyObject *wrap_Object(const LatLonBounds&);
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
