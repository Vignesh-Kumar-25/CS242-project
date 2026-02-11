#ifndef org_apache_lucene_facet_sortedset_DefaultSortedSetDocValuesReaderState_H
#define org_apache_lucene_facet_sortedset_DefaultSortedSetDocValuesReaderState_H

#include "org/apache/lucene/facet/sortedset/SortedSetDocValuesReaderState.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace index {
        class SortedSetDocValues;
        class IndexReader;
      }
      namespace facet {
        namespace sortedset {
          class SortedSetDocValuesReaderState$DimTree;
          class SortedSetDocValuesReaderState$OrdRange;
        }
        class FacetsConfig;
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
    class Collection;
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

          class DefaultSortedSetDocValuesReaderState : public ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState {
           public:
            enum {
              mid_init$_f48a27e209678b8f,
              mid_init$_ce43545022cd56d7,
              mid_init$_81afd0059debcccc,
              mid_init$_3df8b459df889166,
              mid_getChildResources_b47b7eaa8124fb60,
              mid_getDimTree_af5c5c9bcfa6be1a,
              mid_getDims_d5b0a7b20fe07dd6,
              mid_getDocValues_21b0ddd4f006c817,
              mid_getFacetsConfig_2cbd97ddbd880371,
              mid_getField_dc633f13a47328a8,
              mid_getOrdRange_7b255ed50cd39be8,
              mid_getPrefixToOrdRange_19f838df22aacf85,
              mid_getReader_5412d7f2b2358551,
              mid_getSize_15aa3d485e96b665,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              mid_toString_dc633f13a47328a8,
              max_mid
            };

            enum {
              fid_reader,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DefaultSortedSetDocValuesReaderState(jobject obj) : ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DefaultSortedSetDocValuesReaderState(const DefaultSortedSetDocValuesReaderState& obj) : ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState(obj) {}

            ::org::apache::lucene::index::IndexReader _get_reader() const;

            DefaultSortedSetDocValuesReaderState(const ::org::apache::lucene::index::IndexReader &);
            DefaultSortedSetDocValuesReaderState(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
            DefaultSortedSetDocValuesReaderState(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::facet::FacetsConfig &);
            DefaultSortedSetDocValuesReaderState(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsConfig &);

            ::java::util::Collection getChildResources() const;
            ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState$DimTree getDimTree(const ::java::lang::String &) const;
            ::java::lang::Iterable getDims() const;
            ::org::apache::lucene::index::SortedSetDocValues getDocValues() const;
            ::org::apache::lucene::facet::FacetsConfig getFacetsConfig() const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState$OrdRange getOrdRange(const ::java::lang::String &) const;
            ::java::util::Map getPrefixToOrdRange() const;
            ::org::apache::lucene::index::IndexReader getReader() const;
            jint getSize() const;
            jlong ramBytesUsed() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(DefaultSortedSetDocValuesReaderState);
          extern PyTypeObject *PY_TYPE(DefaultSortedSetDocValuesReaderState);

          class t_DefaultSortedSetDocValuesReaderState {
          public:
            PyObject_HEAD
            DefaultSortedSetDocValuesReaderState object;
            static PyObject *wrap_Object(const DefaultSortedSetDocValuesReaderState&);
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
