#ifndef org_apache_lucene_facet_taxonomy_writercache_LruTaxonomyWriterCache_H
#define org_apache_lucene_facet_taxonomy_writercache_LruTaxonomyWriterCache_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace writercache {
            class TaxonomyWriterCache;
            class LruTaxonomyWriterCache$LRUType;
          }
          class FacetLabel;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace writercache {

            class LruTaxonomyWriterCache : public ::java::lang::Object {
             public:
              enum {
                mid_init$_da425451c8de636b,
                mid_init$_4947068b33f34d2b,
                mid_clear_3353d9f14bbfd91a,
                mid_close_3353d9f14bbfd91a,
                mid_get_5f6b81d33a4cb0ec,
                mid_isFull_ee8b0a5fa521ddac,
                mid_put_2c0f522a5a15ecb5,
                mid_size_15aa3d485e96b665,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LruTaxonomyWriterCache(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LruTaxonomyWriterCache(const LruTaxonomyWriterCache& obj) : ::java::lang::Object(obj) {}

              LruTaxonomyWriterCache(jint);
              LruTaxonomyWriterCache(jint, const ::org::apache::lucene::facet::taxonomy::writercache::LruTaxonomyWriterCache$LRUType &);

              void clear() const;
              void close() const;
              jint get(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
              jboolean isFull() const;
              jboolean put(const ::org::apache::lucene::facet::taxonomy::FacetLabel &, jint) const;
              jint size() const;
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
          namespace writercache {
            extern PyType_Def PY_TYPE_DEF(LruTaxonomyWriterCache);
            extern PyTypeObject *PY_TYPE(LruTaxonomyWriterCache);

            class t_LruTaxonomyWriterCache {
            public:
              PyObject_HEAD
              LruTaxonomyWriterCache object;
              static PyObject *wrap_Object(const LruTaxonomyWriterCache&);
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
