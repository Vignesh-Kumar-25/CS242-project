#ifndef org_apache_lucene_document_XYShapeDocValues_H
#define org_apache_lucene_document_XYShapeDocValues_H

#include "org/apache/lucene/document/ShapeDocValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class XYRectangle;
        class XYPoint;
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
      namespace document {

        class XYShapeDocValues : public ::org::apache::lucene::document::ShapeDocValues {
         public:
          enum {
            mid_getBoundingBox_f1f34089c13593c2,
            mid_getCentroid_f34967fa3a6fb42b,
            mid_getEncoder_1a3320711456b537,
            mid_computeCentroid_f34967fa3a6fb42b,
            mid_computeBoundingBox_f1f34089c13593c2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYShapeDocValues(jobject obj) : ::org::apache::lucene::document::ShapeDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYShapeDocValues(const XYShapeDocValues& obj) : ::org::apache::lucene::document::ShapeDocValues(obj) {}

          ::org::apache::lucene::geo::XYRectangle getBoundingBox() const;
          ::org::apache::lucene::geo::XYPoint getCentroid() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(XYShapeDocValues);
        extern PyTypeObject *PY_TYPE(XYShapeDocValues);

        class t_XYShapeDocValues {
        public:
          PyObject_HEAD
          XYShapeDocValues object;
          static PyObject *wrap_Object(const XYShapeDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
