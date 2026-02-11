#ifndef org_apache_lucene_analysis_ja_JapaneseTokenizerFactory_H
#define org_apache_lucene_analysis_ja_JapaneseTokenizerFactory_H

#include "org/apache/lucene/analysis/TokenizerFactory.h"

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
      namespace util {
        class AttributeFactory;
        class ResourceLoader;
        class ResourceLoaderAware;
      }
      namespace analysis {
        namespace ja {
          class JapaneseTokenizer;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {

          class JapaneseTokenizerFactory : public ::org::apache::lucene::analysis::TokenizerFactory {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_62c0fdc62292ffbf,
              mid_create_44a9683e79a6eb51,
              mid_inform_b60891107d793f0c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseTokenizerFactory(const JapaneseTokenizerFactory& obj) : ::org::apache::lucene::analysis::TokenizerFactory(obj) {}

            static ::java::lang::String *NAME;

            JapaneseTokenizerFactory();
            JapaneseTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::ja::JapaneseTokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseTokenizerFactory);
          extern PyTypeObject *PY_TYPE(JapaneseTokenizerFactory);

          class t_JapaneseTokenizerFactory {
          public:
            PyObject_HEAD
            JapaneseTokenizerFactory object;
            static PyObject *wrap_Object(const JapaneseTokenizerFactory&);
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
