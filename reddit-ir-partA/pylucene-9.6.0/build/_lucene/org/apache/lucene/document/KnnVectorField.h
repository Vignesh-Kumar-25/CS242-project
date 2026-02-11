#ifndef org_apache_lucene_document_KnnVectorField_H
#define org_apache_lucene_document_KnnVectorField_H

#include "org/apache/lucene/document/KnnFloatVectorField.h"

namespace org {
  namespace apache {
    namespace lucene {
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
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class KnnVectorField : public ::org::apache::lucene::document::KnnFloatVectorField {
         public:
          enum {
            mid_init$_553eaf24cedf394c,
            mid_init$_e0cac37de1ad952b,
            mid_init$_a06859c14f3651ca,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnVectorField(jobject obj) : ::org::apache::lucene::document::KnnFloatVectorField(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnVectorField(const KnnVectorField& obj) : ::org::apache::lucene::document::KnnFloatVectorField(obj) {}

          KnnVectorField(const ::java::lang::String &, const JArray< jfloat > &);
          KnnVectorField(const ::java::lang::String &, const JArray< jfloat > &, const ::org::apache::lucene::index::VectorSimilarityFunction &);
          KnnVectorField(const ::java::lang::String &, const JArray< jfloat > &, const ::org::apache::lucene::document::FieldType &);
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
        extern PyType_Def PY_TYPE_DEF(KnnVectorField);
        extern PyTypeObject *PY_TYPE(KnnVectorField);

        class t_KnnVectorField {
        public:
          PyObject_HEAD
          KnnVectorField object;
          static PyObject *wrap_Object(const KnnVectorField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
