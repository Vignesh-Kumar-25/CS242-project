#ifndef org_apache_lucene_search_suggest_analyzing_FreeTextSuggester_H
#define org_apache_lucene_search_suggest_analyzing_FreeTextSuggester_H

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
      }
      namespace search {
        namespace suggest {
          class InputIterator;
          class Lookup$LookupResult;
        }
      }
      namespace analysis {
        class Analyzer;
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
          namespace analyzing {

            class FreeTextSuggester : public ::org::apache::lucene::search::suggest::Lookup {
             public:
              enum {
                mid_init$_cea12a5ff05f6816,
                mid_init$_60b4f25c81c7d211,
                mid_init$_f5ea178e87521470,
                mid_init$_e82ec2fe50a576f2,
                mid_build_cb569720b2738e4b,
                mid_build_0154ba328304fe95,
                mid_get_4007c08c350a16ef,
                mid_getChildResources_b47b7eaa8124fb60,
                mid_getCount_058f5911dcf5d8a4,
                mid_load_9bb1d9d1c13a2459,
                mid_lookup_16d5caa7afd11423,
                mid_lookup_8bc51295a11801ce,
                mid_lookup_6b85c1153f97c225,
                mid_lookup_b26a235278b56084,
                mid_ramBytesUsed_058f5911dcf5d8a4,
                mid_store_e5b51110cdc0babe,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FreeTextSuggester(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FreeTextSuggester(const FreeTextSuggester& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              static jdouble ALPHA;
              static ::java::lang::String *CODEC_NAME;
              static jint DEFAULT_GRAMS;
              static jbyte DEFAULT_SEPARATOR;
              static jint VERSION_CURRENT;
              static jint VERSION_START;

              FreeTextSuggester(const ::org::apache::lucene::analysis::Analyzer &);
              FreeTextSuggester(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &);
              FreeTextSuggester(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint);
              FreeTextSuggester(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jbyte);

              void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
              void build(const ::org::apache::lucene::search::suggest::InputIterator &, jdouble) const;
              ::java::lang::Object get(const ::java::lang::CharSequence &) const;
              ::java::util::Collection getChildResources() const;
              jlong getCount() const;
              jboolean load(const ::org::apache::lucene::store::DataInput &) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, jboolean, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jint) const;
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
          namespace analyzing {
            extern PyType_Def PY_TYPE_DEF(FreeTextSuggester);
            extern PyTypeObject *PY_TYPE(FreeTextSuggester);

            class t_FreeTextSuggester {
            public:
              PyObject_HEAD
              FreeTextSuggester object;
              static PyObject *wrap_Object(const FreeTextSuggester&);
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
