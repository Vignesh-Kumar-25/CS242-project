#ifndef org_apache_lucene_spatial3d_geom_Bounds_H
#define org_apache_lucene_spatial3d_geom_Bounds_H

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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class Bounds : public ::java::lang::Object {
           public:
            enum {
              mid_addHorizontalPlane_c7fc391f0f2d993e,
              mid_addIntersection_b5f074157416ff41,
              mid_addPlane_eeb20047385e9adc,
              mid_addPoint_2fe3b7209f437743,
              mid_addVerticalPlane_c7fc391f0f2d993e,
              mid_addXValue_2fe3b7209f437743,
              mid_addYValue_2fe3b7209f437743,
              mid_addZValue_2fe3b7209f437743,
              mid_isWide_1b9d5a42d85d8f74,
              mid_noBottomLatitudeBound_1b9d5a42d85d8f74,
              mid_noBound_2498930b80a010fc,
              mid_noLongitudeBound_1b9d5a42d85d8f74,
              mid_noTopLatitudeBound_1b9d5a42d85d8f74,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Bounds(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Bounds(const Bounds& obj) : ::java::lang::Object(obj) {}

            Bounds addHorizontalPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            Bounds addIntersection(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            Bounds addPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            Bounds addPoint(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            Bounds addVerticalPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            Bounds addXValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            Bounds addYValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            Bounds addZValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            Bounds isWide() const;
            Bounds noBottomLatitudeBound() const;
            Bounds noBound(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            Bounds noLongitudeBound() const;
            Bounds noTopLatitudeBound() const;
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
          extern PyType_Def PY_TYPE_DEF(Bounds);
          extern PyTypeObject *PY_TYPE(Bounds);

          class t_Bounds {
          public:
            PyObject_HEAD
            Bounds object;
            static PyObject *wrap_Object(const Bounds&);
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
