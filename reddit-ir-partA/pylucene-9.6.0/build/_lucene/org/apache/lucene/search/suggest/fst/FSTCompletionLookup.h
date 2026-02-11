#ifndef org_apache_lucene_search_suggest_fst_FSTCompletionLookup_H
#define org_apache_lucene_search_suggest_fst_FSTCompletionLookup_H

#include "org/apache/lucene/search/suggest/Lookup.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class Accountable;
      }
      namespace store {
        class DataOutput;
        class DataInput;
        class Directory;
      }
      namespace search {
        namespace suggest {
          class InputIterator;
          namespace fst {
            class FSTCompletion;
          }
          class Lookup$LookupResult;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Collection;
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
          namespace fst {

            class FSTCompletionLookup : public ::org::apache::lucene::search::suggest::Lookup {
             public:
              enum {
                mid_init$_3353d9f14bbfd91a,
                mid_init$_3497d6244d08d921,
                mid_init$_49e09b0245243cac,
                mid_init$_9bb6a47c4735249d,
                mid_build_cb569720b2738e4b,
                mid_get_4007c08c350a16ef,
                mid_getChildResources_b47b7eaa8124fb60,
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

              explicit FSTCompletionLookup(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FSTCompletionLookup(const FSTCompletionLookup& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              FSTCompletionLookup();
              FSTCompletionLookup(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &);
              FSTCompletionLookup(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::search::suggest::fst::FSTCompletion &, jboolean);
              FSTCompletionLookup(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, jint, jboolean);

              void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
              ::java::lang::Object get(const ::java::lang::CharSequence &) const;
              ::java::util::Collection getChildResources() const;
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
          namespace fst {
            extern PyType_Def PY_TYPE_DEF(FSTCompletionLookup);
            extern PyTypeObject *PY_TYPE(FSTCompletionLookup);

            class t_FSTCompletionLookup {
            public:
              PyObject_HEAD
              FSTCompletionLookup object;
              static PyObject *wrap_Object(const FSTCompletionLookup&);
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
