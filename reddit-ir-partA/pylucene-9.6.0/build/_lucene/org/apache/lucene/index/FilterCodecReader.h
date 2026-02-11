#ifndef org_apache_lucene_index_FilterCodecReader_H
#define org_apache_lucene_index_FilterCodecReader_H

#include "org/apache/lucene/index/CodecReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class StoredFieldVisitor;
        class Fields;
        class FieldInfos;
        class LeafMetaData;
      }
      namespace codecs {
        class KnnVectorsReader;
        class DocValuesProducer;
        class NormsProducer;
        class FieldsProducer;
        class PointsReader;
        class TermVectorsReader;
        class StoredFieldsReader;
      }
      namespace util {
        class Bits;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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

        class FilterCodecReader : public ::org::apache::lucene::index::CodecReader {
         public:
          enum {
            mid_init$_551e352f839fbefb,
            mid_checkIntegrity_3353d9f14bbfd91a,
            mid_document_554c42b3867e24d2,
            mid_getDelegate_e45c0971a2e6ba4c,
            mid_getDocValuesReader_0feef273e2a30a39,
            mid_getFieldInfos_3811ba1f67640e0a,
            mid_getFieldsReader_a05f6d8282c7d18c,
            mid_getLiveDocs_d4f221d850798ead,
            mid_getMetaData_6c685af4b7f98485,
            mid_getNormsReader_2eb0a42ff3dc4d28,
            mid_getPointsReader_d2ed85fe76814629,
            mid_getPostingsReader_e2783a3610459ba5,
            mid_getTermVectors_3b4838b454503ecf,
            mid_getTermVectorsReader_c9589914c2c194d7,
            mid_getVectorReader_63265411cf1dfbf7,
            mid_maxDoc_15aa3d485e96b665,
            mid_numDocs_15aa3d485e96b665,
            mid_unwrap_961ac2e0f513d045,
            mid_doClose_3353d9f14bbfd91a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterCodecReader(jobject obj) : ::org::apache::lucene::index::CodecReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterCodecReader(const FilterCodecReader& obj) : ::org::apache::lucene::index::CodecReader(obj) {}

          FilterCodecReader(const ::org::apache::lucene::index::CodecReader &);

          void checkIntegrity() const;
          void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
          ::org::apache::lucene::index::CodecReader getDelegate() const;
          ::org::apache::lucene::codecs::DocValuesProducer getDocValuesReader() const;
          ::org::apache::lucene::index::FieldInfos getFieldInfos() const;
          ::org::apache::lucene::codecs::StoredFieldsReader getFieldsReader() const;
          ::org::apache::lucene::util::Bits getLiveDocs() const;
          ::org::apache::lucene::index::LeafMetaData getMetaData() const;
          ::org::apache::lucene::codecs::NormsProducer getNormsReader() const;
          ::org::apache::lucene::codecs::PointsReader getPointsReader() const;
          ::org::apache::lucene::codecs::FieldsProducer getPostingsReader() const;
          ::org::apache::lucene::index::Fields getTermVectors(jint) const;
          ::org::apache::lucene::codecs::TermVectorsReader getTermVectorsReader() const;
          ::org::apache::lucene::codecs::KnnVectorsReader getVectorReader() const;
          jint maxDoc() const;
          jint numDocs() const;
          static ::org::apache::lucene::index::CodecReader unwrap(const ::org::apache::lucene::index::CodecReader &);
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
        extern PyType_Def PY_TYPE_DEF(FilterCodecReader);
        extern PyTypeObject *PY_TYPE(FilterCodecReader);

        class t_FilterCodecReader {
        public:
          PyObject_HEAD
          FilterCodecReader object;
          static PyObject *wrap_Object(const FilterCodecReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
