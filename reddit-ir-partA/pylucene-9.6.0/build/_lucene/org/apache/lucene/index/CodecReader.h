#ifndef org_apache_lucene_index_CodecReader_H
#define org_apache_lucene_index_CodecReader_H

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
        class SortedNumericDocValues;
        class FloatVectorValues;
        class StoredFields;
      }
      namespace codecs {
        class PointsReader;
        class TermVectorsReader;
        class KnnVectorsReader;
        class DocValuesProducer;
        class NormsProducer;
        class FieldsProducer;
        class StoredFieldsReader;
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

        class CodecReader : public ::org::apache::lucene::index::LeafReader {
         public:
          enum {
            mid_checkIntegrity_3353d9f14bbfd91a,
            mid_document_554c42b3867e24d2,
            mid_getBinaryDocValues_a0d35ee0e4afb1ce,
            mid_getByteVectorValues_2de47235ea37839f,
            mid_getDocValuesReader_0feef273e2a30a39,
            mid_getFieldsReader_a05f6d8282c7d18c,
            mid_getFloatVectorValues_0281d62202ab2972,
            mid_getNormValues_f7b6b1d914f0728d,
            mid_getNormsReader_2eb0a42ff3dc4d28,
            mid_getNumericDocValues_f7b6b1d914f0728d,
            mid_getPointValues_684fa84608f80456,
            mid_getPointsReader_d2ed85fe76814629,
            mid_getPostingsReader_e2783a3610459ba5,
            mid_getSortedDocValues_f9417ca0bc5ad0d8,
            mid_getSortedNumericDocValues_aa41c9afed9d5447,
            mid_getSortedSetDocValues_a7ffa6f3a7c9fb69,
            mid_getTermVectors_3b4838b454503ecf,
            mid_getTermVectorsReader_c9589914c2c194d7,
            mid_getVectorReader_63265411cf1dfbf7,
            mid_searchNearestVectors_d7281208578d6bcd,
            mid_searchNearestVectors_3890e20c604b35ba,
            mid_storedFields_5c55707d6155e873,
            mid_termVectors_d323ae88a3a8142c,
            mid_terms_94c9097da6540ed1,
            mid_doClose_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CodecReader(jobject obj) : ::org::apache::lucene::index::LeafReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CodecReader(const CodecReader& obj) : ::org::apache::lucene::index::LeafReader(obj) {}

          void checkIntegrity() const;
          void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
          ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::codecs::DocValuesProducer getDocValuesReader() const;
          ::org::apache::lucene::codecs::StoredFieldsReader getFieldsReader() const;
          ::org::apache::lucene::index::FloatVectorValues getFloatVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::NumericDocValues getNormValues(const ::java::lang::String &) const;
          ::org::apache::lucene::codecs::NormsProducer getNormsReader() const;
          ::org::apache::lucene::index::NumericDocValues getNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::PointValues getPointValues(const ::java::lang::String &) const;
          ::org::apache::lucene::codecs::PointsReader getPointsReader() const;
          ::org::apache::lucene::codecs::FieldsProducer getPostingsReader() const;
          ::org::apache::lucene::index::SortedDocValues getSortedDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSetDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::Fields getTermVectors(jint) const;
          ::org::apache::lucene::codecs::TermVectorsReader getTermVectorsReader() const;
          ::org::apache::lucene::codecs::KnnVectorsReader getVectorReader() const;
          ::org::apache::lucene::search::TopDocs searchNearestVectors(const ::java::lang::String &, const JArray< jbyte > &, jint, const ::org::apache::lucene::util::Bits &, jint) const;
          ::org::apache::lucene::search::TopDocs searchNearestVectors(const ::java::lang::String &, const JArray< jfloat > &, jint, const ::org::apache::lucene::util::Bits &, jint) const;
          ::org::apache::lucene::index::StoredFields storedFields() const;
          ::org::apache::lucene::index::TermVectors termVectors() const;
          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(CodecReader);
        extern PyTypeObject *PY_TYPE(CodecReader);

        class t_CodecReader {
        public:
          PyObject_HEAD
          CodecReader object;
          static PyObject *wrap_Object(const CodecReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
