#ifndef org_apache_lucene_document_XYDocValuesField_H
#define org_apache_lucene_document_XYDocValuesField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class SortField;
      }
      namespace geo {
        class XYGeometry;
        class XYPolygon;
      }
      namespace document {
        class FieldType;
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
      namespace document {

        class XYDocValuesField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_6328466a8ae9ee19,
            mid_newDistanceSort_44c0fd00eafc4f73,
            mid_newSlowBoxQuery_dad1754b0b65241e,
            mid_newSlowDistanceQuery_2a8054e02f3bc038,
            mid_newSlowGeometryQuery_10c6217d228e1bc5,
            mid_newSlowPolygonQuery_186814077566bda0,
            mid_setLocationValue_798c1353e7b22f8d,
            mid_toString_dc633f13a47328a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYDocValuesField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYDocValuesField(const XYDocValuesField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          XYDocValuesField(const ::java::lang::String &, jfloat, jfloat);

          static ::org::apache::lucene::search::SortField newDistanceSort(const ::java::lang::String &, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newSlowBoxQuery(const ::java::lang::String &, jfloat, jfloat, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newSlowDistanceQuery(const ::java::lang::String &, jfloat, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newSlowGeometryQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::geo::XYGeometry > &);
          static ::org::apache::lucene::search::Query newSlowPolygonQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::geo::XYPolygon > &);
          void setLocationValue(jfloat, jfloat) const;
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
      namespace document {
        extern PyType_Def PY_TYPE_DEF(XYDocValuesField);
        extern PyTypeObject *PY_TYPE(XYDocValuesField);

        class t_XYDocValuesField {
        public:
          PyObject_HEAD
          XYDocValuesField object;
          static PyObject *wrap_Object(const XYDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
