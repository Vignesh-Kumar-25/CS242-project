#ifndef org_apache_lucene_spatial3d_geom_GeoDegenerateVerticalLine_H
#define org_apache_lucene_spatial3d_geom_GeoDegenerateVerticalLine_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseBBox.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoBBox;
          class Bounds;
          class PlanetModel;
          class GeoShape;
          class GeoPoint;
          class Membership;
          class Plane;
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

          class GeoDegenerateVerticalLine : public ::org::apache::lucene::spatial3d::geom::GeoBaseBBox {
           public:
            enum {
              mid_init$_c14148c4903a3fb5,
              mid_init$_8675a317936e8883,
              mid_equals_6084f78e09b6c0c3,
              mid_expand_657c4bc7bffc20be,
              mid_getBounds_148bf0e42d9df610,
              mid_getCenter_595cce99edcbcb0d,
              mid_getEdgePoints_7adc41cd1f340433,
              mid_getRadius_409d010a7a53d0d1,
              mid_getRelationship_0e3266e5e7dbe8f4,
              mid_hashCode_15aa3d485e96b665,
              mid_intersects_2d1330e06052fa7f,
              mid_intersects_c7f0986e8bd724fb,
              mid_isWithin_a016004457263b15,
              mid_toString_dc633f13a47328a8,
              mid_write_065827f6e1eef6f6,
              mid_outsideDistance_2d4daa49f18a27e6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoDegenerateVerticalLine(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseBBox(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoDegenerateVerticalLine(const GeoDegenerateVerticalLine& obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseBBox(obj) {}

            GeoDegenerateVerticalLine(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            GeoDegenerateVerticalLine(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::spatial3d::geom::GeoBBox expand(jdouble) const;
            void getBounds(const ::org::apache::lucene::spatial3d::geom::Bounds &) const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint getCenter() const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > getEdgePoints() const;
            jdouble getRadius() const;
            jint getRelationship(const ::org::apache::lucene::spatial3d::geom::GeoShape &) const;
            jint hashCode() const;
            jboolean intersects(const ::org::apache::lucene::spatial3d::geom::GeoShape &) const;
            jboolean intersects(const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jboolean isWithin(jdouble, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoDegenerateVerticalLine);
          extern PyTypeObject *PY_TYPE(GeoDegenerateVerticalLine);

          class t_GeoDegenerateVerticalLine {
          public:
            PyObject_HEAD
            GeoDegenerateVerticalLine object;
            static PyObject *wrap_Object(const GeoDegenerateVerticalLine&);
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
