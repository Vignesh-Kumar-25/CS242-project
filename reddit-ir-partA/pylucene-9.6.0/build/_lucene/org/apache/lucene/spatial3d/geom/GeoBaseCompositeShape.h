#ifndef org_apache_lucene_spatial3d_geom_GeoBaseCompositeShape_H
#define org_apache_lucene_spatial3d_geom_GeoBaseCompositeShape_H

#include "org/apache/lucene/spatial3d/geom/BasePlanetObject.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Bounds;
          class PlanetModel;
          class GeoShape;
          class GeoPoint;
          class Vector;
          class Membership;
          class Plane;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class InputStream;
    class OutputStream;
    class IOException;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class GeoBaseCompositeShape : public ::org::apache::lucene::spatial3d::geom::BasePlanetObject {
           public:
            enum {
              mid_init$_5618eb5b554e7cc3,
              mid_init$_92e13773db403733,
              mid_addShape_ea597b610803490a,
              mid_equals_6084f78e09b6c0c3,
              mid_getBounds_148bf0e42d9df610,
              mid_getEdgePoints_7adc41cd1f340433,
              mid_getShape_d9a052c2f3d0aa0c,
              mid_getShapes_0bc66e960964b70a,
              mid_hashCode_15aa3d485e96b665,
              mid_intersects_c7f0986e8bd724fb,
              mid_isWithin_1d367ac5bb95cd60,
              mid_isWithin_a016004457263b15,
              mid_size_15aa3d485e96b665,
              mid_write_065827f6e1eef6f6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoBaseCompositeShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::BasePlanetObject(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoBaseCompositeShape(const GeoBaseCompositeShape& obj) : ::org::apache::lucene::spatial3d::geom::BasePlanetObject(obj) {}

            GeoBaseCompositeShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
            GeoBaseCompositeShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &, const ::java::lang::Class &);

            void addShape(const ::org::apache::lucene::spatial3d::geom::GeoShape &) const;
            jboolean equals(const ::java::lang::Object &) const;
            void getBounds(const ::org::apache::lucene::spatial3d::geom::Bounds &) const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > getEdgePoints() const;
            ::org::apache::lucene::spatial3d::geom::GeoShape getShape(jint) const;
            ::java::util::List getShapes() const;
            jint hashCode() const;
            jboolean intersects(const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jboolean isWithin(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean isWithin(jdouble, jdouble, jdouble) const;
            jint size() const;
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
          extern PyType_Def PY_TYPE_DEF(GeoBaseCompositeShape);
          extern PyTypeObject *PY_TYPE(GeoBaseCompositeShape);

          class t_GeoBaseCompositeShape {
          public:
            PyObject_HEAD
            GeoBaseCompositeShape object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GeoBaseCompositeShape *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GeoBaseCompositeShape&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GeoBaseCompositeShape&, PyTypeObject *);
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
