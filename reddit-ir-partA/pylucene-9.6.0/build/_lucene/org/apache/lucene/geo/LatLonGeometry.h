#ifndef org_apache_lucene_geo_LatLonGeometry_H
#define org_apache_lucene_geo_LatLonGeometry_H

#include "org/apache/lucene/geo/Geometry.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class Component2D;
        class LatLonGeometry;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class LatLonGeometry : public ::org::apache::lucene::geo::Geometry {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_create_55915acf5178ce15,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LatLonGeometry(jobject obj) : ::org::apache::lucene::geo::Geometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LatLonGeometry(const LatLonGeometry& obj) : ::org::apache::lucene::geo::Geometry(obj) {}

          LatLonGeometry();

          static ::org::apache::lucene::geo::Component2D create(const JArray< LatLonGeometry > &);
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
        extern PyType_Def PY_TYPE_DEF(LatLonGeometry);
        extern PyTypeObject *PY_TYPE(LatLonGeometry);

        class t_LatLonGeometry {
        public:
          PyObject_HEAD
          LatLonGeometry object;
          static PyObject *wrap_Object(const LatLonGeometry&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
