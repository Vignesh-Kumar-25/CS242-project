#ifndef org_apache_lucene_document_LatLonShape_H
#define org_apache_lucene_document_LatLonShape_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class Line;
        class LatLonGeometry;
        class Polygon;
        class Circle;
      }
      namespace util {
        class BytesRef;
      }
      namespace search {
        class Query;
      }
      namespace document {
        class Field;
        class LatLonShapeDocValuesField;
        class ShapeField$DecodedTriangle;
        class LatLonShapeDocValues;
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

        class LatLonShape : public ::java::lang::Object {
         public:
          enum {
            mid_createDocValueField_f225da85d156f4ab,
            mid_createDocValueField_57b2d70da83c7c39,
            mid_createDocValueField_119e99c5dfd566ac,
            mid_createDocValueField_076c7f93238a0a76,
            mid_createDocValueField_e048b03d5443f956,
            mid_createDocValueField_859080f753aa4bf6,
            mid_createDocValueField_7ed5a000ab82a222,
            mid_createIndexableFields_5cd832e5a639d70c,
            mid_createIndexableFields_13e620d85b97a7ff,
            mid_createIndexableFields_aa4b8e107c569390,
            mid_createIndexableFields_d7b1b52dec2ab650,
            mid_createLatLonShapeDocValues_144f6fd26007fd69,
            mid_newBoxQuery_ba37f6a4db403b52,
            mid_newDistanceQuery_e98c11f2b7f162af,
            mid_newGeometryQuery_946795f47d34ff1f,
            mid_newLineQuery_0dbd2cdd20af5032,
            mid_newPointQuery_08b39c2dfd0ca58f,
            mid_newPolygonQuery_86934c7a893eb7e1,
            mid_newSlowDocValuesBoxQuery_ba37f6a4db403b52,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LatLonShape(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LatLonShape(const LatLonShape& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::document::LatLonShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::org::apache::lucene::geo::Line &);
          static ::org::apache::lucene::document::LatLonShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::org::apache::lucene::geo::Polygon &);
          static ::org::apache::lucene::document::LatLonShapeDocValuesField createDocValueField(const ::java::lang::String &, const JArray< ::org::apache::lucene::document::Field > &);
          static ::org::apache::lucene::document::LatLonShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          static ::org::apache::lucene::document::LatLonShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::java::util::List &);
          static ::org::apache::lucene::document::LatLonShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::org::apache::lucene::geo::Polygon &, jboolean);
          static ::org::apache::lucene::document::LatLonShapeDocValuesField createDocValueField(const ::java::lang::String &, jdouble, jdouble);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, const ::org::apache::lucene::geo::Line &);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, const ::org::apache::lucene::geo::Polygon &);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, const ::org::apache::lucene::geo::Polygon &, jboolean);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, jdouble, jdouble);
          static ::org::apache::lucene::document::LatLonShapeDocValues createLatLonShapeDocValues(const ::org::apache::lucene::util::BytesRef &);
          static ::org::apache::lucene::search::Query newBoxQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, jdouble, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newDistanceQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::Circle > &);
          static ::org::apache::lucene::search::Query newGeometryQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::LatLonGeometry > &);
          static ::org::apache::lucene::search::Query newLineQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::Line > &);
          static ::org::apache::lucene::search::Query newPointQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< JArray< jdouble > > &);
          static ::org::apache::lucene::search::Query newPolygonQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::Polygon > &);
          static ::org::apache::lucene::search::Query newSlowDocValuesBoxQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, jdouble, jdouble, jdouble, jdouble);
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
        extern PyType_Def PY_TYPE_DEF(LatLonShape);
        extern PyTypeObject *PY_TYPE(LatLonShape);

        class t_LatLonShape {
        public:
          PyObject_HEAD
          LatLonShape object;
          static PyObject *wrap_Object(const LatLonShape&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
