#ifndef org_apache_lucene_document_XYShape_H
#define org_apache_lucene_document_XYShape_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class Query;
      }
      namespace geo {
        class XYLine;
        class XYGeometry;
        class XYPolygon;
        class XYCircle;
      }
      namespace document {
        class Field;
        class XYShapeDocValuesField;
        class ShapeField$DecodedTriangle;
        class XYShapeDocValues;
        class ShapeField$QueryRelation;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class XYShape : public ::java::lang::Object {
         public:
          enum {
            mid_createDocValueField_639cace8dc940bba,
            mid_createDocValueField_5a178f0cf3fb9224,
            mid_createDocValueField_41dc3c297a706219,
            mid_createDocValueField_aafc1037e9054745,
            mid_createDocValueField_3ebca982f84eb5fe,
            mid_createDocValueField_f551f1ca14d6787f,
            mid_createIndexableFields_53447d3ca18f64cd,
            mid_createIndexableFields_b0bed7f82c592f88,
            mid_createIndexableFields_4425494403c4c03c,
            mid_createIndexableFields_59b9febaebeff247,
            mid_createXYShapeDocValues_6981369aa9f86ec9,
            mid_newBoxQuery_a2eed49ad15239f2,
            mid_newDistanceQuery_160144d1d90f2815,
            mid_newGeometryQuery_ffb0aad71bf6f24c,
            mid_newLineQuery_aea928eebb45bc5c,
            mid_newPointQuery_e4a7cdeedf8e5f86,
            mid_newPolygonQuery_5e6473f479407fd7,
            mid_newSlowDocValuesBoxQuery_a2eed49ad15239f2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYShape(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYShape(const XYShape& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::document::XYShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::org::apache::lucene::geo::XYLine &);
          static ::org::apache::lucene::document::XYShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::org::apache::lucene::geo::XYPolygon &);
          static ::org::apache::lucene::document::XYShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          static ::org::apache::lucene::document::XYShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::java::util::List &);
          static ::org::apache::lucene::document::XYShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::org::apache::lucene::geo::XYPolygon &, jboolean);
          static ::org::apache::lucene::document::XYShapeDocValuesField createDocValueField(const ::java::lang::String &, jfloat, jfloat);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, const ::org::apache::lucene::geo::XYLine &);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, const ::org::apache::lucene::geo::XYPolygon &);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, const ::org::apache::lucene::geo::XYPolygon &, jboolean);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, jfloat, jfloat);
          static ::org::apache::lucene::document::XYShapeDocValues createXYShapeDocValues(const ::org::apache::lucene::util::BytesRef &);
          static ::org::apache::lucene::search::Query newBoxQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, jfloat, jfloat, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newDistanceQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::XYCircle > &);
          static ::org::apache::lucene::search::Query newGeometryQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::XYGeometry > &);
          static ::org::apache::lucene::search::Query newLineQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::XYLine > &);
          static ::org::apache::lucene::search::Query newPointQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< JArray< jfloat > > &);
          static ::org::apache::lucene::search::Query newPolygonQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::XYPolygon > &);
          static ::org::apache::lucene::search::Query newSlowDocValuesBoxQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, jfloat, jfloat, jfloat, jfloat);
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
        extern PyType_Def PY_TYPE_DEF(XYShape);
        extern PyTypeObject *PY_TYPE(XYShape);

        class t_XYShape {
        public:
          PyObject_HEAD
          XYShape object;
          static PyObject *wrap_Object(const XYShape&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
