#ifndef org_apache_lucene_analysis_en_AbstractWordsFileFilterFactory_H
#define org_apache_lucene_analysis_en_AbstractWordsFileFilterFactory_H

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
      namespace util {
        class ResourceLoader;
        class ResourceLoaderAware;
      }
      namespace analysis {
        class CharArraySet;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace en {

          class AbstractWordsFileFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_62c0fdc62292ffbf,
              mid_getFormat_dc633f13a47328a8,
              mid_getWordFiles_dc633f13a47328a8,
              mid_getWords_cbabc13c6309e190,
              mid_inform_b60891107d793f0c,
              mid_isIgnoreCase_ee8b0a5fa521ddac,
              mid_createDefaultWords_cbabc13c6309e190,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractWordsFileFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractWordsFileFilterFactory(const AbstractWordsFileFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *FORMAT_SNOWBALL;
            static ::java::lang::String *FORMAT_WORDSET;

            AbstractWordsFileFilterFactory(const ::java::util::Map &);

            ::java::lang::String getFormat() const;
            ::java::lang::String getWordFiles() const;
            ::org::apache::lucene::analysis::CharArraySet getWords() const;
            void inform(const ::org::apache::lucene::util::ResourceLoader &) const;
            jboolean isIgnoreCase() const;
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
        namespace en {
          extern PyType_Def PY_TYPE_DEF(AbstractWordsFileFilterFactory);
          extern PyTypeObject *PY_TYPE(AbstractWordsFileFilterFactory);

          class t_AbstractWordsFileFilterFactory {
          public:
            PyObject_HEAD
            AbstractWordsFileFilterFactory object;
            static PyObject *wrap_Object(const AbstractWordsFileFilterFactory&);
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
