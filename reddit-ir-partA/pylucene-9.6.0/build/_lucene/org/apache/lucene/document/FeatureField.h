#ifndef org_apache_lucene_document_FeatureField_H
#define org_apache_lucene_document_FeatureField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class DoubleValuesSource;
        class SortField;
      }
      namespace analysis {
        class TokenStream;
        class Analyzer;
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

        class FeatureField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_ff791d5f7ed8e193,
            mid_newDoubleValues_233b200ac02ffc59,
            mid_newFeatureSort_3af5153d988466e2,
            mid_newLinearQuery_1e1d94ae57c788e4,
            mid_newLogQuery_b67c3f5ab48f9e62,
            mid_newSaturationQuery_8b970d057e017e30,
            mid_newSaturationQuery_b67c3f5ab48f9e62,
            mid_newSigmoidQuery_7d7e9f43daf62387,
            mid_setFeatureValue_354c036766ff84b4,
            mid_tokenStream_ae53b87790ecd0e0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FeatureField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FeatureField(const FeatureField& obj) : ::org::apache::lucene::document::Field(obj) {}

          FeatureField(const ::java::lang::String &, const ::java::lang::String &, jfloat);

          static ::org::apache::lucene::search::DoubleValuesSource newDoubleValues(const ::java::lang::String &, const ::java::lang::String &);
          static ::org::apache::lucene::search::SortField newFeatureSort(const ::java::lang::String &, const ::java::lang::String &);
          static ::org::apache::lucene::search::Query newLinearQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat);
          static ::org::apache::lucene::search::Query newLogQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newSaturationQuery(const ::java::lang::String &, const ::java::lang::String &);
          static ::org::apache::lucene::search::Query newSaturationQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newSigmoidQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat, jfloat, jfloat);
          void setFeatureValue(jfloat) const;
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
        extern PyType_Def PY_TYPE_DEF(FeatureField);
        extern PyTypeObject *PY_TYPE(FeatureField);

        class t_FeatureField {
        public:
          PyObject_HEAD
          FeatureField object;
          static PyObject *wrap_Object(const FeatureField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
