#ifndef org_apache_lucene_spatial3d_geom_PlanetModel$DocValueEncoder_H
#define org_apache_lucene_spatial3d_geom_PlanetModel$DocValueEncoder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoPoint;
        }
      }
    }
  }
}
namespace java {
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

          class PlanetModel$DocValueEncoder : public ::java::lang::Object {
           public:
            enum {
              mid_decodePoint_ac8bebff7f8b6e2d,
              mid_decodeXValue_8936154681cd8b8e,
              mid_decodeYValue_8936154681cd8b8e,
              mid_decodeZValue_8936154681cd8b8e,
              mid_encodePoint_2c88eb3de410ef64,
              mid_encodePoint_04fc039dd830efba,
              mid_roundDownX_7c88f981e0181669,
              mid_roundDownY_7c88f981e0181669,
              mid_roundDownZ_7c88f981e0181669,
              mid_roundUpX_7c88f981e0181669,
              mid_roundUpY_7c88f981e0181669,
              mid_roundUpZ_7c88f981e0181669,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PlanetModel$DocValueEncoder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PlanetModel$DocValueEncoder(const PlanetModel$DocValueEncoder& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::spatial3d::geom::GeoPoint decodePoint(jlong) const;
            jdouble decodeXValue(jlong) const;
            jdouble decodeYValue(jlong) const;
            jdouble decodeZValue(jlong) const;
            jlong encodePoint(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jlong encodePoint(jdouble, jdouble, jdouble) const;
            jdouble roundDownX(jdouble) const;
            jdouble roundDownY(jdouble) const;
            jdouble roundDownZ(jdouble) const;
            jdouble roundUpX(jdouble) const;
            jdouble roundUpY(jdouble) const;
            jdouble roundUpZ(jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(PlanetModel$DocValueEncoder);
          extern PyTypeObject *PY_TYPE(PlanetModel$DocValueEncoder);

          class t_PlanetModel$DocValueEncoder {
          public:
            PyObject_HEAD
            PlanetModel$DocValueEncoder object;
            static PyObject *wrap_Object(const PlanetModel$DocValueEncoder&);
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
