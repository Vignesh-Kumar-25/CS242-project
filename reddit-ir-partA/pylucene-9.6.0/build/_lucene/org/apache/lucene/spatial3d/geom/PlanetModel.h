#ifndef org_apache_lucene_spatial3d_geom_PlanetModel_H
#define org_apache_lucene_spatial3d_geom_PlanetModel_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoPoint;
          class Vector;
          class SerializableObject;
          class PlanetModel$DocValueEncoder;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class InputStream;
    class OutputStream;
    class IOException;
  }
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
        namespace geom {

          class PlanetModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_839363fac538f4b4,
              mid_init$_5b7432ea59dac3d5,
              mid_bisection_09034405264cdd71,
              mid_createSurfacePoint_98f8c67082e7d579,
              mid_createSurfacePoint_29376da9bcdb351c,
              mid_decodeValue_1b05331da910c88e,
              mid_encodeValue_32aa492f89a44f0c,
              mid_equals_6084f78e09b6c0c3,
              mid_getDocValueEncoder_5d2f98c3893c8363,
              mid_getMaximumMagnitude_409d010a7a53d0d1,
              mid_getMaximumXValue_409d010a7a53d0d1,
              mid_getMaximumYValue_409d010a7a53d0d1,
              mid_getMaximumZValue_409d010a7a53d0d1,
              mid_getMeanRadius_409d010a7a53d0d1,
              mid_getMinimumMagnitude_409d010a7a53d0d1,
              mid_getMinimumXValue_409d010a7a53d0d1,
              mid_getMinimumYValue_409d010a7a53d0d1,
              mid_getMinimumZValue_409d010a7a53d0d1,
              mid_hashCode_15aa3d485e96b665,
              mid_isSphere_ee8b0a5fa521ddac,
              mid_pointOnSurface_1d367ac5bb95cd60,
              mid_pointOnSurface_a016004457263b15,
              mid_pointOutside_1d367ac5bb95cd60,
              mid_pointOutside_a016004457263b15,
              mid_surfaceDistance_d117831f8be4f94b,
              mid_surfacePointOnBearing_4f8d1057845905b6,
              mid_toString_dc633f13a47328a8,
              mid_write_065827f6e1eef6f6,
              max_mid
            };

            enum {
              fid_DECODE,
              fid_MAX_ENCODED_VALUE,
              fid_MAX_VALUE,
              fid_MAX_X_POLE,
              fid_MAX_Y_POLE,
              fid_MIN_ENCODED_VALUE,
              fid_MIN_X_POLE,
              fid_MIN_Y_POLE,
              fid_NORTH_POLE,
              fid_SOUTH_POLE,
              fid_a,
              fid_b,
              fid_docValueEncoder,
              fid_inverseScale,
              fid_inverseXYScaling,
              fid_inverseXYScalingSquared,
              fid_inverseZScaling,
              fid_inverseZScalingSquared,
              fid_meanRadius,
              fid_minimumPoleDistance,
              fid_scale,
              fid_scaledFlattening,
              fid_squareRatio,
              fid_xyScaling,
              fid_zScaling,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PlanetModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PlanetModel(const PlanetModel& obj) : ::java::lang::Object(obj) {}

            static PlanetModel *CLARKE_1866;
            static PlanetModel *SPHERE;
            static PlanetModel *WGS84;

            jdouble _get_DECODE() const;
            jint _get_MAX_ENCODED_VALUE() const;
            jdouble _get_MAX_VALUE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_MAX_X_POLE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_MAX_Y_POLE() const;
            jint _get_MIN_ENCODED_VALUE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_MIN_X_POLE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_MIN_Y_POLE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_NORTH_POLE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_SOUTH_POLE() const;
            jdouble _get_a() const;
            jdouble _get_b() const;
            ::org::apache::lucene::spatial3d::geom::PlanetModel$DocValueEncoder _get_docValueEncoder() const;
            jdouble _get_inverseScale() const;
            jdouble _get_inverseXYScaling() const;
            jdouble _get_inverseXYScalingSquared() const;
            jdouble _get_inverseZScaling() const;
            jdouble _get_inverseZScalingSquared() const;
            jdouble _get_meanRadius() const;
            jdouble _get_minimumPoleDistance() const;
            jdouble _get_scale() const;
            jdouble _get_scaledFlattening() const;
            jdouble _get_squareRatio() const;
            jdouble _get_xyScaling() const;
            jdouble _get_zScaling() const;

            PlanetModel(const ::java::io::InputStream &);
            PlanetModel(jdouble, jdouble);

            ::org::apache::lucene::spatial3d::geom::GeoPoint bisection(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint createSurfacePoint(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint createSurfacePoint(jdouble, jdouble, jdouble) const;
            jdouble decodeValue(jint) const;
            jint encodeValue(jdouble) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::spatial3d::geom::PlanetModel$DocValueEncoder getDocValueEncoder() const;
            jdouble getMaximumMagnitude() const;
            jdouble getMaximumXValue() const;
            jdouble getMaximumYValue() const;
            jdouble getMaximumZValue() const;
            jdouble getMeanRadius() const;
            jdouble getMinimumMagnitude() const;
            jdouble getMinimumXValue() const;
            jdouble getMinimumYValue() const;
            jdouble getMinimumZValue() const;
            jint hashCode() const;
            jboolean isSphere() const;
            jboolean pointOnSurface(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean pointOnSurface(jdouble, jdouble, jdouble) const;
            jboolean pointOutside(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean pointOutside(jdouble, jdouble, jdouble) const;
            jdouble surfaceDistance(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint surfacePointOnBearing(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, jdouble, jdouble) const;
            ::java::lang::String toString() const;
            void write(const ::java::io::OutputStream &) const;
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
          extern PyType_Def PY_TYPE_DEF(PlanetModel);
          extern PyTypeObject *PY_TYPE(PlanetModel);

          class t_PlanetModel {
          public:
            PyObject_HEAD
            PlanetModel object;
            static PyObject *wrap_Object(const PlanetModel&);
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
