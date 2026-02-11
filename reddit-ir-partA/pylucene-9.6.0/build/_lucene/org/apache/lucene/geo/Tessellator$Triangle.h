#ifndef org_apache_lucene_geo_Tessellator$Triangle_H
#define org_apache_lucene_geo_Tessellator$Triangle_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class Tessellator$Triangle : public ::java::lang::Object {
         public:
          enum {
            mid_getEncodedX_58b165b57740feff,
            mid_getEncodedY_58b165b57740feff,
            mid_getX_1b05331da910c88e,
            mid_getY_1b05331da910c88e,
            mid_isEdgefromPolygon_92eccba87b045bbc,
            mid_toString_dc633f13a47328a8,
            mid_containsPoint_cb62a874659e1d79,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Tessellator$Triangle(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Tessellator$Triangle(const Tessellator$Triangle& obj) : ::java::lang::Object(obj) {}

          jint getEncodedX(jint) const;
          jint getEncodedY(jint) const;
          jdouble getX(jint) const;
          jdouble getY(jint) const;
          jboolean isEdgefromPolygon(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(Tessellator$Triangle);
        extern PyTypeObject *PY_TYPE(Tessellator$Triangle);

        class t_Tessellator$Triangle {
        public:
          PyObject_HEAD
          Tessellator$Triangle object;
          static PyObject *wrap_Object(const Tessellator$Triangle&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
