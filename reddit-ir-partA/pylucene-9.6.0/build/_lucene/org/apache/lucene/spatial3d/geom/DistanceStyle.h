#ifndef org_apache_lucene_spatial3d_geom_DistanceStyle_H
#define org_apache_lucene_spatial3d_geom_DistanceStyle_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoPoint;
          class NormalDistance;
          class NormalSquaredDistance;
          class ArcDistance;
          class Membership;
          class LinearSquaredDistance;
          class LinearDistance;
          class Plane;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class DistanceStyle : public ::java::lang::Object {
           public:
            enum {
              mid_aggregateDistances_24f32ed0a9418cf9,
              mid_computeDistance_d117831f8be4f94b,
              mid_computeDistance_af208c50cf66011f,
              mid_computeDistance_d348920ce82a9a7d,
              mid_computeDistance_d862eb1c74b2e0e8,
              mid_findDistancePoints_d5e89d2ea3da94b0,
              mid_findMaximumArcDistance_a9d6798124bda842,
              mid_findMinimumArcDistance_a9d6798124bda842,
              mid_fromAggregationForm_7c88f981e0181669,
              mid_toAggregationForm_7c88f981e0181669,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DistanceStyle(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DistanceStyle(const DistanceStyle& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::spatial3d::geom::ArcDistance *ARC;
            static ::org::apache::lucene::spatial3d::geom::LinearDistance *LINEAR;
            static ::org::apache::lucene::spatial3d::geom::LinearSquaredDistance *LINEAR_SQUARED;
            static ::org::apache::lucene::spatial3d::geom::NormalDistance *NORMAL;
            static ::org::apache::lucene::spatial3d::geom::NormalSquaredDistance *NORMAL_SQUARED;

            jdouble aggregateDistances(const JArray< jdouble > &) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, jdouble, jdouble, jdouble) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > findDistancePoints(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble findMaximumArcDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble) const;
            jdouble findMinimumArcDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble) const;
            jdouble fromAggregationForm(jdouble) const;
            jdouble toAggregationForm(jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(DistanceStyle);
          extern PyTypeObject *PY_TYPE(DistanceStyle);

          class t_DistanceStyle {
          public:
            PyObject_HEAD
            DistanceStyle object;
            static PyObject *wrap_Object(const DistanceStyle&);
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
