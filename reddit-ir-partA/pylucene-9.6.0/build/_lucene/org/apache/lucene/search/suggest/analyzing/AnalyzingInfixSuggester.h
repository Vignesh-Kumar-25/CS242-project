#ifndef org_apache_lucene_search_suggest_analyzing_AnalyzingInfixSuggester_H
#define org_apache_lucene_search_suggest_analyzing_AnalyzingInfixSuggester_H

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
        class BooleanClause$Occur;
        class BooleanQuery;
        class BooleanQuery$Builder;
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
    class Map;
    class Set;
  }
  namespace lang {
    class CharSequence;
    class Class;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {

            class AnalyzingInfixSuggester : public ::org::apache::lucene::search::suggest::Lookup {
             public:
              enum {
                mid_init$_a33281d9f57b3320,
                mid_init$_d728bb3650b098ec,
                mid_init$_05acf7dfd82b46bd,
                mid_init$_cdd5295914e5b458,
                mid_add_e92f6289033cdbc0,
                mid_addContextToQuery_5e13771594691293,
                mid_build_cb569720b2738e4b,
                mid_close_3353d9f14bbfd91a,
                mid_commit_3353d9f14bbfd91a,
                mid_getCount_058f5911dcf5d8a4,
                mid_load_9bb1d9d1c13a2459,
                mid_lookup_554e07bce5791d1b,
                mid_lookup_b26a235278b56084,
                mid_lookup_ed2be19985bc8b21,
                mid_lookup_4ba8b7f59e2f317c,
                mid_lookup_39870c8d7f2f9743,
                mid_ramBytesUsed_058f5911dcf5d8a4,
                mid_refresh_3353d9f14bbfd91a,
                mid_store_e5b51110cdc0babe,
                mid_update_e92f6289033cdbc0,
                mid_getDirectory_076c18ab71de2a26,
                mid_highlight_308ec7aa262631c8,
                mid_getTextFieldType_aa2922b4abccdfc8,
                mid_createResults_d4f940a836cf36dd,
                mid_getLastTokenQuery_940b9f2f8aee0aaa,
                mid_finishQuery_0c21a6fff137f71f,
                mid_addNonMatch_ce9a53a462fcf2dc,
                mid_addWholeMatch_4015304aa40ef6db,
                mid_addPrefixMatch_501d51603db79589,
                mid_getIndexWriterConfig_619ec1ea13da4c50,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AnalyzingInfixSuggester(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AnalyzingInfixSuggester(const AnalyzingInfixSuggester& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              static jboolean DEFAULT_ALL_TERMS_REQUIRED;
              static jboolean DEFAULT_HIGHLIGHT;
              static jint DEFAULT_MIN_PREFIX_CHARS;

              AnalyzingInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &);
              AnalyzingInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jboolean);
              AnalyzingInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jboolean, jboolean, jboolean);
              AnalyzingInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jboolean, jboolean, jboolean, jboolean);

              void add(const ::org::apache::lucene::util::BytesRef &, const ::java::util::Set &, jlong, const ::org::apache::lucene::util::BytesRef &) const;
              void addContextToQuery(const ::org::apache::lucene::search::BooleanQuery$Builder &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::search::BooleanClause$Occur &) const;
              void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
              void close() const;
              void commit() const;
              jlong getCount() const;
              jboolean load(const ::org::apache::lucene::store::DataInput &) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, jint, jboolean, jboolean) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::org::apache::lucene::search::BooleanQuery &, jint, jboolean, jboolean) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Map &, jint, jboolean, jboolean) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jint, jboolean, jboolean) const;
              jlong ramBytesUsed() const;
              void refresh() const;
              jboolean store(const ::org::apache::lucene::store::DataOutput &) const;
              void update(const ::org::apache::lucene::util::BytesRef &, const ::java::util::Set &, jlong, const ::org::apache::lucene::util::BytesRef &) const;
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
            extern PyType_Def PY_TYPE_DEF(AnalyzingInfixSuggester);
            extern PyTypeObject *PY_TYPE(AnalyzingInfixSuggester);

            class t_AnalyzingInfixSuggester {
            public:
              PyObject_HEAD
              AnalyzingInfixSuggester object;
              static PyObject *wrap_Object(const AnalyzingInfixSuggester&);
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
