#ifndef org_apache_lucene_spatial3d_geom_Plane_H
#define org_apache_lucene_spatial3d_geom_Plane_H

#include "org/apache/lucene/spatial3d/geom/Vector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class XYZBounds;
          class GeoPoint;
          class Membership;
          class LatLonBounds;
          class Plane;
        }
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
      namespace spatial3d {
        namespace geom {

          class Plane : public ::org::apache::lucene::spatial3d::geom::Vector {
           public:
            enum {
              mid_init$_125ebcfb58d58dac,
              mid_init$_b8f2444d9c937727,
              mid_init$_0026df89dad6f875,
              mid_init$_def434b7c9de6efa,
              mid_init$_5b7432ea59dac3d5,
              mid_init$_f1938d9234395c5f,
              mid_init$_27e7fd2a85b6b12a,
              mid_arcDistance_04d43f277868382f,
              mid_arcDistance_44cea89a38d0c39e,
              mid_arePointsCoplanar_15f4e47c4b60ffe0,
              mid_constructNormalizedXPlane_1a79fcc97ae0ec12,
              mid_constructNormalizedXPlane_4acba93960340c53,
              mid_constructNormalizedYPlane_1a79fcc97ae0ec12,
              mid_constructNormalizedYPlane_4acba93960340c53,
              mid_constructNormalizedZPlane_1a79fcc97ae0ec12,
              mid_constructNormalizedZPlane_7a46ba97fd18f9f1,
              mid_constructPerpendicularCenterPlaneOnePoint_d132cc3ca5b0b214,
              mid_constructPerpendicularCenterPlaneTwoPoints_10a4ffc2f9fd7eb1,
              mid_crosses_3b48d4d91e6487ec,
              mid_equals_6084f78e09b6c0c3,
              mid_evaluate_8d808cbfe5d9b0c5,
              mid_evaluate_5a35cd32646ff38f,
              mid_evaluateIsZero_1d367ac5bb95cd60,
              mid_evaluateIsZero_a016004457263b15,
              mid_findArcDistancePoints_e3b40ecceb640cca,
              mid_findCrossings_3e33236524985316,
              mid_findIntersections_3e33236524985316,
              mid_getSampleIntersectionPoint_8175171f341113d1,
              mid_hashCode_15aa3d485e96b665,
              mid_interpolate_1de280f779b51e72,
              mid_intersects_3b48d4d91e6487ec,
              mid_isFunctionallyIdentical_83baf7f6c7142059,
              mid_isNumericallyIdentical_83baf7f6c7142059,
              mid_linearDistance_04d43f277868382f,
              mid_linearDistance_44cea89a38d0c39e,
              mid_linearDistanceSquared_04d43f277868382f,
              mid_linearDistanceSquared_44cea89a38d0c39e,
              mid_normalDistance_6f66116cf00d3d2d,
              mid_normalDistance_3869bc969f2a1ae2,
              mid_normalDistanceSquared_6f66116cf00d3d2d,
              mid_normalDistanceSquared_3869bc969f2a1ae2,
              mid_normalize_25144439e75fe60b,
              mid_recordBounds_4833dcc89c370667,
              mid_recordBounds_8a298558b9351ffa,
              mid_recordBounds_7f150f626614ca84,
              mid_recordBounds_decab634a17be95e,
              mid_toString_dc633f13a47328a8,
              mid_findIntersections_1519001ce39831ea,
              mid_modify_b4952d53f8bb5433,
              mid_reverseModify_c07a7ffda1059da4,
              mid_findCrossings_1519001ce39831ea,
              mid_findIntersectionBounds_12447f81c50ba9c7,
              max_mid
            };

            enum {
              fid_D,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Plane(jobject obj) : ::org::apache::lucene::spatial3d::geom::Vector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Plane(const Plane& obj) : ::org::apache::lucene::spatial3d::geom::Vector(obj) {}

            static JArray< ::org::apache::lucene::spatial3d::geom::Membership > *NO_BOUNDS;
            static JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > *NO_POINTS;
            static Plane *normalXPlane;
            static Plane *normalYPlane;
            static Plane *normalZPlane;

            jdouble _get_D() const;

            Plane(const Plane &, jboolean);
            Plane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            Plane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble);
            Plane(const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble);
            Plane(jdouble, jdouble);
            Plane(const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble, jdouble, jdouble);
            Plane(jdouble, jdouble, jdouble, jdouble);

            jdouble arcDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble arcDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            static jboolean arePointsCoplanar(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &);
            static Plane constructNormalizedXPlane(const JArray< ::org::apache::lucene::spatial3d::geom::Vector > &);
            static Plane constructNormalizedXPlane(jdouble, jdouble, jdouble);
            static Plane constructNormalizedYPlane(const JArray< ::org::apache::lucene::spatial3d::geom::Vector > &);
            static Plane constructNormalizedYPlane(jdouble, jdouble, jdouble);
            static Plane constructNormalizedZPlane(const JArray< ::org::apache::lucene::spatial3d::geom::Vector > &);
            static Plane constructNormalizedZPlane(jdouble, jdouble);
            static Plane constructPerpendicularCenterPlaneOnePoint(const Plane &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            static Plane constructPerpendicularCenterPlaneTwoPoints(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            jboolean crosses(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jdouble evaluate(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jdouble evaluate(jdouble, jdouble, jdouble) const;
            jboolean evaluateIsZero(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean evaluateIsZero(jdouble, jdouble, jdouble) const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > findArcDistancePoints(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > findCrossings(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > findIntersections(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint getSampleIntersectionPoint(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const Plane &) const;
            jint hashCode() const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > interpolate(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< jdouble > &) const;
            jboolean intersects(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jboolean isFunctionallyIdentical(const Plane &) const;
            jboolean isNumericallyIdentical(const Plane &) const;
            jdouble linearDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble linearDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble linearDistanceSquared(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble linearDistanceSquared(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble normalDistance(const ::org::apache::lucene::spatial3d::geom::Vector &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble normalDistance(jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble normalDistanceSquared(const ::org::apache::lucene::spatial3d::geom::Vector &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble normalDistanceSquared(jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            Plane normalize() const;
            void recordBounds(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::LatLonBounds &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            void recordBounds(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::XYZBounds &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            void recordBounds(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::LatLonBounds &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            void recordBounds(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::XYZBounds &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
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
          extern PyType_Def PY_TYPE_DEF(Plane);
          extern PyTypeObject *PY_TYPE(Plane);

          class t_Plane {
          public:
            PyObject_HEAD
            Plane object;
            static PyObject *wrap_Object(const Plane&);
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
