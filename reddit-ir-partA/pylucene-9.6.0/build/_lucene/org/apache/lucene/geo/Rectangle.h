#ifndef org_apache_lucene_geo_Rectangle_H
#define org_apache_lucene_geo_Rectangle_H

#include "org/apache/lucene/geo/LatLonGeometry.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class Rectangle;
        class Polygon;
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
      namespace geo {

        class Rectangle : public ::org::apache::lucene::geo::LatLonGeometry {
         public:
          enum {
            mid_init$_27e7fd2a85b6b12a,
            mid_axisLat_f1b2ed450bf62d32,
            mid_containsPoint_6f294aeaef0ff13b,
            mid_crossesDateline_ee8b0a5fa521ddac,
            mid_equals_6084f78e09b6c0c3,
            mid_fromPointDistance_6c38201936a16f79,
            mid_fromPolygon_e8be2ea1c934d424,
            mid_hashCode_15aa3d485e96b665,
            mid_toString_dc633f13a47328a8,
            mid_toComponent2D_29b6622932ac9ca0,
            max_mid
          };

          enum {
            fid_maxLat,
            fid_maxLon,
            fid_minLat,
            fid_minLon,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Rectangle(jobject obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Rectangle(const Rectangle& obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {}

          static jdouble AXISLAT_ERROR;

          jdouble _get_maxLat() const;
          jdouble _get_maxLon() const;
          jdouble _get_minLat() const;
          jdouble _get_minLon() const;

          Rectangle(jdouble, jdouble, jdouble, jdouble);

          static jdouble axisLat(jdouble, jdouble);
          static jboolean containsPoint(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          jboolean crossesDateline() const;
          jboolean equals(const ::java::lang::Object &) const;
          static Rectangle fromPointDistance(jdouble, jdouble, jdouble);
          static Rectangle fromPolygon(const JArray< ::org::apache::lucene::geo::Polygon > &);
          jint hashCode() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        extern PyType_Def PY_TYPE_DEF(Rectangle);
        extern PyTypeObject *PY_TYPE(Rectangle);

        class t_Rectangle {
        public:
          PyObject_HEAD
          Rectangle object;
          static PyObject *wrap_Object(const Rectangle&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
