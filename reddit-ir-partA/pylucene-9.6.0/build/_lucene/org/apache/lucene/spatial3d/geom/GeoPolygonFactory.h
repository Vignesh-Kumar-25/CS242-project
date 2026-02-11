#ifndef org_apache_lucene_spatial3d_geom_GeoPolygonFactory_H
#define org_apache_lucene_spatial3d_geom_GeoPolygonFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoPolygonFactory$PolygonDescription;
          class PlanetModel;
          class GeoPoint;
          class GeoPolygon;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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

          class GeoPolygonFactory : public ::java::lang::Object {
           public:
            enum {
              mid_makeGeoConcavePolygon_e054480a95ccae0c,
              mid_makeGeoConcavePolygon_b2ca53a118feee18,
              mid_makeGeoConvexPolygon_e054480a95ccae0c,
              mid_makeGeoConvexPolygon_b2ca53a118feee18,
              mid_makeGeoPolygon_eb7889a04831d2eb,
              mid_makeGeoPolygon_e054480a95ccae0c,
              mid_makeGeoPolygon_08b7dac086389966,
              mid_makeGeoPolygon_b2ca53a118feee18,
              mid_makeGeoPolygon_30bf660a00bebae9,
              mid_makeLargeGeoPolygon_e054480a95ccae0c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoPolygonFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoPolygonFactory(const GeoPolygonFactory& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoConcavePolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoConcavePolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoConvexPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoConvexPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPolygonFactory$PolygonDescription &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPolygonFactory$PolygonDescription &, jdouble);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &, const ::java::util::List &, jdouble);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeLargeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &);
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
          extern PyType_Def PY_TYPE_DEF(GeoPolygonFactory);
          extern PyTypeObject *PY_TYPE(GeoPolygonFactory);

          class t_GeoPolygonFactory {
          public:
            PyObject_HEAD
            GeoPolygonFactory object;
            static PyObject *wrap_Object(const GeoPolygonFactory&);
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
