#ifndef org_apache_lucene_analysis_ja_JapaneseIterationMarkCharFilterFactory_H
#define org_apache_lucene_analysis_ja_JapaneseIterationMarkCharFilterFactory_H

#include "org/apache/lucene/analysis/CharFilterFactory.h"

namespace java {
  namespace io {
    class Reader;
  }
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {

          class JapaneseIterationMarkCharFilterFactory : public ::org::apache::lucene::analysis::CharFilterFactory {
           public:
            enum {
              mid_init$_3353d9f14bbfd91a,
              mid_init$_62c0fdc62292ffbf,
              mid_create_b23e5bf4f305678f,
              mid_normalize_b23e5bf4f305678f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseIterationMarkCharFilterFactory(jobject obj) : ::org::apache::lucene::analysis::CharFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseIterationMarkCharFilterFactory(const JapaneseIterationMarkCharFilterFactory& obj) : ::org::apache::lucene::analysis::CharFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            JapaneseIterationMarkCharFilterFactory();
            JapaneseIterationMarkCharFilterFactory(const ::java::util::Map &);

            ::java::io::Reader create(const ::java::io::Reader &) const;
            ::java::io::Reader normalize(const ::java::io::Reader &) const;
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
          extern PyType_Def PY_TYPE_DEF(JapaneseIterationMarkCharFilterFactory);
          extern PyTypeObject *PY_TYPE(JapaneseIterationMarkCharFilterFactory);

          class t_JapaneseIterationMarkCharFilterFactory {
          public:
            PyObject_HEAD
            JapaneseIterationMarkCharFilterFactory object;
            static PyObject *wrap_Object(const JapaneseIterationMarkCharFilterFactory&);
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
