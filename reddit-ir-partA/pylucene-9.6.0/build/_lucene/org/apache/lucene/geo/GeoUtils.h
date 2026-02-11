#ifndef org_apache_lucene_geo_GeoUtils_H
#define org_apache_lucene_geo_GeoUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues$Relation;
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
      namespace geo {

        class GeoUtils : public ::java::lang::Object {
         public:
          enum {
            mid_checkLatitude_c1f7206c104d501e,
            mid_checkLongitude_c1f7206c104d501e,
            mid_distanceQuerySortKey_7c88f981e0181669,
            mid_lineCrossesLine_341f27260b885ecf,
            mid_lineCrossesLineWithBoundary_341f27260b885ecf,
            mid_lineOverlapLine_341f27260b885ecf,
            mid_orient_62f63808f94e161f,
            mid_relate_86e8e8c6df288042,
            mid_sloppySin_7c88f981e0181669,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GeoUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GeoUtils(const GeoUtils& obj) : ::java::lang::Object(obj) {}

          static jdouble EARTH_MEAN_RADIUS_METERS;
          static jdouble MAX_LAT_INCL;
          static jdouble MAX_LAT_RADIANS;
          static jdouble MAX_LON_INCL;
          static jdouble MAX_LON_RADIANS;
          static jdouble MIN_LAT_INCL;
          static jdouble MIN_LAT_RADIANS;
          static jdouble MIN_LON_INCL;
          static jdouble MIN_LON_RADIANS;

          static void checkLatitude(jdouble);
          static void checkLongitude(jdouble);
          static jdouble distanceQuerySortKey(jdouble);
          static jboolean lineCrossesLine(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          static jboolean lineCrossesLineWithBoundary(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          static jboolean lineOverlapLine(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          static jint orient(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::index::PointValues$Relation relate(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          static jdouble sloppySin(jdouble);
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
        extern PyType_Def PY_TYPE_DEF(GeoUtils);
        extern PyTypeObject *PY_TYPE(GeoUtils);

        class t_GeoUtils {
        public:
          PyObject_HEAD
          GeoUtils object;
          static PyObject *wrap_Object(const GeoUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
