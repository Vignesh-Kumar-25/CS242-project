#ifndef org_apache_lucene_document_KnnByteVectorField_H
#define org_apache_lucene_document_KnnByteVectorField_H

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

        class KnnByteVectorField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_174a976e57f9dbb5,
            mid_init$_e58dd5684c4cb648,
            mid_init$_6a8eb33f116a71e3,
            mid_createFieldType_38109aa09f0a989d,
            mid_newVectorQuery_bfca73f27b2259f3,
            mid_setVectorValue_e11791089a78895a,
            mid_vectorValue_f4d7c022fb7af16d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnByteVectorField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnByteVectorField(const KnnByteVectorField& obj) : ::org::apache::lucene::document::Field(obj) {}

          KnnByteVectorField(const ::java::lang::String &, const JArray< jbyte > &);
          KnnByteVectorField(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::index::VectorSimilarityFunction &);
          KnnByteVectorField(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::document::FieldType &);

          static ::org::apache::lucene::document::FieldType createFieldType(jint, const ::org::apache::lucene::index::VectorSimilarityFunction &);
          static ::org::apache::lucene::search::Query newVectorQuery(const ::java::lang::String &, const JArray< jbyte > &, jint);
          void setVectorValue(const JArray< jbyte > &) const;
          JArray< jbyte > vectorValue() const;
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
        extern PyType_Def PY_TYPE_DEF(KnnByteVectorField);
        extern PyTypeObject *PY_TYPE(KnnByteVectorField);

        class t_KnnByteVectorField {
        public:
          PyObject_HEAD
          KnnByteVectorField object;
          static PyObject *wrap_Object(const KnnByteVectorField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
