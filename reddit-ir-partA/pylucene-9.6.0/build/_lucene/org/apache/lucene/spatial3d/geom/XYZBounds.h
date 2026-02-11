#ifndef org_apache_lucene_spatial3d_geom_XYZBounds_H
#define org_apache_lucene_spatial3d_geom_XYZBounds_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Bounds;
          class PlanetModel;
          class XYZBounds;
          class GeoPoint;
          class Vector;
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

          class XYZBounds : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_addBounds_cb48462aee719d07,
              mid_addHorizontalPlane_c7fc391f0f2d993e,
              mid_addIntersection_b5f074157416ff41,
              mid_addPlane_eeb20047385e9adc,
              mid_addPoint_2fe3b7209f437743,
              mid_addVerticalPlane_c7fc391f0f2d993e,
              mid_addXValue_2fe3b7209f437743,
              mid_addXValue_ad8f6375d66866c1,
              mid_addYValue_2fe3b7209f437743,
              mid_addYValue_ad8f6375d66866c1,
              mid_addZValue_2fe3b7209f437743,
              mid_addZValue_ad8f6375d66866c1,
              mid_getMaximumX_07d5b4f61d466756,
              mid_getMaximumY_07d5b4f61d466756,
              mid_getMaximumZ_07d5b4f61d466756,
              mid_getMinimumX_07d5b4f61d466756,
              mid_getMinimumY_07d5b4f61d466756,
              mid_getMinimumZ_07d5b4f61d466756,
              mid_isLargestMaxX_0592dee9e6b4c3bf,
              mid_isLargestMaxY_0592dee9e6b4c3bf,
              mid_isLargestMaxZ_0592dee9e6b4c3bf,
              mid_isSmallestMinX_0592dee9e6b4c3bf,
              mid_isSmallestMinY_0592dee9e6b4c3bf,
              mid_isSmallestMinZ_0592dee9e6b4c3bf,
              mid_isWide_1b9d5a42d85d8f74,
              mid_isWithin_1d367ac5bb95cd60,
              mid_isWithin_a016004457263b15,
              mid_noBottomLatitudeBound_1b9d5a42d85d8f74,
              mid_noBound_2498930b80a010fc,
              mid_noLongitudeBound_1b9d5a42d85d8f74,
              mid_noTopLatitudeBound_1b9d5a42d85d8f74,
              mid_overlaps_8698b9949777ebe7,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit XYZBounds(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            XYZBounds(const XYZBounds& obj) : ::java::lang::Object(obj) {}

            XYZBounds();

            void addBounds(const XYZBounds &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addHorizontalPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addIntersection(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addPoint(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addVerticalPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addXValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addXValue(jdouble) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addYValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addYValue(jdouble) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addZValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addZValue(jdouble) const;
            ::java::lang::Double getMaximumX() const;
            ::java::lang::Double getMaximumY() const;
            ::java::lang::Double getMaximumZ() const;
            ::java::lang::Double getMinimumX() const;
            ::java::lang::Double getMinimumY() const;
            ::java::lang::Double getMinimumZ() const;
            jboolean isLargestMaxX(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            jboolean isLargestMaxY(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            jboolean isLargestMaxZ(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            jboolean isSmallestMinX(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            jboolean isSmallestMinY(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            jboolean isSmallestMinZ(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds isWide() const;
            jboolean isWithin(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean isWithin(jdouble, jdouble, jdouble) const;
            ::org::apache::lucene::spatial3d::geom::Bounds noBottomLatitudeBound() const;
            ::org::apache::lucene::spatial3d::geom::Bounds noBound(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds noLongitudeBound() const;
            ::org::apache::lucene::spatial3d::geom::Bounds noTopLatitudeBound() const;
            jboolean overlaps(const XYZBounds &) const;
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
          extern PyType_Def PY_TYPE_DEF(XYZBounds);
          extern PyTypeObject *PY_TYPE(XYZBounds);

          class t_XYZBounds {
          public:
            PyObject_HEAD
            XYZBounds object;
            static PyObject *wrap_Object(const XYZBounds&);
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
