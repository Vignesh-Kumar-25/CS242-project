#ifndef org_apache_lucene_geo_Tessellator_H
#define org_apache_lucene_geo_Tessellator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class Tessellator$Triangle;
        class Tessellator$Monitor;
        class XYPolygon;
        class Polygon;
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
      namespace geo {

        class Tessellator : public ::java::lang::Object {
         public:
          enum {
            mid_linesIntersect_341f27260b885ecf,
            mid_pointInPolygon_5e314d6697ff3059,
            mid_pointInTriangle_341f27260b885ecf,
            mid_tessellate_24d33d1639c4b8b4,
            mid_tessellate_7b101e0c61238b20,
            mid_tessellate_de7210e6d319daf3,
            mid_tessellate_654da4f883da3699,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Tessellator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Tessellator(const Tessellator& obj) : ::java::lang::Object(obj) {}

          static jboolean linesIntersect(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          static jboolean pointInPolygon(const ::java::util::List &, jdouble, jdouble);
          static jboolean pointInTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          static ::java::util::List tessellate(const ::org::apache::lucene::geo::Polygon &, jboolean);
          static ::java::util::List tessellate(const ::org::apache::lucene::geo::XYPolygon &, jboolean);
          static ::java::util::List tessellate(const ::org::apache::lucene::geo::Polygon &, jboolean, const ::org::apache::lucene::geo::Tessellator$Monitor &);
          static ::java::util::List tessellate(const ::org::apache::lucene::geo::XYPolygon &, jboolean, const ::org::apache::lucene::geo::Tessellator$Monitor &);
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
        extern PyType_Def PY_TYPE_DEF(Tessellator);
        extern PyTypeObject *PY_TYPE(Tessellator);

        class t_Tessellator {
        public:
          PyObject_HEAD
          Tessellator object;
          static PyObject *wrap_Object(const Tessellator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
