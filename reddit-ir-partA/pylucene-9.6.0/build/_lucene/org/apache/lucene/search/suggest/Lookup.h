#ifndef org_apache_lucene_search_suggest_Lookup_H
#define org_apache_lucene_search_suggest_Lookup_H

#include "java/lang/Object.h"

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
      }
      namespace search {
        class BooleanQuery;
        namespace suggest {
          class InputIterator;
          class Lookup$LookupResult;
        }
        namespace spell {
          class Dictionary;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Comparator;
    class Set;
  }
  namespace lang {
    class CharSequence;
    class Class;
  }
  namespace io {
    class OutputStream;
    class InputStream;
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          class Lookup : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_build_ffb392dd4c050f13,
              mid_build_cb569720b2738e4b,
              mid_getCount_058f5911dcf5d8a4,
              mid_load_dee52ced86162970,
              mid_load_9bb1d9d1c13a2459,
              mid_lookup_8bc51295a11801ce,
              mid_lookup_b26a235278b56084,
              mid_lookup_ed2be19985bc8b21,
              mid_store_b5f6a181fc25e848,
              mid_store_e5b51110cdc0babe,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lookup(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lookup(const Lookup& obj) : ::java::lang::Object(obj) {}

            static ::java::util::Comparator *CHARSEQUENCE_COMPARATOR;

            Lookup();

            void build(const ::org::apache::lucene::search::spell::Dictionary &) const;
            void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
            jlong getCount() const;
            jboolean load(const ::java::io::InputStream &) const;
            jboolean load(const ::org::apache::lucene::store::DataInput &) const;
            ::java::util::List lookup(const ::java::lang::CharSequence &, jboolean, jint) const;
            ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
            ::java::util::List lookup(const ::java::lang::CharSequence &, const ::org::apache::lucene::search::BooleanQuery &, jint, jboolean, jboolean) const;
            jboolean store(const ::java::io::OutputStream &) const;
            jboolean store(const ::org::apache::lucene::store::DataOutput &) const;
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
      namespace search {
        namespace suggest {
          extern PyType_Def PY_TYPE_DEF(Lookup);
          extern PyTypeObject *PY_TYPE(Lookup);

          class t_Lookup {
          public:
            PyObject_HEAD
            Lookup object;
            static PyObject *wrap_Object(const Lookup&);
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
