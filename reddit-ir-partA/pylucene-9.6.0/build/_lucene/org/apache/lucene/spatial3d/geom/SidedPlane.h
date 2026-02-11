#ifndef org_apache_lucene_spatial3d_geom_SidedPlane_H
#define org_apache_lucene_spatial3d_geom_SidedPlane_H

#include "org/apache/lucene/spatial3d/geom/Plane.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class Vector;
          class SidedPlane;
          class Membership;
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

          class SidedPlane : public ::org::apache::lucene::spatial3d::geom::Plane {
           public:
            enum {
              mid_init$_b8f2444d9c937727,
              mid_init$_1d244b69e7e410a2,
              mid_init$_1bb996835b6756b8,
              mid_init$_213e7bac97e82a3d,
              mid_init$_e5230b9ca0ce897e,
              mid_init$_340e9a4a84345b37,
              mid_init$_3a2969634bff3cb1,
              mid_init$_c1e65ed47212817f,
              mid_init$_694a86cc2a53b8b8,
              mid_init$_3b7219726a00e3dc,
              mid_constructNormalizedPerpendicularSidedPlane_6075c9f4e4e81069,
              mid_constructNormalizedThreePointSidedPlane_6075c9f4e4e81069,
              mid_constructSidedPlaneFromOnePoint_303e371053852c8c,
              mid_constructSidedPlaneFromTwoPoints_54eab513c41dee59,
              mid_equals_6084f78e09b6c0c3,
              mid_hashCode_15aa3d485e96b665,
              mid_isWithin_a016004457263b15,
              mid_strictlyWithin_1d367ac5bb95cd60,
              mid_strictlyWithin_a016004457263b15,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            enum {
              fid_sigNum,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SidedPlane(jobject obj) : ::org::apache::lucene::spatial3d::geom::Plane(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SidedPlane(const SidedPlane& obj) : ::org::apache::lucene::spatial3d::geom::Plane(obj) {}

            jdouble _get_sigNum() const;

            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble, jdouble);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, jboolean, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            SidedPlane(jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble, jdouble, jdouble);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble, jdouble, jdouble, jdouble);
            SidedPlane(jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble);

            static SidedPlane constructNormalizedPerpendicularSidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            static SidedPlane constructNormalizedThreePointSidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            static SidedPlane constructSidedPlaneFromOnePoint(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Plane &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            static SidedPlane constructSidedPlaneFromTwoPoints(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isWithin(jdouble, jdouble, jdouble) const;
            jboolean strictlyWithin(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean strictlyWithin(jdouble, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(SidedPlane);
          extern PyTypeObject *PY_TYPE(SidedPlane);

          class t_SidedPlane {
          public:
            PyObject_HEAD
            SidedPlane object;
            static PyObject *wrap_Object(const SidedPlane&);
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
