#ifndef org_apache_lucene_index_PointValues_H
#define org_apache_lucene_index_PointValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues$PointTree;
        class PointValues$IntersectVisitor;
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
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

        class PointValues : public ::java::lang::Object {
         public:
          enum {
            mid_estimateDocCount_3429808a3a257980,
            mid_estimatePointCount_3429808a3a257980,
            mid_getBytesPerDimension_15aa3d485e96b665,
            mid_getDocCount_15aa3d485e96b665,
            mid_getDocCount_43c4e42004ef87e7,
            mid_getMaxPackedValue_f4d7c022fb7af16d,
            mid_getMaxPackedValue_faed90eb300bb03f,
            mid_getMinPackedValue_f4d7c022fb7af16d,
            mid_getMinPackedValue_faed90eb300bb03f,
            mid_getNumDimensions_15aa3d485e96b665,
            mid_getNumIndexDimensions_15aa3d485e96b665,
            mid_getPointTree_cdd39143a1361e72,
            mid_intersect_bda1c31002f1eb9d,
            mid_size_058f5911dcf5d8a4,
            mid_size_fa0e35fa58c5cad4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PointValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PointValues(const PointValues& obj) : ::java::lang::Object(obj) {}

          static jint MAX_DIMENSIONS;
          static jint MAX_INDEX_DIMENSIONS;
          static jint MAX_NUM_BYTES;

          jlong estimateDocCount(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
          jlong estimatePointCount(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
          jint getBytesPerDimension() const;
          jint getDocCount() const;
          static jint getDocCount(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          JArray< jbyte > getMaxPackedValue() const;
          static JArray< jbyte > getMaxPackedValue(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          JArray< jbyte > getMinPackedValue() const;
          static JArray< jbyte > getMinPackedValue(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          jint getNumDimensions() const;
          jint getNumIndexDimensions() const;
          ::org::apache::lucene::index::PointValues$PointTree getPointTree() const;
          void intersect(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
          jlong size() const;
          static jlong size(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(PointValues);
        extern PyTypeObject *PY_TYPE(PointValues);

        class t_PointValues {
        public:
          PyObject_HEAD
          PointValues object;
          static PyObject *wrap_Object(const PointValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
