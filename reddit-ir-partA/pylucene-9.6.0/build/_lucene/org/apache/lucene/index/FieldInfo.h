#ifndef org_apache_lucene_index_FieldInfo_H
#define org_apache_lucene_index_FieldInfo_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexOptions;
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
      namespace index {

        class FieldInfo : public ::java::lang::Object {
         public:
          enum {
            mid_init$_73a0c2b5a057690b,
            mid_attributes_19f838df22aacf85,
            mid_checkConsistency_3353d9f14bbfd91a,
            mid_getAttribute_04612c8360f09496,
            mid_getDocValuesGen_058f5911dcf5d8a4,
            mid_getDocValuesType_f672c9daca753949,
            mid_getFieldNumber_15aa3d485e96b665,
            mid_getIndexOptions_0a49376ab791dba8,
            mid_getName_dc633f13a47328a8,
            mid_getPointDimensionCount_15aa3d485e96b665,
            mid_getPointIndexDimensionCount_15aa3d485e96b665,
            mid_getPointNumBytes_15aa3d485e96b665,
            mid_getVectorDimension_15aa3d485e96b665,
            mid_getVectorEncoding_88f4d962e6e12c0d,
            mid_getVectorSimilarityFunction_1830b6ac0131742d,
            mid_hasNorms_ee8b0a5fa521ddac,
            mid_hasPayloads_ee8b0a5fa521ddac,
            mid_hasVectorValues_ee8b0a5fa521ddac,
            mid_hasVectors_ee8b0a5fa521ddac,
            mid_isSoftDeletesField_ee8b0a5fa521ddac,
            mid_omitsNorms_ee8b0a5fa521ddac,
            mid_putAttribute_4178ea5d4aed7988,
            mid_setDocValuesType_2481ecb97917ec96,
            mid_setOmitsNorms_3353d9f14bbfd91a,
            mid_setPointDimensions_324f62b85ee857be,
            max_mid
          };

          enum {
            fid_name,
            fid_number,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldInfo(const FieldInfo& obj) : ::java::lang::Object(obj) {}

          ::java::lang::String _get_name() const;
          jint _get_number() const;

          FieldInfo(const ::java::lang::String &, jint, jboolean, jboolean, jboolean, const ::org::apache::lucene::index::IndexOptions &, const ::org::apache::lucene::index::DocValuesType &, jlong, const ::java::util::Map &, jint, jint, jint, jint, const ::org::apache::lucene::index::VectorEncoding &, const ::org::apache::lucene::index::VectorSimilarityFunction &, jboolean);

          ::java::util::Map attributes() const;
          void checkConsistency() const;
          ::java::lang::String getAttribute(const ::java::lang::String &) const;
          jlong getDocValuesGen() const;
          ::org::apache::lucene::index::DocValuesType getDocValuesType() const;
          jint getFieldNumber() const;
          ::org::apache::lucene::index::IndexOptions getIndexOptions() const;
          ::java::lang::String getName() const;
          jint getPointDimensionCount() const;
          jint getPointIndexDimensionCount() const;
          jint getPointNumBytes() const;
          jint getVectorDimension() const;
          ::org::apache::lucene::index::VectorEncoding getVectorEncoding() const;
          ::org::apache::lucene::index::VectorSimilarityFunction getVectorSimilarityFunction() const;
          jboolean hasNorms() const;
          jboolean hasPayloads() const;
          jboolean hasVectorValues() const;
          jboolean hasVectors() const;
          jboolean isSoftDeletesField() const;
          jboolean omitsNorms() const;
          ::java::lang::String putAttribute(const ::java::lang::String &, const ::java::lang::String &) const;
          void setDocValuesType(const ::org::apache::lucene::index::DocValuesType &) const;
          void setOmitsNorms() const;
          void setPointDimensions(jint, jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(FieldInfo);
        extern PyTypeObject *PY_TYPE(FieldInfo);

        class t_FieldInfo {
        public:
          PyObject_HEAD
          FieldInfo object;
          static PyObject *wrap_Object(const FieldInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
