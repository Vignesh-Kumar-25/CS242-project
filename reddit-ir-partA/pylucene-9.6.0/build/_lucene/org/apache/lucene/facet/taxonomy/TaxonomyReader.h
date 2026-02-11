#ifndef org_apache_lucene_facet_taxonomy_TaxonomyReader_H
#define org_apache_lucene_facet_taxonomy_TaxonomyReader_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class TaxonomyReader$ChildrenIterator;
          class TaxonomyReader;
          class FacetLabel;
          class ParallelTaxonomyArrays;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class TaxonomyReader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_close_3353d9f14bbfd91a,
              mid_decRef_3353d9f14bbfd91a,
              mid_getBulkPath_c9968d167ba89b04,
              mid_getChildren_5393f80773e56696,
              mid_getCommitUserData_19f838df22aacf85,
              mid_getOrdinal_5f6b81d33a4cb0ec,
              mid_getOrdinal_c3cec3d7d0e13bb7,
              mid_getParallelTaxonomyArrays_ecc77b804bbe2ddb,
              mid_getPath_3d53de1621f9c4f2,
              mid_getRefCount_15aa3d485e96b665,
              mid_getSize_15aa3d485e96b665,
              mid_incRef_3353d9f14bbfd91a,
              mid_openIfChanged_2da803c449380fed,
              mid_tryIncRef_ee8b0a5fa521ddac,
              mid_doClose_3353d9f14bbfd91a,
              mid_doOpenIfChanged_6900df8363d2f359,
              mid_ensureOpen_3353d9f14bbfd91a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyReader(const TaxonomyReader& obj) : ::java::lang::Object(obj) {}

            static jint INVALID_ORDINAL;
            static jint ROOT_ORDINAL;

            TaxonomyReader();

            void close() const;
            void decRef() const;
            JArray< ::org::apache::lucene::facet::taxonomy::FacetLabel > getBulkPath(const JArray< jint > &) const;
            ::org::apache::lucene::facet::taxonomy::TaxonomyReader$ChildrenIterator getChildren(jint) const;
            ::java::util::Map getCommitUserData() const;
            jint getOrdinal(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
            jint getOrdinal(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::facet::taxonomy::ParallelTaxonomyArrays getParallelTaxonomyArrays() const;
            ::org::apache::lucene::facet::taxonomy::FacetLabel getPath(jint) const;
            jint getRefCount() const;
            jint getSize() const;
            void incRef() const;
            static TaxonomyReader openIfChanged(const TaxonomyReader &);
            jboolean tryIncRef() const;
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
          extern PyType_Def PY_TYPE_DEF(TaxonomyReader);
          extern PyTypeObject *PY_TYPE(TaxonomyReader);

          class t_TaxonomyReader {
          public:
            PyObject_HEAD
            TaxonomyReader object;
            static PyObject *wrap_Object(const TaxonomyReader&);
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
