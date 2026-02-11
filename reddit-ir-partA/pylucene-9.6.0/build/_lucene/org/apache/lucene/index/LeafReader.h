#ifndef org_apache_lucene_index_LeafReader_H
#define org_apache_lucene_index_LeafReader_H

#include "org/apache/lucene/index/IndexReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class ByteVectorValues;
        class NumericDocValues;
        class BinaryDocValues;
        class LeafReaderContext;
        class PostingsEnum;
        class Terms;
        class IndexReader$CacheHelper;
        class SortedDocValues;
        class SortedSetDocValues;
        class PointValues;
        class LeafMetaData;
        class SortedNumericDocValues;
        class FieldInfos;
        class Term;
        class FloatVectorValues;
      }
      namespace util {
        class Bits;
      }
      namespace search {
        class TopDocs;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class LeafReader : public ::org::apache::lucene::index::IndexReader {
         public:
          enum {
            mid_checkIntegrity_3353d9f14bbfd91a,
            mid_docFreq_ef1d513059bfc629,
            mid_getBinaryDocValues_a0d35ee0e4afb1ce,
            mid_getByteVectorValues_2de47235ea37839f,
            mid_getContext_7325a9b9ba995f59,
            mid_getCoreCacheHelper_b29ffc613bdce50b,
            mid_getDocCount_08c5dabd7f8f1590,
            mid_getFieldInfos_3811ba1f67640e0a,
            mid_getFloatVectorValues_0281d62202ab2972,
            mid_getLiveDocs_d4f221d850798ead,
            mid_getMetaData_6c685af4b7f98485,
            mid_getNormValues_f7b6b1d914f0728d,
            mid_getNumericDocValues_f7b6b1d914f0728d,
            mid_getPointValues_684fa84608f80456,
            mid_getSortedDocValues_f9417ca0bc5ad0d8,
            mid_getSortedNumericDocValues_aa41c9afed9d5447,
            mid_getSortedSetDocValues_a7ffa6f3a7c9fb69,
            mid_getSumDocFreq_f9e0f284a35cbac5,
            mid_getSumTotalTermFreq_f9e0f284a35cbac5,
            mid_postings_fc7858767572c6ca,
            mid_postings_7e7c9fdf4187d020,
            mid_searchNearestVectors_d7281208578d6bcd,
            mid_searchNearestVectors_3890e20c604b35ba,
            mid_terms_94c9097da6540ed1,
            mid_totalTermFreq_dedf03c152f4c663,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LeafReader(jobject obj) : ::org::apache::lucene::index::IndexReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LeafReader(const LeafReader& obj) : ::org::apache::lucene::index::IndexReader(obj) {}

          void checkIntegrity() const;
          jint docFreq(const ::org::apache::lucene::index::Term &) const;
          ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::LeafReaderContext getContext() const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
          jint getDocCount(const ::java::lang::String &) const;
          ::org::apache::lucene::index::FieldInfos getFieldInfos() const;
          ::org::apache::lucene::index::FloatVectorValues getFloatVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::util::Bits getLiveDocs() const;
          ::org::apache::lucene::index::LeafMetaData getMetaData() const;
          ::org::apache::lucene::index::NumericDocValues getNormValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::NumericDocValues getNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::PointValues getPointValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedDocValues getSortedDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSetDocValues(const ::java::lang::String &) const;
          jlong getSumDocFreq(const ::java::lang::String &) const;
          jlong getSumTotalTermFreq(const ::java::lang::String &) const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::Term &) const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::Term &, jint) const;
          ::org::apache::lucene::search::TopDocs searchNearestVectors(const ::java::lang::String &, const JArray< jbyte > &, jint, const ::org::apache::lucene::util::Bits &, jint) const;
          ::org::apache::lucene::search::TopDocs searchNearestVectors(const ::java::lang::String &, const JArray< jfloat > &, jint, const ::org::apache::lucene::util::Bits &, jint) const;
          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
          jlong totalTermFreq(const ::org::apache::lucene::index::Term &) const;
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
        extern PyType_Def PY_TYPE_DEF(LeafReader);
        extern PyTypeObject *PY_TYPE(LeafReader);

        class t_LeafReader {
        public:
          PyObject_HEAD
          LeafReader object;
          static PyObject *wrap_Object(const LeafReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
