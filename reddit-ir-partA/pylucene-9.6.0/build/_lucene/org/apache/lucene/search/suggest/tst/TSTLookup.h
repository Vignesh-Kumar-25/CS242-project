#ifndef org_apache_lucene_search_suggest_tst_TSTLookup_H
#define org_apache_lucene_search_suggest_tst_TSTLookup_H

#include "org/apache/lucene/search/suggest/Lookup.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace store {
        class DataOutput;
        class DataInput;
        class Directory;
      }
      namespace search {
        namespace suggest {
          class InputIterator;
          class Lookup$LookupResult;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Set;
  }
  namespace lang {
    class CharSequence;
    class Class;
    class Object;
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
      namespace search {
        namespace suggest {
          namespace tst {

            class TSTLookup : public ::org::apache::lucene::search::suggest::Lookup {
             public:
              enum {
                mid_init$_3353d9f14bbfd91a,
                mid_init$_3497d6244d08d921,
                mid_add_ae4edfd0a37cee06,
                mid_build_cb569720b2738e4b,
                mid_get_4007c08c350a16ef,
                mid_getCount_058f5911dcf5d8a4,
                mid_load_9bb1d9d1c13a2459,
                mid_lookup_b26a235278b56084,
                mid_ramBytesUsed_058f5911dcf5d8a4,
                mid_store_e5b51110cdc0babe,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TSTLookup(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TSTLookup(const TSTLookup& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              TSTLookup();
              TSTLookup(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &);

              jboolean add(const ::java::lang::CharSequence &, const ::java::lang::Object &) const;
              void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
              ::java::lang::Object get(const ::java::lang::CharSequence &) const;
              jlong getCount() const;
              jboolean load(const ::org::apache::lucene::store::DataInput &) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
              jlong ramBytesUsed() const;
              jboolean store(const ::org::apache::lucene::store::DataOutput &) const;
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
      namespace search {
        namespace suggest {
          namespace tst {
            extern PyType_Def PY_TYPE_DEF(TSTLookup);
            extern PyTypeObject *PY_TYPE(TSTLookup);

            class t_TSTLookup {
            public:
              PyObject_HEAD
              TSTLookup object;
              static PyObject *wrap_Object(const TSTLookup&);
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
