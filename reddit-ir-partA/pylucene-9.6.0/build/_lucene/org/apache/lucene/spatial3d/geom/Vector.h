#ifndef org_apache_lucene_spatial3d_geom_Vector_H
#define org_apache_lucene_spatial3d_geom_Vector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Vector;
          class Membership;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class Vector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b8f2444d9c937727,
              mid_init$_91f0c49f52586c86,
              mid_init$_f1938d9234395c5f,
              mid_init$_63644b6e10878f04,
              mid_crossProductEvaluateIsZero_39e77c4d40021339,
              mid_dotProduct_8d808cbfe5d9b0c5,
              mid_dotProduct_5a35cd32646ff38f,
              mid_equals_6084f78e09b6c0c3,
              mid_hashCode_15aa3d485e96b665,
              mid_isNumericallyIdentical_1d367ac5bb95cd60,
              mid_isNumericallyIdentical_a016004457263b15,
              mid_isParallel_1d367ac5bb95cd60,
              mid_isParallel_a016004457263b15,
              mid_isWithin_1afc30d600cb353f,
              mid_linearDistance_8d808cbfe5d9b0c5,
              mid_linearDistance_5a35cd32646ff38f,
              mid_linearDistanceSquared_8d808cbfe5d9b0c5,
              mid_linearDistanceSquared_5a35cd32646ff38f,
              mid_magnitude_409d010a7a53d0d1,
              mid_magnitude_5a35cd32646ff38f,
              mid_normalDistance_8d808cbfe5d9b0c5,
              mid_normalDistance_5a35cd32646ff38f,
              mid_normalDistanceSquared_8d808cbfe5d9b0c5,
              mid_normalDistanceSquared_5a35cd32646ff38f,
              mid_normalize_9fb7b8135db3a94a,
              mid_rotateXY_d91e5ee0579146e4,
              mid_rotateXY_2cbf309f51fbf4b3,
              mid_rotateXZ_d91e5ee0579146e4,
              mid_rotateXZ_2cbf309f51fbf4b3,
              mid_rotateZY_d91e5ee0579146e4,
              mid_rotateZY_2cbf309f51fbf4b3,
              mid_toString_dc633f13a47328a8,
              mid_translate_5caf7087b64efc8d,
              max_mid
            };

            enum {
              fid_x,
              fid_y,
              fid_z,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Vector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Vector(const Vector& obj) : ::java::lang::Object(obj) {}

            static jdouble MINIMUM_ANGULAR_RESOLUTION;
            static jdouble MINIMUM_RESOLUTION;
            static jdouble MINIMUM_RESOLUTION_CUBED;
            static jdouble MINIMUM_RESOLUTION_SQUARED;

            jdouble _get_x() const;
            jdouble _get_y() const;
            jdouble _get_z() const;

            Vector(const Vector &, const Vector &);
            Vector(jdouble, jdouble, jdouble);
            Vector(const Vector &, jdouble, jdouble, jdouble);
            Vector(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

            static jboolean crossProductEvaluateIsZero(const Vector &, const Vector &, const Vector &);
            jdouble dotProduct(const Vector &) const;
            jdouble dotProduct(jdouble, jdouble, jdouble) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isNumericallyIdentical(const Vector &) const;
            jboolean isNumericallyIdentical(jdouble, jdouble, jdouble) const;
            jboolean isParallel(const Vector &) const;
            jboolean isParallel(jdouble, jdouble, jdouble) const;
            jboolean isWithin(const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble linearDistance(const Vector &) const;
            jdouble linearDistance(jdouble, jdouble, jdouble) const;
            jdouble linearDistanceSquared(const Vector &) const;
            jdouble linearDistanceSquared(jdouble, jdouble, jdouble) const;
            jdouble magnitude() const;
            static jdouble magnitude(jdouble, jdouble, jdouble);
            jdouble normalDistance(const Vector &) const;
            jdouble normalDistance(jdouble, jdouble, jdouble) const;
            jdouble normalDistanceSquared(const Vector &) const;
            jdouble normalDistanceSquared(jdouble, jdouble, jdouble) const;
            Vector normalize() const;
            Vector rotateXY(jdouble) const;
            Vector rotateXY(jdouble, jdouble) const;
            Vector rotateXZ(jdouble) const;
            Vector rotateXZ(jdouble, jdouble) const;
            Vector rotateZY(jdouble) const;
            Vector rotateZY(jdouble, jdouble) const;
            ::java::lang::String toString() const;
            Vector translate(jdouble, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(Vector);
          extern PyTypeObject *PY_TYPE(Vector);

          class t_Vector {
          public:
            PyObject_HEAD
            Vector object;
            static PyObject *wrap_Object(const Vector&);
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
