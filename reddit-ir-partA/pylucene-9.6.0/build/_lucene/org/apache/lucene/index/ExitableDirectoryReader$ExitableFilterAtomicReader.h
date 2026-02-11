#ifndef org_apache_lucene_index_ExitableDirectoryReader$ExitableFilterAtomicReader_H
#define org_apache_lucene_index_ExitableDirectoryReader$ExitableFilterAtomicReader_H

#include "org/apache/lucene/index/FilterLeafReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TopDocs;
      }
      namespace index {
        class IndexReader$CacheHelper;
        class SortedNumericDocValues;
        class ByteVectorValues;
        class NumericDocValues;
        class SortedDocValues;
        class LeafReader;
        class PointValues;
        class BinaryDocValues;
        class FloatVectorValues;
        class SortedSetDocValues;
        class QueryTimeout;
        class Terms;
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

        class ExitableDirectoryReader$ExitableFilterAtomicReader : public ::org::apache::lucene::index::FilterLeafReader {
         public:
          enum {
            mid_init$_b6fdcd0a09c4acb3,
            mid_getBinaryDocValues_a0d35ee0e4afb1ce,
            mid_getByteVectorValues_2de47235ea37839f,
            mid_getCoreCacheHelper_b29ffc613bdce50b,
            mid_getFloatVectorValues_0281d62202ab2972,
            mid_getNumericDocValues_f7b6b1d914f0728d,
            mid_getPointValues_684fa84608f80456,
            mid_getReaderCacheHelper_b29ffc613bdce50b,
            mid_getSortedDocValues_f9417ca0bc5ad0d8,
            mid_getSortedNumericDocValues_aa41c9afed9d5447,
            mid_getSortedSetDocValues_a7ffa6f3a7c9fb69,
            mid_searchNearestVectors_3890e20c604b35ba,
            mid_terms_94c9097da6540ed1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ExitableDirectoryReader$ExitableFilterAtomicReader(jobject obj) : ::org::apache::lucene::index::FilterLeafReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ExitableDirectoryReader$ExitableFilterAtomicReader(const ExitableDirectoryReader$ExitableFilterAtomicReader& obj) : ::org::apache::lucene::index::FilterLeafReader(obj) {}

          ExitableDirectoryReader$ExitableFilterAtomicReader(const ::org::apache::lucene::index::LeafReader &, const ::org::apache::lucene::index::QueryTimeout &);

          ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
          ::org::apache::lucene::index::FloatVectorValues getFloatVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::NumericDocValues getNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::PointValues getPointValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          ::org::apache::lucene::index::SortedDocValues getSortedDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSetDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::search::TopDocs searchNearestVectors(const ::java::lang::String &, const JArray< jfloat > &, jint, const ::org::apache::lucene::util::Bits &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(ExitableDirectoryReader$ExitableFilterAtomicReader);
        extern PyTypeObject *PY_TYPE(ExitableDirectoryReader$ExitableFilterAtomicReader);

        class t_ExitableDirectoryReader$ExitableFilterAtomicReader {
        public:
          PyObject_HEAD
          ExitableDirectoryReader$ExitableFilterAtomicReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ExitableDirectoryReader$ExitableFilterAtomicReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ExitableDirectoryReader$ExitableFilterAtomicReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ExitableDirectoryReader$ExitableFilterAtomicReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
