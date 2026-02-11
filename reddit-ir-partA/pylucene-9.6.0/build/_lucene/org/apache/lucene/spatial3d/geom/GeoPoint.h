#ifndef org_apache_lucene_spatial3d_geom_GeoPoint_H
#define org_apache_lucene_spatial3d_geom_GeoPoint_H

#include "org/apache/lucene/spatial3d/geom/Vector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoPoint;
          class SerializableObject;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class GeoPoint : public ::org::apache::lucene::spatial3d::geom::Vector {
           public:
            enum {
              mid_init$_839363fac538f4b4,
              mid_init$_c14148c4903a3fb5,
              mid_init$_e8f003ece83ec902,
              mid_init$_91f0c49f52586c86,
              mid_init$_27e7fd2a85b6b12a,
              mid_init$_5021e54ef13fd05a,
              mid_init$_f9caf03e971d9d79,
              mid_init$_63644b6e10878f04,
              mid_init$_0dedf9cc3ceadd9e,
              mid_arcDistance_8d808cbfe5d9b0c5,
              mid_arcDistance_5a35cd32646ff38f,
              mid_getLatitude_409d010a7a53d0d1,
              mid_getLongitude_409d010a7a53d0d1,
              mid_isIdentical_61a4dbd020bdfb63,
              mid_isIdentical_a016004457263b15,
              mid_magnitude_409d010a7a53d0d1,
              mid_toString_dc633f13a47328a8,
              mid_write_065827f6e1eef6f6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoPoint(jobject obj) : ::org::apache::lucene::spatial3d::geom::Vector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoPoint(const GeoPoint& obj) : ::org::apache::lucene::spatial3d::geom::Vector(obj) {}

            GeoPoint(const ::java::io::InputStream &);
            GeoPoint(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            GeoPoint(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble);
            GeoPoint(jdouble, jdouble, jdouble);
            GeoPoint(jdouble, jdouble, jdouble, jdouble);
            GeoPoint(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, jdouble);
            GeoPoint(jdouble, jdouble, jdouble, jdouble, jdouble);
            GeoPoint(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
            GeoPoint(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

            jdouble arcDistance(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jdouble arcDistance(jdouble, jdouble, jdouble) const;
            jdouble getLatitude() const;
            jdouble getLongitude() const;
            jboolean isIdentical(const GeoPoint &) const;
            jboolean isIdentical(jdouble, jdouble, jdouble) const;
            jdouble magnitude() const;
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
          extern PyType_Def PY_TYPE_DEF(GeoPoint);
          extern PyTypeObject *PY_TYPE(GeoPoint);

          class t_GeoPoint {
          public:
            PyObject_HEAD
            GeoPoint object;
            static PyObject *wrap_Object(const GeoPoint&);
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
