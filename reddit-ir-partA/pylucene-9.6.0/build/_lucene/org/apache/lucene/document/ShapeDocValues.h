#ifndef org_apache_lucene_document_ShapeDocValues_H
#define org_apache_lucene_document_ShapeDocValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace document {
        class ShapeField$DecodedTriangle$TYPE;
        class ShapeField$QueryRelation;
      }
      namespace geo {
        class Component2D;
        class Geometry;
      }
      namespace index {
        class PointValues$Relation;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class ShapeDocValues : public ::java::lang::Object {
         public:
          enum {
            mid_getBoundingBox_a7b612ec5cb13da4,
            mid_getCentroid_a7b612ec5cb13da4,
            mid_getEncodedMaxX_15aa3d485e96b665,
            mid_getEncodedMaxY_15aa3d485e96b665,
            mid_getEncodedMinX_15aa3d485e96b665,
            mid_getEncodedMinY_15aa3d485e96b665,
            mid_getHighestDimension_4e2ddfbb607ab73e,
            mid_newGeometryQuery_3b252bfb0adb0a8a,
            mid_numberOfTerms_15aa3d485e96b665,
            mid_relate_b61910e995087bd7,
            mid_binaryValue_e6961a1ebae5a29a,
            mid_getEncoder_1a3320711456b537,
            mid_getEncodedCentroidX_15aa3d485e96b665,
            mid_getEncodedCentroidY_15aa3d485e96b665,
            mid_computeCentroid_a7b612ec5cb13da4,
            mid_computeBoundingBox_a7b612ec5cb13da4,
            mid_vLongSize_0b5d0387e68ead8f,
            mid_vIntSize_58b165b57740feff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ShapeDocValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ShapeDocValues(const ShapeDocValues& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::geo::Geometry getBoundingBox() const;
          ::org::apache::lucene::geo::Geometry getCentroid() const;
          jint getEncodedMaxX() const;
          jint getEncodedMaxY() const;
          jint getEncodedMinX() const;
          jint getEncodedMinY() const;
          ::org::apache::lucene::document::ShapeField$DecodedTriangle$TYPE getHighestDimension() const;
          static ::org::apache::lucene::search::Query newGeometryQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::java::lang::Object > &);
          jint numberOfTerms() const;
          ::org::apache::lucene::index::PointValues$Relation relate(const ::org::apache::lucene::geo::Component2D &) const;
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
        extern PyType_Def PY_TYPE_DEF(ShapeDocValues);
        extern PyTypeObject *PY_TYPE(ShapeDocValues);

        class t_ShapeDocValues {
        public:
          PyObject_HEAD
          ShapeDocValues object;
          static PyObject *wrap_Object(const ShapeDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
