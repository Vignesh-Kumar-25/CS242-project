#ifndef org_apache_lucene_document_XYShapeDocValuesField_H
#define org_apache_lucene_document_XYShapeDocValuesField_H

#include "org/apache/lucene/document/ShapeDocValuesField.h"

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

        class XYShapeDocValuesField : public ::org::apache::lucene::document::ShapeDocValuesField {
         public:
          enum {
            mid_getBoundingBox_f1f34089c13593c2,
            mid_getCentroid_f34967fa3a6fb42b,
            mid_decodeX_1b05331da910c88e,
            mid_decodeY_1b05331da910c88e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYShapeDocValuesField(jobject obj) : ::org::apache::lucene::document::ShapeDocValuesField(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYShapeDocValuesField(const XYShapeDocValuesField& obj) : ::org::apache::lucene::document::ShapeDocValuesField(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(XYShapeDocValuesField);
        extern PyTypeObject *PY_TYPE(XYShapeDocValuesField);

        class t_XYShapeDocValuesField {
        public:
          PyObject_HEAD
          XYShapeDocValuesField object;
          static PyObject *wrap_Object(const XYShapeDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
