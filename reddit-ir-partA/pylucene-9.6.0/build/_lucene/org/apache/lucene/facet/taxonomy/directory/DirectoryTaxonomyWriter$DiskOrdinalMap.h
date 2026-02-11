#ifndef org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter$DiskOrdinalMap_H
#define org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter$DiskOrdinalMap_H

#include "java/lang/Object.h"

namespace java {
  namespace nio {
    namespace file {
      class Path;
    }
  }
  namespace lang {
    class Class;
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
          namespace directory {

            class DirectoryTaxonomyWriter$DiskOrdinalMap : public ::java::lang::Object {
             public:
              enum {
                mid_init$_9a1eff7d5b4532fc,
                mid_addDone_3353d9f14bbfd91a,
                mid_addMapping_078cef180abf5351,
                mid_getMap_7880494ffe2d4089,
                mid_setSize_da425451c8de636b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DirectoryTaxonomyWriter$DiskOrdinalMap(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DirectoryTaxonomyWriter$DiskOrdinalMap(const DirectoryTaxonomyWriter$DiskOrdinalMap& obj) : ::java::lang::Object(obj) {}

              DirectoryTaxonomyWriter$DiskOrdinalMap(const ::java::nio::file::Path &);

              void addDone() const;
              void addMapping(jint, jint) const;
              JArray< jint > getMap() const;
              void setSize(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(DirectoryTaxonomyWriter$DiskOrdinalMap);
            extern PyTypeObject *PY_TYPE(DirectoryTaxonomyWriter$DiskOrdinalMap);

            class t_DirectoryTaxonomyWriter$DiskOrdinalMap {
            public:
              PyObject_HEAD
              DirectoryTaxonomyWriter$DiskOrdinalMap object;
              static PyObject *wrap_Object(const DirectoryTaxonomyWriter$DiskOrdinalMap&);
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
