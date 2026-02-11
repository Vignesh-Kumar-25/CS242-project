#ifndef org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter_H
#define org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map$Entry;
  }
  namespace lang {
    class Iterable;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace directory {
            class DirectoryTaxonomyWriter$OrdinalMap;
          }
          namespace writercache {
            class TaxonomyWriterCache;
          }
          class TaxonomyWriter;
          class FacetLabel;
        }
      }
      namespace store {
        class Directory;
      }
      namespace index {
        class IndexWriterConfig$OpenMode;
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
          namespace directory {

            class DirectoryTaxonomyWriter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_31453c15367f1d64,
                mid_init$_08b36c3c712481cf,
                mid_init$_63525887217a9e0f,
                mid_addCategory_5f6b81d33a4cb0ec,
                mid_addTaxonomy_71dbcb6b4e58a392,
                mid_close_3353d9f14bbfd91a,
                mid_commit_058f5911dcf5d8a4,
                mid_defaultTaxonomyWriterCache_2ae258dd8395e5f1,
                mid_getCache_2ae258dd8395e5f1,
                mid_getDirectory_dab1bc6be9334718,
                mid_getLiveCommitData_d5b0a7b20fe07dd6,
                mid_getParent_58b165b57740feff,
                mid_getSize_15aa3d485e96b665,
                mid_getTaxonomyEpoch_058f5911dcf5d8a4,
                mid_prepareCommit_058f5911dcf5d8a4,
                mid_replaceTaxonomy_31453c15367f1d64,
                mid_rollback_3353d9f14bbfd91a,
                mid_setCacheMissesUntilFill_da425451c8de636b,
                mid_setLiveCommitData_e24ade5f219c5841,
                mid_useNumericDocValuesForOrdinals_ee8b0a5fa521ddac,
                mid_openIndexWriter_29b192e2c0d312fc,
                mid_createIndexWriterConfig_46e47906c3f6fcbd,
                mid_closeResources_3353d9f14bbfd91a,
                mid_findCategory_5f6b81d33a4cb0ec,
                mid_ensureOpen_3353d9f14bbfd91a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DirectoryTaxonomyWriter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DirectoryTaxonomyWriter(const DirectoryTaxonomyWriter& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *INDEX_EPOCH;

              DirectoryTaxonomyWriter(const ::org::apache::lucene::store::Directory &);
              DirectoryTaxonomyWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig$OpenMode &);
              DirectoryTaxonomyWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig$OpenMode &, const ::org::apache::lucene::facet::taxonomy::writercache::TaxonomyWriterCache &);

              jint addCategory(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
              void addTaxonomy(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter$OrdinalMap &) const;
              void close() const;
              jlong commit() const;
              static ::org::apache::lucene::facet::taxonomy::writercache::TaxonomyWriterCache defaultTaxonomyWriterCache();
              ::org::apache::lucene::facet::taxonomy::writercache::TaxonomyWriterCache getCache() const;
              ::org::apache::lucene::store::Directory getDirectory() const;
              ::java::lang::Iterable getLiveCommitData() const;
              jint getParent(jint) const;
              jint getSize() const;
              jlong getTaxonomyEpoch() const;
              jlong prepareCommit() const;
              void replaceTaxonomy(const ::org::apache::lucene::store::Directory &) const;
              void rollback() const;
              void setCacheMissesUntilFill(jint) const;
              void setLiveCommitData(const ::java::lang::Iterable &) const;
              jboolean useNumericDocValuesForOrdinals() const;
            };
          }
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
          namespace directory {
            extern PyType_Def PY_TYPE_DEF(DirectoryTaxonomyWriter);
            extern PyTypeObject *PY_TYPE(DirectoryTaxonomyWriter);

            class t_DirectoryTaxonomyWriter {
            public:
              PyObject_HEAD
              DirectoryTaxonomyWriter object;
              static PyObject *wrap_Object(const DirectoryTaxonomyWriter&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
