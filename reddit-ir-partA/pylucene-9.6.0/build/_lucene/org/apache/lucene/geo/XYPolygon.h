#ifndef org_apache_lucene_geo_XYPolygon_H
#define org_apache_lucene_geo_XYPolygon_H

#include "org/apache/lucene/geo/XYGeometry.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class GeoUtils$WindingOrder;
        class XYPolygon;
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

        class XYPolygon : public ::org::apache::lucene::geo::XYGeometry {
         public:
          enum {
            mid_init$_a7b9816e5f68e22d,
            mid_equals_6084f78e09b6c0c3,
            mid_getHoles_29e430f034cdfe41,
            mid_getPolyX_f9af2b083f7af575,
            mid_getPolyX_cc3c9b7e666e88d5,
            mid_getPolyY_f9af2b083f7af575,
            mid_getPolyY_cc3c9b7e666e88d5,
            mid_getWindingOrder_cddb866ffeca08f5,
            mid_hashCode_15aa3d485e96b665,
            mid_numHoles_15aa3d485e96b665,
            mid_numPoints_15aa3d485e96b665,
            mid_toString_dc633f13a47328a8,
            mid_toComponent2D_29b6622932ac9ca0,
            max_mid
          };

          enum {
            fid_maxX,
            fid_maxY,
            fid_minX,
            fid_minY,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYPolygon(jobject obj) : ::org::apache::lucene::geo::XYGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYPolygon(const XYPolygon& obj) : ::org::apache::lucene::geo::XYGeometry(obj) {}

          jfloat _get_maxX() const;
          jfloat _get_maxY() const;
          jfloat _get_minX() const;
          jfloat _get_minY() const;

          XYPolygon(const JArray< jfloat > &, const JArray< jfloat > &, const JArray< XYPolygon > &);

          jboolean equals(const ::java::lang::Object &) const;
          JArray< XYPolygon > getHoles() const;
          JArray< jfloat > getPolyX() const;
          jfloat getPolyX(jint) const;
          JArray< jfloat > getPolyY() const;
          jfloat getPolyY(jint) const;
          ::org::apache::lucene::geo::GeoUtils$WindingOrder getWindingOrder() const;
          jint hashCode() const;
          jint numHoles() const;
          jint numPoints() const;
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
        extern PyType_Def PY_TYPE_DEF(XYPolygon);
        extern PyTypeObject *PY_TYPE(XYPolygon);

        class t_XYPolygon {
        public:
          PyObject_HEAD
          XYPolygon object;
          static PyObject *wrap_Object(const XYPolygon&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
