#ifndef org_apache_lucene_index_FilterLeafReader_H
#define org_apache_lucene_index_FilterLeafReader_H

#include "org/apache/lucene/index/LeafReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class ByteVectorValues;
        class NumericDocValues;
        class BinaryDocValues;
        class Terms;
        class SortedDocValues;
        class SortedSetDocValues;
        class StoredFieldVisitor;
        class Fields;
        class PointValues;
        class TermVectors;
        class LeafMetaData;
        class SortedNumericDocValues;
        class FieldInfos;
        class FloatVectorValues;
        class StoredFields;
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

        class FilterLeafReader : public ::org::apache::lucene::index::LeafReader {
         public:
          enum {
            mid_checkIntegrity_3353d9f14bbfd91a,
            mid_document_554c42b3867e24d2,
            mid_getBinaryDocValues_a0d35ee0e4afb1ce,
            mid_getByteVectorValues_2de47235ea37839f,
            mid_getDelegate_d6eb6bb527b4616c,
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
            mid_getTermVectors_3b4838b454503ecf,
            mid_maxDoc_15aa3d485e96b665,
            mid_numDocs_15aa3d485e96b665,
            mid_searchNearestVectors_d7281208578d6bcd,
            mid_searchNearestVectors_3890e20c604b35ba,
            mid_storedFields_5c55707d6155e873,
            mid_termVectors_d323ae88a3a8142c,
            mid_terms_94c9097da6540ed1,
            mid_toString_dc633f13a47328a8,
            mid_unwrap_d233685e1cd8b864,
            mid_doClose_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterLeafReader(jobject obj) : ::org::apache::lucene::index::LeafReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterLeafReader(const FilterLeafReader& obj) : ::org::apache::lucene::index::LeafReader(obj) {}

          void checkIntegrity() const;
          void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
          ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::LeafReader getDelegate() const;
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
          ::org::apache::lucene::index::Fields getTermVectors(jint) const;
          jint maxDoc() const;
          jint numDocs() const;
          ::org::apache::lucene::search::TopDocs searchNearestVectors(const ::java::lang::String &, const JArray< jbyte > &, jint, const ::org::apache::lucene::util::Bits &, jint) const;
          ::org::apache::lucene::search::TopDocs searchNearestVectors(const ::java::lang::String &, const JArray< jfloat > &, jint, const ::org::apache::lucene::util::Bits &, jint) const;
          ::org::apache::lucene::index::StoredFields storedFields() const;
          ::org::apache::lucene::index::TermVectors termVectors() const;
          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
          ::java::lang::String toString() const;
          static ::org::apache::lucene::index::LeafReader unwrap(const ::org::apache::lucene::index::LeafReader &);
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
        extern PyType_Def PY_TYPE_DEF(FilterLeafReader);
        extern PyTypeObject *PY_TYPE(FilterLeafReader);

        class t_FilterLeafReader {
        public:
          PyObject_HEAD
          FilterLeafReader object;
          static PyObject *wrap_Object(const FilterLeafReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
