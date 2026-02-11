#ifndef org_apache_lucene_index_memory_MemoryIndex_H
#define org_apache_lucene_index_memory_MemoryIndex_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace similarities {
          class Similarity;
        }
        class IndexSearcher;
      }
      namespace analysis {
        class TokenStream;
        class Analyzer;
      }
      namespace index {
        class IndexableField;
        namespace memory {
          class MemoryIndex;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Iterable;
    class Class;
    class String;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        namespace memory {

          class MemoryIndex : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_4f96af910856b303,
              mid_init$_d8388b1e026b6cdb,
              mid_addField_478dfff368e4b1d8,
              mid_addField_38aba301e560e5f0,
              mid_addField_e467c41684c2f97b,
              mid_addField_d8500f45dbc74a25,
              mid_addField_e7ad2f8d648789a0,
              mid_createSearcher_b11d3688f1db7801,
              mid_freeze_3353d9f14bbfd91a,
              mid_fromDocument_a46df9ec094c7eda,
              mid_fromDocument_acaede677c54c1c0,
              mid_fromDocument_f5482907ae408967,
              mid_keywordTokenStream_8f0bbc98fa75cf55,
              mid_reset_3353d9f14bbfd91a,
              mid_search_e75f0185d9093b4a,
              mid_setSimilarity_29acba51c4484d46,
              mid_toStringDebug_dc633f13a47328a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MemoryIndex(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MemoryIndex(const MemoryIndex& obj) : ::java::lang::Object(obj) {}

            MemoryIndex();
            MemoryIndex(jboolean);
            MemoryIndex(jboolean, jboolean);

            void addField(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &) const;
            void addField(const ::org::apache::lucene::index::IndexableField &, const ::org::apache::lucene::analysis::Analyzer &) const;
            void addField(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &, jint) const;
            void addField(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &) const;
            void addField(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &, jint, jint) const;
            ::org::apache::lucene::search::IndexSearcher createSearcher() const;
            void freeze() const;
            static MemoryIndex fromDocument(const ::java::lang::Iterable &, const ::org::apache::lucene::analysis::Analyzer &);
            static MemoryIndex fromDocument(const ::java::lang::Iterable &, const ::org::apache::lucene::analysis::Analyzer &, jboolean, jboolean);
            static MemoryIndex fromDocument(const ::java::lang::Iterable &, const ::org::apache::lucene::analysis::Analyzer &, jboolean, jboolean, jlong);
            ::org::apache::lucene::analysis::TokenStream keywordTokenStream(const ::java::util::Collection &) const;
            void reset() const;
            jfloat search(const ::org::apache::lucene::search::Query &) const;
            void setSimilarity(const ::org::apache::lucene::search::similarities::Similarity &) const;
            ::java::lang::String toStringDebug() const;
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
      namespace index {
        namespace memory {
          extern PyType_Def PY_TYPE_DEF(MemoryIndex);
          extern PyTypeObject *PY_TYPE(MemoryIndex);

          class t_MemoryIndex {
          public:
            PyObject_HEAD
            MemoryIndex object;
            static PyObject *wrap_Object(const MemoryIndex&);
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
