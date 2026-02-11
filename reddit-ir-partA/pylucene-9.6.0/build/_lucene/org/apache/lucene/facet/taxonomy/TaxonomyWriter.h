#ifndef org_apache_lucene_facet_taxonomy_TaxonomyWriter_H
#define org_apache_lucene_facet_taxonomy_TaxonomyWriter_H

#include "java/io/Closeable.h"

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
      namespace index {
        class TwoPhaseCommit;
      }
      namespace facet {
        namespace taxonomy {
          class FacetLabel;
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

          class TaxonomyWriter : public ::java::io::Closeable {
           public:
            enum {
              mid_addCategory_5f6b81d33a4cb0ec,
              mid_getLiveCommitData_d5b0a7b20fe07dd6,
              mid_getParent_58b165b57740feff,
              mid_getSize_15aa3d485e96b665,
              mid_setLiveCommitData_e24ade5f219c5841,
              mid_useNumericDocValuesForOrdinals_ee8b0a5fa521ddac,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyWriter(jobject obj) : ::java::io::Closeable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyWriter(const TaxonomyWriter& obj) : ::java::io::Closeable(obj) {}

            jint addCategory(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
            ::java::lang::Iterable getLiveCommitData() const;
            jint getParent(jint) const;
            jint getSize() const;
            void setLiveCommitData(const ::java::lang::Iterable &) const;
            jboolean useNumericDocValuesForOrdinals() const;
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
          extern PyType_Def PY_TYPE_DEF(TaxonomyWriter);
          extern PyTypeObject *PY_TYPE(TaxonomyWriter);

          class t_TaxonomyWriter {
          public:
            PyObject_HEAD
            TaxonomyWriter object;
            static PyObject *wrap_Object(const TaxonomyWriter&);
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
