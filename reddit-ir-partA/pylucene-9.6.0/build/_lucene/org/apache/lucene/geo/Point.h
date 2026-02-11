#ifndef org_apache_lucene_geo_Point_H
#define org_apache_lucene_geo_Point_H

#include "org/apache/lucene/geo/LatLonGeometry.h"

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

        class Point : public ::org::apache::lucene::geo::LatLonGeometry {
         public:
          enum {
            mid_init$_5b7432ea59dac3d5,
            mid_equals_6084f78e09b6c0c3,
            mid_getLat_409d010a7a53d0d1,
            mid_getLon_409d010a7a53d0d1,
            mid_hashCode_15aa3d485e96b665,
            mid_toString_dc633f13a47328a8,
            mid_toComponent2D_29b6622932ac9ca0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Point(jobject obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Point(const Point& obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {}

          Point(jdouble, jdouble);

          jboolean equals(const ::java::lang::Object &) const;
          jdouble getLat() const;
          jdouble getLon() const;
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
        extern PyType_Def PY_TYPE_DEF(Point);
        extern PyTypeObject *PY_TYPE(Point);

        class t_Point {
        public:
          PyObject_HEAD
          Point object;
          static PyObject *wrap_Object(const Point&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
