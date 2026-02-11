#ifndef org_apache_lucene_facet_taxonomy_CachedOrdinalsReader_H
#define org_apache_lucene_facet_taxonomy_CachedOrdinalsReader_H

#include "org/apache/lucene/facet/taxonomy/OrdinalsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace index {
        class LeafReaderContext;
      }
      namespace facet {
        namespace taxonomy {
          class OrdinalsReader$OrdinalsSegmentReader;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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

          class CachedOrdinalsReader : public ::org::apache::lucene::facet::taxonomy::OrdinalsReader {
           public:
            enum {
              mid_init$_9c4d2e7d71917abf,
              mid_getChildResources_b47b7eaa8124fb60,
              mid_getIndexFieldName_dc633f13a47328a8,
              mid_getReader_8e432932f5bdc720,
              mid_ramBytesUsed_058f5911dcf5d8a4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CachedOrdinalsReader(jobject obj) : ::org::apache::lucene::facet::taxonomy::OrdinalsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CachedOrdinalsReader(const CachedOrdinalsReader& obj) : ::org::apache::lucene::facet::taxonomy::OrdinalsReader(obj) {}

            CachedOrdinalsReader(const ::org::apache::lucene::facet::taxonomy::OrdinalsReader &);

            ::java::util::Collection getChildResources() const;
            ::java::lang::String getIndexFieldName() const;
            ::org::apache::lucene::facet::taxonomy::OrdinalsReader$OrdinalsSegmentReader getReader(const ::org::apache::lucene::index::LeafReaderContext &) const;
            jlong ramBytesUsed() const;
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
          extern PyType_Def PY_TYPE_DEF(CachedOrdinalsReader);
          extern PyTypeObject *PY_TYPE(CachedOrdinalsReader);

          class t_CachedOrdinalsReader {
          public:
            PyObject_HEAD
            CachedOrdinalsReader object;
            static PyObject *wrap_Object(const CachedOrdinalsReader&);
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
