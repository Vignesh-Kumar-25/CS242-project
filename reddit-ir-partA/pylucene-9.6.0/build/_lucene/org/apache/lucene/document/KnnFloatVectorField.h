#ifndef org_apache_lucene_document_KnnFloatVectorField_H
#define org_apache_lucene_document_KnnFloatVectorField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace document {
        class FieldType;
      }
      namespace index {
        class VectorSimilarityFunction;
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

        class KnnFloatVectorField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_553eaf24cedf394c,
            mid_init$_e0cac37de1ad952b,
            mid_init$_a06859c14f3651ca,
            mid_createFieldType_38109aa09f0a989d,
            mid_newVectorQuery_60177de7acab14c9,
            mid_setVectorValue_67ba706c3e390a2e,
            mid_vectorValue_f9af2b083f7af575,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnFloatVectorField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnFloatVectorField(const KnnFloatVectorField& obj) : ::org::apache::lucene::document::Field(obj) {}

          KnnFloatVectorField(const ::java::lang::String &, const JArray< jfloat > &);
          KnnFloatVectorField(const ::java::lang::String &, const JArray< jfloat > &, const ::org::apache::lucene::index::VectorSimilarityFunction &);
          KnnFloatVectorField(const ::java::lang::String &, const JArray< jfloat > &, const ::org::apache::lucene::document::FieldType &);

          static ::org::apache::lucene::document::FieldType createFieldType(jint, const ::org::apache::lucene::index::VectorSimilarityFunction &);
          static ::org::apache::lucene::search::Query newVectorQuery(const ::java::lang::String &, const JArray< jfloat > &, jint);
          void setVectorValue(const JArray< jfloat > &) const;
          JArray< jfloat > vectorValue() const;
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
        extern PyType_Def PY_TYPE_DEF(KnnFloatVectorField);
        extern PyTypeObject *PY_TYPE(KnnFloatVectorField);

        class t_KnnFloatVectorField {
        public:
          PyObject_HEAD
          KnnFloatVectorField object;
          static PyObject *wrap_Object(const KnnFloatVectorField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
