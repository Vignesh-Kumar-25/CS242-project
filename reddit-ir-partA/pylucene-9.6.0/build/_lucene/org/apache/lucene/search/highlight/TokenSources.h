#ifndef org_apache_lucene_search_highlight_TokenSources_H
#define org_apache_lucene_search_highlight_TokenSources_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class Analyzer;
      }
      namespace document {
        class Document;
      }
      namespace index {
        class Fields;
        class IndexReader;
        class Terms;
      }
    }
  }
}
namespace java {
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
      namespace search {
        namespace highlight {

          class TokenSources : public ::java::lang::Object {
           public:
            enum {
              mid_getAnyTokenStream_e6a7f96d508b0ff3,
              mid_getAnyTokenStream_d9dc81a2b8344f9d,
              mid_getTermVectorTokenStreamOrNull_a1e114fdb4ca9b84,
              mid_getTokenStream_8b9d27f99794cf30,
              mid_getTokenStream_d58c19cb47457af5,
              mid_getTokenStream_093f352dd1324ad5,
              mid_getTokenStream_09e5bdd2e392c921,
              mid_getTokenStream_e6a7f96d508b0ff3,
              mid_getTokenStream_c27b6c96ef4a1595,
              mid_getTokenStreamWithOffsets_daac1f8fbbdad80d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenSources(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TokenSources(const TokenSources& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::analysis::TokenStream getAnyTokenStream(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getAnyTokenStream(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::document::Document &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getTermVectorTokenStreamOrNull(const ::java::lang::String &, const ::org::apache::lucene::index::Fields &, jint);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::org::apache::lucene::index::Terms &);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::org::apache::lucene::index::Terms &, jboolean);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::org::apache::lucene::document::Document &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::java::lang::String &, const ::org::apache::lucene::index::Fields &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &, jint);
            static ::org::apache::lucene::analysis::TokenStream getTokenStreamWithOffsets(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &);
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
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(TokenSources);
          extern PyTypeObject *PY_TYPE(TokenSources);

          class t_TokenSources {
          public:
            PyObject_HEAD
            TokenSources object;
            static PyObject *wrap_Object(const TokenSources&);
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
