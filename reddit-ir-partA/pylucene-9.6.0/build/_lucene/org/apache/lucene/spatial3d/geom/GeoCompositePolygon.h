#ifndef org_apache_lucene_spatial3d_geom_GeoCompositePolygon_H
#define org_apache_lucene_spatial3d_geom_GeoCompositePolygon_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseCompositeAreaShape.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoPolygon;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class InputStream;
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

          class GeoCompositePolygon : public ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeAreaShape {
           public:
            enum {
              mid_init$_5618eb5b554e7cc3,
              mid_init$_c14148c4903a3fb5,
              mid_equals_6084f78e09b6c0c3,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoCompositePolygon(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeAreaShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoCompositePolygon(const GeoCompositePolygon& obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeAreaShape(obj) {}

            GeoCompositePolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
            GeoCompositePolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);

            jboolean equals(const ::java::lang::Object &) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoCompositePolygon);
          extern PyTypeObject *PY_TYPE(GeoCompositePolygon);

          class t_GeoCompositePolygon {
          public:
            PyObject_HEAD
            GeoCompositePolygon object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GeoCompositePolygon *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GeoCompositePolygon&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GeoCompositePolygon&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
