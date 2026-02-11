#ifndef org_apache_lucene_spatial3d_geom_GeoBaseMembershipShape_H
#define org_apache_lucene_spatial3d_geom_GeoBaseMembershipShape_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseShape.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoPoint;
          class DistanceStyle;
          class Vector;
          class GeoMembershipShape;
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

          class GeoBaseMembershipShape : public ::org::apache::lucene::spatial3d::geom::GeoBaseShape {
           public:
            enum {
              mid_init$_5618eb5b554e7cc3,
              mid_computeOutsideDistance_e1bf5924b6cdd15f,
              mid_computeOutsideDistance_2d4daa49f18a27e6,
              mid_isWithin_1d367ac5bb95cd60,
              mid_outsideDistance_2d4daa49f18a27e6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoBaseMembershipShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoBaseMembershipShape(const GeoBaseMembershipShape& obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseShape(obj) {}

            GeoBaseMembershipShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);

            jdouble computeOutsideDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jdouble computeOutsideDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, jdouble, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoBaseMembershipShape);
          extern PyTypeObject *PY_TYPE(GeoBaseMembershipShape);

          class t_GeoBaseMembershipShape {
          public:
            PyObject_HEAD
            GeoBaseMembershipShape object;
            static PyObject *wrap_Object(const GeoBaseMembershipShape&);
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
