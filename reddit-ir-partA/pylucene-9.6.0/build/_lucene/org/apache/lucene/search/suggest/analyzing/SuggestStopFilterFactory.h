#ifndef org_apache_lucene_search_suggest_analyzing_SuggestStopFilterFactory_H
#define org_apache_lucene_search_suggest_analyzing_SuggestStopFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class CharArraySet;
      }
      namespace util {
        class ResourceLoader;
        class ResourceLoaderAware;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {

            class SuggestStopFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
             public:
              enum {
                mid_init$_3353d9f14bbfd91a,
                mid_init$_62c0fdc62292ffbf,
                mid_create_879ac71ff4d4fee2,
                mid_getStopWords_cbabc13c6309e190,
                mid_inform_b60891107d793f0c,
                mid_isIgnoreCase_ee8b0a5fa521ddac,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SuggestStopFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SuggestStopFilterFactory(const SuggestStopFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

              static ::java::lang::String *FORMAT_SNOWBALL;
              static ::java::lang::String *FORMAT_WORDSET;
              static ::java::lang::String *NAME;

              SuggestStopFilterFactory();
              SuggestStopFilterFactory(const ::java::util::Map &);

              ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
              ::org::apache::lucene::analysis::CharArraySet getStopWords() const;
              void inform(const ::org::apache::lucene::util::ResourceLoader &) const;
              jboolean isIgnoreCase() const;
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
            extern PyType_Def PY_TYPE_DEF(SuggestStopFilterFactory);
            extern PyTypeObject *PY_TYPE(SuggestStopFilterFactory);

            class t_SuggestStopFilterFactory {
            public:
              PyObject_HEAD
              SuggestStopFilterFactory object;
              static PyObject *wrap_Object(const SuggestStopFilterFactory&);
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
