#ifndef org_apache_lucene_facet_sortedset_SortedSetDocValuesReaderState_H
#define org_apache_lucene_facet_sortedset_SortedSetDocValuesReaderState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace facet {
        namespace sortedset {
          class SortedSetDocValuesReaderState$DimTree;
          class SortedSetDocValuesReaderState$OrdRange;
        }
        class FacetsConfig;
      }
      namespace index {
        class IndexReader;
        class SortedSetDocValues;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Iterable;
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {

          class SortedSetDocValuesReaderState : public ::java::lang::Object {
           public:
            enum {
              mid_getDimTree_af5c5c9bcfa6be1a,
              mid_getDims_d5b0a7b20fe07dd6,
              mid_getDocValues_21b0ddd4f006c817,
              mid_getFacetsConfig_2cbd97ddbd880371,
              mid_getField_dc633f13a47328a8,
              mid_getOrdRange_7b255ed50cd39be8,
              mid_getPrefixToOrdRange_19f838df22aacf85,
              mid_getReader_5412d7f2b2358551,
              mid_getSize_15aa3d485e96b665,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedSetDocValuesReaderState(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SortedSetDocValuesReaderState(const SortedSetDocValuesReaderState& obj) : ::java::lang::Object(obj) {}

            static jint INVALID_ORDINAL;

            ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState$DimTree getDimTree(const ::java::lang::String &) const;
            ::java::lang::Iterable getDims() const;
            ::org::apache::lucene::index::SortedSetDocValues getDocValues() const;
            ::org::apache::lucene::facet::FacetsConfig getFacetsConfig() const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState$OrdRange getOrdRange(const ::java::lang::String &) const;
            ::java::util::Map getPrefixToOrdRange() const;
            ::org::apache::lucene::index::IndexReader getReader() const;
            jint getSize() const;
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
        namespace sortedset {
          extern PyType_Def PY_TYPE_DEF(SortedSetDocValuesReaderState);
          extern PyTypeObject *PY_TYPE(SortedSetDocValuesReaderState);

          class t_SortedSetDocValuesReaderState {
          public:
            PyObject_HEAD
            SortedSetDocValuesReaderState object;
            static PyObject *wrap_Object(const SortedSetDocValuesReaderState&);
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
