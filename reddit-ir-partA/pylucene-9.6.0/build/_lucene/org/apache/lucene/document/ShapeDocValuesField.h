#ifndef org_apache_lucene_document_ShapeDocValuesField_H
#define org_apache_lucene_document_ShapeDocValuesField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace analysis {
        class TokenStream;
        class Analyzer;
      }
      namespace document {
        class ShapeField$DecodedTriangle$TYPE;
        class ShapeField$QueryRelation;
      }
      namespace index {
        class IndexableFieldType;
      }
      namespace geo {
        class Geometry;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class ShapeDocValuesField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_fieldType_3e8932d3a0a9bfc7,
            mid_getBoundingBox_a7b612ec5cb13da4,
            mid_getCentroid_a7b612ec5cb13da4,
            mid_getHighestDimensionType_4e2ddfbb607ab73e,
            mid_name_dc633f13a47328a8,
            mid_newGeometryQuery_3b252bfb0adb0a8a,
            mid_numberOfTerms_15aa3d485e96b665,
            mid_stringValue_dc633f13a47328a8,
            mid_tokenStream_ae53b87790ecd0e0,
            mid_decodeX_1b05331da910c88e,
            mid_decodeY_1b05331da910c88e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ShapeDocValuesField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ShapeDocValuesField(const ShapeDocValuesField& obj) : ::org::apache::lucene::document::Field(obj) {}

          ::org::apache::lucene::index::IndexableFieldType fieldType() const;
          ::org::apache::lucene::geo::Geometry getBoundingBox() const;
          ::org::apache::lucene::geo::Geometry getCentroid() const;
          ::org::apache::lucene::document::ShapeField$DecodedTriangle$TYPE getHighestDimensionType() const;
          ::java::lang::String name() const;
          static ::org::apache::lucene::search::Query newGeometryQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::java::lang::Object > &);
          jint numberOfTerms() const;
          ::java::lang::String stringValue() const;
          ::org::apache::lucene::analysis::TokenStream tokenStream(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::TokenStream &) const;
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
        extern PyType_Def PY_TYPE_DEF(ShapeDocValuesField);
        extern PyTypeObject *PY_TYPE(ShapeDocValuesField);

        class t_ShapeDocValuesField {
        public:
          PyObject_HEAD
          ShapeDocValuesField object;
          static PyObject *wrap_Object(const ShapeDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
