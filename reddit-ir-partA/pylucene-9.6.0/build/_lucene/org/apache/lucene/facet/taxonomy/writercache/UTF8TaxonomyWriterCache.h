#ifndef org_apache_lucene_facet_taxonomy_writercache_UTF8TaxonomyWriterCache_H
#define org_apache_lucene_facet_taxonomy_writercache_UTF8TaxonomyWriterCache_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace facet {
        namespace taxonomy {
          namespace writercache {
            class TaxonomyWriterCache;
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

            class UTF8TaxonomyWriterCache : public ::java::lang::Object {
             public:
              enum {
                mid_init$_3353d9f14bbfd91a,
                mid_clear_3353d9f14bbfd91a,
                mid_close_3353d9f14bbfd91a,
                mid_get_5f6b81d33a4cb0ec,
                mid_isFull_ee8b0a5fa521ddac,
                mid_put_2c0f522a5a15ecb5,
                mid_ramBytesUsed_058f5911dcf5d8a4,
                mid_size_15aa3d485e96b665,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UTF8TaxonomyWriterCache(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              UTF8TaxonomyWriterCache(const UTF8TaxonomyWriterCache& obj) : ::java::lang::Object(obj) {}

              UTF8TaxonomyWriterCache();

              void clear() const;
              void close() const;
              jint get(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
              jboolean isFull() const;
              jboolean put(const ::org::apache::lucene::facet::taxonomy::FacetLabel &, jint) const;
              jlong ramBytesUsed() const;
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
            extern PyType_Def PY_TYPE_DEF(UTF8TaxonomyWriterCache);
            extern PyTypeObject *PY_TYPE(UTF8TaxonomyWriterCache);

            class t_UTF8TaxonomyWriterCache {
            public:
              PyObject_HEAD
              UTF8TaxonomyWriterCache object;
              static PyObject *wrap_Object(const UTF8TaxonomyWriterCache&);
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
