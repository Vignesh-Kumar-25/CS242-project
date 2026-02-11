#ifndef org_apache_lucene_geo_Component2D_H
#define org_apache_lucene_geo_Component2D_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class Component2D$WithinRelation;
      }
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

        class Component2D : public ::java::lang::Object {
         public:
          enum {
            mid_contains_cb62a874659e1d79,
            mid_containsLine_1c9e19ac6a711667,
            mid_containsLine_341f27260b885ecf,
            mid_containsPoint_6f294aeaef0ff13b,
            mid_containsTriangle_6f294aeaef0ff13b,
            mid_containsTriangle_a40dfc2d8e9551d9,
            mid_disjoint_341f27260b885ecf,
            mid_getMaxX_409d010a7a53d0d1,
            mid_getMaxY_409d010a7a53d0d1,
            mid_getMinX_409d010a7a53d0d1,
            mid_getMinY_409d010a7a53d0d1,
            mid_intersectsLine_1c9e19ac6a711667,
            mid_intersectsLine_341f27260b885ecf,
            mid_intersectsTriangle_6f294aeaef0ff13b,
            mid_intersectsTriangle_a40dfc2d8e9551d9,
            mid_pointInTriangle_7245e0161b518444,
            mid_relate_3312b69a1781cf93,
            mid_within_341f27260b885ecf,
            mid_withinLine_e4329c9ac8e7732b,
            mid_withinLine_cb511342aae317bc,
            mid_withinPoint_7595a685a78eaa7d,
            mid_withinTriangle_bcf1786c42c0e1ed,
            mid_withinTriangle_5a35df4121ec2e0b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Component2D(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Component2D(const Component2D& obj) : ::java::lang::Object(obj) {}

          jboolean contains(jdouble, jdouble) const;
          jboolean containsLine(jdouble, jdouble, jdouble, jdouble) const;
          jboolean containsLine(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          static jboolean containsPoint(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          jboolean containsTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          jboolean containsTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          static jboolean disjoint(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          jdouble getMaxX() const;
          jdouble getMaxY() const;
          jdouble getMinX() const;
          jdouble getMinY() const;
          jboolean intersectsLine(jdouble, jdouble, jdouble, jdouble) const;
          jboolean intersectsLine(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          jboolean intersectsTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          jboolean intersectsTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          static jboolean pointInTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          ::org::apache::lucene::index::PointValues$Relation relate(jdouble, jdouble, jdouble, jdouble) const;
          static jboolean within(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          ::org::apache::lucene::geo::Component2D$WithinRelation withinLine(jdouble, jdouble, jboolean, jdouble, jdouble) const;
          ::org::apache::lucene::geo::Component2D$WithinRelation withinLine(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean, jdouble, jdouble) const;
          ::org::apache::lucene::geo::Component2D$WithinRelation withinPoint(jdouble, jdouble) const;
          ::org::apache::lucene::geo::Component2D$WithinRelation withinTriangle(jdouble, jdouble, jboolean, jdouble, jdouble, jboolean, jdouble, jdouble, jboolean) const;
          ::org::apache::lucene::geo::Component2D$WithinRelation withinTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean, jdouble, jdouble, jboolean, jdouble, jdouble, jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(Component2D);
        extern PyTypeObject *PY_TYPE(Component2D);

        class t_Component2D {
        public:
          PyObject_HEAD
          Component2D object;
          static PyObject *wrap_Object(const Component2D&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
