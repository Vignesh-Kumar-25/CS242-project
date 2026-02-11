#ifndef org_apache_lucene_geo_XYCircle_H
#define org_apache_lucene_geo_XYCircle_H

#include "org/apache/lucene/geo/XYGeometry.h"

namespace java {
  namespace lang {
    class String;
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class XYCircle : public ::org::apache::lucene::geo::XYGeometry {
         public:
          enum {
            mid_init$_14f56bf6b53c4897,
            mid_equals_6084f78e09b6c0c3,
            mid_getRadius_15cd8574741b1394,
            mid_getX_15cd8574741b1394,
            mid_getY_15cd8574741b1394,
            mid_hashCode_15aa3d485e96b665,
            mid_toString_dc633f13a47328a8,
            mid_toComponent2D_29b6622932ac9ca0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYCircle(jobject obj) : ::org::apache::lucene::geo::XYGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYCircle(const XYCircle& obj) : ::org::apache::lucene::geo::XYGeometry(obj) {}

          XYCircle(jfloat, jfloat, jfloat);

          jboolean equals(const ::java::lang::Object &) const;
          jfloat getRadius() const;
          jfloat getX() const;
          jfloat getY() const;
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
        extern PyType_Def PY_TYPE_DEF(XYCircle);
        extern PyTypeObject *PY_TYPE(XYCircle);

        class t_XYCircle {
        public:
          PyObject_HEAD
          XYCircle object;
          static PyObject *wrap_Object(const XYCircle&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
