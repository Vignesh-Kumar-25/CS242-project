#ifndef org_apache_lucene_document_FieldType_H
#define org_apache_lucene_document_FieldType_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexOptions;
        class IndexableFieldType;
        class DocValuesType;
        class VectorEncoding;
        class VectorSimilarityFunction;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
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

        class FieldType : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3353d9f14bbfd91a,
            mid_init$_343c4f5caea6ba1d,
            mid_docValuesType_f672c9daca753949,
            mid_equals_6084f78e09b6c0c3,
            mid_freeze_3353d9f14bbfd91a,
            mid_getAttributes_19f838df22aacf85,
            mid_hashCode_15aa3d485e96b665,
            mid_indexOptions_0a49376ab791dba8,
            mid_omitNorms_ee8b0a5fa521ddac,
            mid_pointDimensionCount_15aa3d485e96b665,
            mid_pointIndexDimensionCount_15aa3d485e96b665,
            mid_pointNumBytes_15aa3d485e96b665,
            mid_putAttribute_4178ea5d4aed7988,
            mid_setDimensions_078cef180abf5351,
            mid_setDimensions_324f62b85ee857be,
            mid_setDocValuesType_2481ecb97917ec96,
            mid_setIndexOptions_832e7074450104a6,
            mid_setOmitNorms_4f96af910856b303,
            mid_setStoreTermVectorOffsets_4f96af910856b303,
            mid_setStoreTermVectorPayloads_4f96af910856b303,
            mid_setStoreTermVectorPositions_4f96af910856b303,
            mid_setStoreTermVectors_4f96af910856b303,
            mid_setStored_4f96af910856b303,
            mid_setTokenized_4f96af910856b303,
            mid_setVectorAttributes_3b406f9596cdf9bf,
            mid_storeTermVectorOffsets_ee8b0a5fa521ddac,
            mid_storeTermVectorPayloads_ee8b0a5fa521ddac,
            mid_storeTermVectorPositions_ee8b0a5fa521ddac,
            mid_storeTermVectors_ee8b0a5fa521ddac,
            mid_stored_ee8b0a5fa521ddac,
            mid_toString_dc633f13a47328a8,
            mid_tokenized_ee8b0a5fa521ddac,
            mid_vectorDimension_15aa3d485e96b665,
            mid_vectorEncoding_88f4d962e6e12c0d,
            mid_vectorSimilarityFunction_1830b6ac0131742d,
            mid_checkIfFrozen_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldType(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldType(const FieldType& obj) : ::java::lang::Object(obj) {}

          FieldType();
          FieldType(const ::org::apache::lucene::index::IndexableFieldType &);

          ::org::apache::lucene::index::DocValuesType docValuesType() const;
          jboolean equals(const ::java::lang::Object &) const;
          void freeze() const;
          ::java::util::Map getAttributes() const;
          jint hashCode() const;
          ::org::apache::lucene::index::IndexOptions indexOptions() const;
          jboolean omitNorms() const;
          jint pointDimensionCount() const;
          jint pointIndexDimensionCount() const;
          jint pointNumBytes() const;
          ::java::lang::String putAttribute(const ::java::lang::String &, const ::java::lang::String &) const;
          void setDimensions(jint, jint) const;
          void setDimensions(jint, jint, jint) const;
          void setDocValuesType(const ::org::apache::lucene::index::DocValuesType &) const;
          void setIndexOptions(const ::org::apache::lucene::index::IndexOptions &) const;
          void setOmitNorms(jboolean) const;
          void setStoreTermVectorOffsets(jboolean) const;
          void setStoreTermVectorPayloads(jboolean) const;
          void setStoreTermVectorPositions(jboolean) const;
          void setStoreTermVectors(jboolean) const;
          void setStored(jboolean) const;
          void setTokenized(jboolean) const;
          void setVectorAttributes(jint, const ::org::apache::lucene::index::VectorEncoding &, const ::org::apache::lucene::index::VectorSimilarityFunction &) const;
          jboolean storeTermVectorOffsets() const;
          jboolean storeTermVectorPayloads() const;
          jboolean storeTermVectorPositions() const;
          jboolean storeTermVectors() const;
          jboolean stored() const;
          ::java::lang::String toString() const;
          jboolean tokenized() const;
          jint vectorDimension() const;
          ::org::apache::lucene::index::VectorEncoding vectorEncoding() const;
          ::org::apache::lucene::index::VectorSimilarityFunction vectorSimilarityFunction() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldType);
        extern PyTypeObject *PY_TYPE(FieldType);

        class t_FieldType {
        public:
          PyObject_HEAD
          FieldType object;
          static PyObject *wrap_Object(const FieldType&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
