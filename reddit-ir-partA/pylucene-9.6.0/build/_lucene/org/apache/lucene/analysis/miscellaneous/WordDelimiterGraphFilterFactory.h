#ifndef org_apache_lucene_analysis_miscellaneous_WordDelimiterGraphFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_WordDelimiterGraphFilterFactory_H

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
        class TokenFilter;
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
      namespace analysis {
        namespace miscellaneous {

          class WordDelimiterGraphFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_62c0fdc62292ffbf,
              mid_create_921b42f27f2e4b65,
              mid_inform_b60891107d793f0c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WordDelimiterGraphFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WordDelimiterGraphFilterFactory(const WordDelimiterGraphFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;
            static ::java::lang::String *OFFSETS;
            static ::java::lang::String *PROTECTED_TOKENS;
            static ::java::lang::String *TYPES;

            WordDelimiterGraphFilterFactory();
            WordDelimiterGraphFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
            void inform(const ::org::apache::lucene::util::ResourceLoader &) const;
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
      namespace analysis {
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(WordDelimiterGraphFilterFactory);
          extern PyTypeObject *PY_TYPE(WordDelimiterGraphFilterFactory);

          class t_WordDelimiterGraphFilterFactory {
          public:
            PyObject_HEAD
            WordDelimiterGraphFilterFactory object;
            static PyObject *wrap_Object(const WordDelimiterGraphFilterFactory&);
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
