#ifndef org_apache_lucene_geo_GeoEncodingUtils_H
#define org_apache_lucene_geo_GeoEncodingUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class GeoEncodingUtils$Component2DPredicate;
        class Component2D;
        class GeoEncodingUtils$DistancePredicate;
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

        class GeoEncodingUtils : public ::java::lang::Object {
         public:
          enum {
            mid_createComponentPredicate_66ebb2e6ffbc1a26,
            mid_createDistancePredicate_cd4ee828c6b1f5fa,
            mid_decodeLatitude_1b05331da910c88e,
            mid_decodeLatitude_35bdd754c40e27f2,
            mid_decodeLongitude_1b05331da910c88e,
            mid_decodeLongitude_35bdd754c40e27f2,
            mid_encodeLatitude_32aa492f89a44f0c,
            mid_encodeLatitudeCeil_32aa492f89a44f0c,
            mid_encodeLongitude_32aa492f89a44f0c,
            mid_encodeLongitudeCeil_32aa492f89a44f0c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GeoEncodingUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GeoEncodingUtils(const GeoEncodingUtils& obj) : ::java::lang::Object(obj) {}

          static jshort BITS;
          static jint MAX_LON_ENCODED;
          static jint MIN_LON_ENCODED;

          static ::org::apache::lucene::geo::GeoEncodingUtils$Component2DPredicate createComponentPredicate(const ::org::apache::lucene::geo::Component2D &);
          static ::org::apache::lucene::geo::GeoEncodingUtils$DistancePredicate createDistancePredicate(jdouble, jdouble, jdouble);
          static jdouble decodeLatitude(jint);
          static jdouble decodeLatitude(const JArray< jbyte > &, jint);
          static jdouble decodeLongitude(jint);
          static jdouble decodeLongitude(const JArray< jbyte > &, jint);
          static jint encodeLatitude(jdouble);
          static jint encodeLatitudeCeil(jdouble);
          static jint encodeLongitude(jdouble);
          static jint encodeLongitudeCeil(jdouble);
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
        extern PyType_Def PY_TYPE_DEF(GeoEncodingUtils);
        extern PyTypeObject *PY_TYPE(GeoEncodingUtils);

        class t_GeoEncodingUtils {
        public:
          PyObject_HEAD
          GeoEncodingUtils object;
          static PyObject *wrap_Object(const GeoEncodingUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
