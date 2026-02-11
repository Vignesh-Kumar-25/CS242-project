#ifndef org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyReader_H
#define org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyReader_H

#include "org/apache/lucene/facet/taxonomy/TaxonomyReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace facet {
        namespace taxonomy {
          class FacetLabel;
          class ParallelTaxonomyArrays;
          namespace directory {
            class DirectoryTaxonomyWriter;
          }
        }
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Collection;
  }
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
      namespace facet {
        namespace taxonomy {
          namespace directory {

            class DirectoryTaxonomyReader : public ::org::apache::lucene::facet::taxonomy::TaxonomyReader {
             public:
              enum {
                mid_init$_b4ffd69cd2d00535,
                mid_init$_31453c15367f1d64,
                mid_getBulkPath_c9968d167ba89b04,
                mid_getChildResources_b47b7eaa8124fb60,
                mid_getCommitUserData_19f838df22aacf85,
                mid_getOrdinal_5f6b81d33a4cb0ec,
                mid_getParallelTaxonomyArrays_ecc77b804bbe2ddb,
                mid_getPath_3d53de1621f9c4f2,
                mid_getSize_15aa3d485e96b665,
                mid_ramBytesUsed_058f5911dcf5d8a4,
                mid_setCacheSize_da425451c8de636b,
                mid_toString_78a7b318cefaee15,
                mid_doClose_3353d9f14bbfd91a,
                mid_doOpenIfChanged_5fe5df457a18a91c,
                mid_openIndexReader_a4eecb6a6866d4f8,
                mid_openIndexReader_bf08f340e1cb228a,
                mid_getInternalIndexReader_2265149264cdc3d1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DirectoryTaxonomyReader(jobject obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyReader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DirectoryTaxonomyReader(const DirectoryTaxonomyReader& obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyReader(obj) {}

              DirectoryTaxonomyReader(const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter &);
              DirectoryTaxonomyReader(const ::org::apache::lucene::store::Directory &);

              JArray< ::org::apache::lucene::facet::taxonomy::FacetLabel > getBulkPath(const JArray< jint > &) const;
              ::java::util::Collection getChildResources() const;
              ::java::util::Map getCommitUserData() const;
              jint getOrdinal(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
              ::org::apache::lucene::facet::taxonomy::ParallelTaxonomyArrays getParallelTaxonomyArrays() const;
              ::org::apache::lucene::facet::taxonomy::FacetLabel getPath(jint) const;
              jint getSize() const;
              jlong ramBytesUsed() const;
              void setCacheSize(jint) const;
              ::java::lang::String toString(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(DirectoryTaxonomyReader);
            extern PyTypeObject *PY_TYPE(DirectoryTaxonomyReader);

            class t_DirectoryTaxonomyReader {
            public:
              PyObject_HEAD
              DirectoryTaxonomyReader object;
              static PyObject *wrap_Object(const DirectoryTaxonomyReader&);
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
