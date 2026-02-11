#ifndef org_apache_lucene_geo_XYRectangle_H
#define org_apache_lucene_geo_XYRectangle_H

#include "org/apache/lucene/geo/XYGeometry.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class XYRectangle;
      }
    }
  }
}
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

        class XYRectangle : public ::org::apache::lucene::geo::XYGeometry {
         public:
          enum {
            mid_init$_407efac2e17143fe,
            mid_equals_6084f78e09b6c0c3,
            mid_fromPointDistance_2b6fe3e6bbf80b19,
            mid_hashCode_15aa3d485e96b665,
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

          explicit XYRectangle(jobject obj) : ::org::apache::lucene::geo::XYGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYRectangle(const XYRectangle& obj) : ::org::apache::lucene::geo::XYGeometry(obj) {}

          jfloat _get_maxX() const;
          jfloat _get_maxY() const;
          jfloat _get_minX() const;
          jfloat _get_minY() const;

          XYRectangle(jfloat, jfloat, jfloat, jfloat);

          jboolean equals(const ::java::lang::Object &) const;
          static XYRectangle fromPointDistance(jfloat, jfloat, jfloat);
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
        extern PyType_Def PY_TYPE_DEF(XYRectangle);
        extern PyTypeObject *PY_TYPE(XYRectangle);

        class t_XYRectangle {
        public:
          PyObject_HEAD
          XYRectangle object;
          static PyObject *wrap_Object(const XYRectangle&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
