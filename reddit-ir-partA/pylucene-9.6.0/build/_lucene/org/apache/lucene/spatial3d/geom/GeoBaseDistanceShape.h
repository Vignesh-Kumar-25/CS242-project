#ifndef org_apache_lucene_spatial3d_geom_GeoBaseDistanceShape_H
#define org_apache_lucene_spatial3d_geom_GeoBaseDistanceShape_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseAreaShape.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Bounds;
          class PlanetModel;
          class GeoDistanceShape;
          class GeoPoint;
          class Vector;
          class DistanceStyle;
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

          class GeoBaseDistanceShape : public ::org::apache::lucene::spatial3d::geom::GeoBaseAreaShape {
           public:
            enum {
              mid_init$_5618eb5b554e7cc3,
              mid_computeDeltaDistance_e1bf5924b6cdd15f,
              mid_computeDeltaDistance_2d4daa49f18a27e6,
              mid_computeDistance_e1bf5924b6cdd15f,
              mid_computeDistance_2d4daa49f18a27e6,
              mid_getDistanceBounds_4be7ec2481ac1b1b,
              mid_isWithin_1d367ac5bb95cd60,
              mid_deltaDistance_2d4daa49f18a27e6,
              mid_distanceBounds_4be7ec2481ac1b1b,
              mid_distance_2d4daa49f18a27e6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoBaseDistanceShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseAreaShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoBaseDistanceShape(const GeoBaseDistanceShape& obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseAreaShape(obj) {}

            GeoBaseDistanceShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);

            jdouble computeDeltaDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jdouble computeDeltaDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, jdouble, jdouble, jdouble) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, jdouble, jdouble, jdouble) const;
            void getDistanceBounds(const ::org::apache::lucene::spatial3d::geom::Bounds &, const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, jdouble) const;
            jboolean isWithin(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoBaseDistanceShape);
          extern PyTypeObject *PY_TYPE(GeoBaseDistanceShape);

          class t_GeoBaseDistanceShape {
          public:
            PyObject_HEAD
            GeoBaseDistanceShape object;
            static PyObject *wrap_Object(const GeoBaseDistanceShape&);
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
