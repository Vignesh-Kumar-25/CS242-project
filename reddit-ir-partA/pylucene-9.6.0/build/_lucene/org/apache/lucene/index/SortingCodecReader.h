#ifndef org_apache_lucene_index_SortingCodecReader_H
#define org_apache_lucene_index_SortingCodecReader_H

#include "org/apache/lucene/index/FilterCodecReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader$CacheHelper;
        class CodecReader;
        class LeafMetaData;
      }
      namespace search {
        class Sort;
      }
      namespace codecs {
        class KnnVectorsReader;
        class DocValuesProducer;
        class NormsProducer;
        class PointsReader;
        class FieldsProducer;
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

        class SortingCodecReader : public ::org::apache::lucene::index::FilterCodecReader {
         public:
          enum {
            mid_getCoreCacheHelper_b29ffc613bdce50b,
            mid_getDocValuesReader_0feef273e2a30a39,
            mid_getFieldsReader_a05f6d8282c7d18c,
            mid_getLiveDocs_d4f221d850798ead,
            mid_getMetaData_6c685af4b7f98485,
            mid_getNormsReader_2eb0a42ff3dc4d28,
            mid_getPointsReader_d2ed85fe76814629,
            mid_getPostingsReader_e2783a3610459ba5,
            mid_getReaderCacheHelper_b29ffc613bdce50b,
            mid_getTermVectorsReader_c9589914c2c194d7,
            mid_getVectorReader_63265411cf1dfbf7,
            mid_toString_dc633f13a47328a8,
            mid_wrap_857f48854997ddeb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortingCodecReader(jobject obj) : ::org::apache::lucene::index::FilterCodecReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortingCodecReader(const SortingCodecReader& obj) : ::org::apache::lucene::index::FilterCodecReader(obj) {}

          ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
          ::org::apache::lucene::codecs::DocValuesProducer getDocValuesReader() const;
          ::org::apache::lucene::codecs::StoredFieldsReader getFieldsReader() const;
          ::org::apache::lucene::util::Bits getLiveDocs() const;
          ::org::apache::lucene::index::LeafMetaData getMetaData() const;
          ::org::apache::lucene::codecs::NormsProducer getNormsReader() const;
          ::org::apache::lucene::codecs::PointsReader getPointsReader() const;
          ::org::apache::lucene::codecs::FieldsProducer getPostingsReader() const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          ::org::apache::lucene::codecs::TermVectorsReader getTermVectorsReader() const;
          ::org::apache::lucene::codecs::KnnVectorsReader getVectorReader() const;
          ::java::lang::String toString() const;
          static ::org::apache::lucene::index::CodecReader wrap(const ::org::apache::lucene::index::CodecReader &, const ::org::apache::lucene::search::Sort &);
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
        extern PyType_Def PY_TYPE_DEF(SortingCodecReader);
        extern PyTypeObject *PY_TYPE(SortingCodecReader);

        class t_SortingCodecReader {
        public:
          PyObject_HEAD
          SortingCodecReader object;
          static PyObject *wrap_Object(const SortingCodecReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
