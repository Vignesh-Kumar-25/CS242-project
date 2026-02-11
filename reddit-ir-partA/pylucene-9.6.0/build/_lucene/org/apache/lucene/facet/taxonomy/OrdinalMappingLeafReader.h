#ifndef org_apache_lucene_facet_taxonomy_OrdinalMappingLeafReader_H
#define org_apache_lucene_facet_taxonomy_OrdinalMappingLeafReader_H

#include "org/apache/lucene/index/FilterLeafReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader$CacheHelper;
        class SortedNumericDocValues;
        class LeafReader;
        class BinaryDocValues;
      }
      namespace facet {
        class FacetsConfig;
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
      namespace facet {
        namespace taxonomy {

          class OrdinalMappingLeafReader : public ::org::apache::lucene::index::FilterLeafReader {
           public:
            enum {
              mid_init$_f3244fc119da6d1d,
              mid_getBinaryDocValues_a0d35ee0e4afb1ce,
              mid_getCoreCacheHelper_b29ffc613bdce50b,
              mid_getReaderCacheHelper_b29ffc613bdce50b,
              mid_getSortedNumericDocValues_aa41c9afed9d5447,
              mid_getOrdinalsReader_4fc7642ca9160757,
              mid_encode_40e9c6e50e820c84,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OrdinalMappingLeafReader(jobject obj) : ::org::apache::lucene::index::FilterLeafReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OrdinalMappingLeafReader(const OrdinalMappingLeafReader& obj) : ::org::apache::lucene::index::FilterLeafReader(obj) {}

            OrdinalMappingLeafReader(const ::org::apache::lucene::index::LeafReader &, const JArray< jint > &, const ::org::apache::lucene::facet::FacetsConfig &);

            ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
            ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
            ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
            ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          extern PyType_Def PY_TYPE_DEF(OrdinalMappingLeafReader);
          extern PyTypeObject *PY_TYPE(OrdinalMappingLeafReader);

          class t_OrdinalMappingLeafReader {
          public:
            PyObject_HEAD
            OrdinalMappingLeafReader object;
            static PyObject *wrap_Object(const OrdinalMappingLeafReader&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
